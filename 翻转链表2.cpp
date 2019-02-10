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
    ListNode* ReverseList(ListNode* pHead) {
        ListNode *pReversedHead = NULL;//保存翻转后的头结点
        ListNode *pNode = pHead;//当前结点
        ListNode *pPre = NULL;//前一个结点
        ListNode *pNext = NULL;//后一个结点
        while(pNode!=NULL){
            pNext = pNode->next;  //记录当前结点的下一个结点与pNext；
            pNode->next = pPre;   //翻转链表，将当前结点的后继指向其前驱
            pPre = pNode;         //指针整体向前移动一次
            pNode = pNext;
        }
        pReversedHead = pPre;     //pReversedHead 即为翻转后的头节点
        return pReversedHead;
        

    }
};
