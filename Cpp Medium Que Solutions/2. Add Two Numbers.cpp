/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr,*n,*head=NULL;
        int c=0,sum=0;
        while(l1!=NULL && l2!=NULL)
        {
            sum=c+l1->val+l2->val;
            l1=l1->next;
            l2=l2->next;
            c=sum/10;
            sum=sum%10;
            n=new ListNode(sum);
            if(head==NULL)
            {
            head=n;
            ptr=head;
            }
            else
            {
                ptr->next=n;
                ptr=ptr->next;
            }
        }
        while(l1!=NULL)
        {
            sum=c+l1->val;
            l1=l1->next;
            c=sum/10;
            sum=sum%10;
            n=new ListNode(sum);
            if(head==NULL)
            head=n;
            else
            {
                ptr->next=n;
                ptr=ptr->next;
            }
        }
        while(l2!=NULL)
        {
            sum=c+l2->val;
            l2=l2->next;
            c=sum/10;
            sum=sum%10;
            n=new ListNode(sum);
            if(head==NULL)
            head=n;
            else
            {
                ptr->next=n;
                ptr=ptr->next;
            }
        }
        if(c!=0)
        {
            n=new ListNode(c);
            ptr->next=n;
        }
        return head;
    }
};
