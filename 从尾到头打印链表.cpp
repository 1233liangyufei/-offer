/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<int> nodes;//初始化一个栈，用来将链表放入栈中，复习知识点，如何定义一个栈 stack<栈的变量类型> 栈名
        vector<int> result;//初始化一个一维向量组，即一个链表，存储最终结果，声明一个一维向量组的方法为 vector<向量组的变量类型>  向量组名称
        ListNode* node = head;//声明一个结构体指针结点node,指向一个链表的头节点head
        while(node!= NULL){//注意空指针是大写不是小写
            //遍历链表，将结点内容压栈
            //nodes.push(head->val);//将链表结点压栈,node 是结构体指针，访问其成员变量使用 -> 而不是 .
            //head = head->next;//链表指针向后移动
            //问题：  直接使用head操作链表，操作完后head指向了链表结尾，改变了原始数据，不好，应该使用node存储head，然后用node操作链表，不改变原始数据
            nodes.push(node->val);//将链表结点压栈,node 是结构体指针，访问其成员变量使用 -> 而不是 
            node = node->next;//链表指针向后移动
        }
        while(!nodes.empty()){//当栈不为空时
        result.push_back(nodes.top());//将栈顶压入result链表 注意，vector使用push_back，而stack使用push
            nodes.pop();//弹出栈顶
        
        }
        return result;//返回翻转的链表
        
        
            
            
    }
};
