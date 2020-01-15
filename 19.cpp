//Given a linked list, remove the n-th node from the end of list and return its head.
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* head2 = head;
        ListNode* head3 = head;
        
        if (head->next == NULL)
            return NULL;
        for(int i=0; i<n; i++)
        {
            head3=head3->next;
        }
        if(!head3)
            return head->next;
        while(head3->next!=NULL)
        {
            head2=head2->next;
            head3=head3->next;
        }
        head2->next = head2->next->next;
        return head;
    }
};


//通过在开头生成两个间隔为 N 的指针达到只遍历一次就能找到倒数第N个的方法
//结果显示内存使用增加，因为指针过多
