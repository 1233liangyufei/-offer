/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {//递归写法
        if(pHead1 == NULL){
            return pHead2;//如果pHead1是空的，直接输出pHead2
        }
        if(pHead2 == NULL){
            return pHead1;//如果pHead2是空的，直接输出pHead1
        }
        ListNode *ListMergeHead = NULL;//定义整合后的链表
        if(pHead1->val >= pHead2->val){//寻找二者中较小的一个加入链表
            ListMergeHead = pHead2;
            ListMergeHead->next = Merge(pHead1,pHead2->next);//递归操作，将剩余的链表继续整合加入其中
        }else{
            ListMergeHead = pHead1;
            ListMergeHead->next = Merge(pHead1->next,pHead2);
        }
        return ListMergeHead;//返回整合后的链表
    }
}; 
