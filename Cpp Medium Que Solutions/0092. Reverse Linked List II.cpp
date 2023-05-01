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
    ListNode* reverse(ListNode* head)
    {
        ListNode* n,*r=NULL;
        while(head!=NULL)
        {
            n=new ListNode(head->val);
            if(r==NULL)
            r=n;
            else
            {
                n->next=r;
                r=n;
            }
            head=head->next;
        }
        return r;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        return head;
        ListNode* ptr,*r=NULL,*n,*rightList;
      
        int i=1;
        ptr=head;
        while(i<left)
        {
            ptr=ptr->next;
            i++;
        }
      
        --i;
      // Taking out the list that has to be reversed in ListNode r.
        while(i<right)
        {
            if(r==NULL)
            {
                r=ptr;
                n=r;
            }
            else
            {
                n=n->next;
            }
            i++;
        }
        if(n->next!=NULL)
        rightList=n->next;
        else
        rightList=NULL;
        n->next=NULL;
        // the list has passed to reverse function.
        r=reverse(r);

      // Combining the three parts of list --> the beginning, middle one that has been reveresed and the last list.
        if(left>1)
        ptr=head;
        else
        ptr=NULL;
        i=1;
        while((i+1)<left)
        {
            ptr=ptr->next;
            i++;
        }
        if(ptr==NULL)
        {
        ptr=r;
        head=ptr;
        }
        else
        ptr->next=r;
        while(ptr->next!=NULL)
        ptr=ptr->next;
        ptr->next=rightList;
      
        return head;
    }
};
