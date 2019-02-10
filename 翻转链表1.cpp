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
        ListNode *ANode = NULL;
        ListNode *BNode = pHead;
        ListNode *CNode = NULL;
        while(BNode!= NULL){
               CNode = BNode->next;
               BNode->next = ANode;
               ANode = BNode;
               BNode = CNode;
               CNode = BNode->next;
        }
        return ANode;
        

    }
};
