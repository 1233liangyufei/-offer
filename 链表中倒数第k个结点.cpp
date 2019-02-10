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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
    	if(pListHead == NULL || k == 0){
            return NULL;//判断链表是否空表，K是否不符合规范
        }
    ListNode *AList = pListHead;//初始化A指针，记录前面结点
    ListNode *BList = pListHead;//初始化b指针，记录A指针所指后k位位置，二者相互向后移动，当B指针指向链表末位时，A指针指向链表倒数第k个结点
        
    for(int i = 0;i<k-1;i++){//将A后移K位，当链表长度不足k时，直接返回NULL，根据规律只需要向后移动k-1位即可，因为不移动时，到达最后一位是倒数第1个结点，所以移动k-1次即可到达最后k个结点
        if(AList->next!=NULL)
        AList = AList->next;
        else
            return NULL;
    }
    /*while(k--){
        BList = BList->next;//向后移动k次
    }*/    
    while(AList->next != NULL){//双指针全向右移动，知道到达链表末尾  AList->next == NULL代表AList后面一位是空指针，代表到达数组尾部
        BList = BList->next;
        AList = AList->next;
    }
        
      return BList;//返回第k个结点
    }
};
