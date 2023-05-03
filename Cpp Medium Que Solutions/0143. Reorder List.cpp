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
    // Reverse function , to reverse the given list.
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL)
        return NULL;
        ListNode* n,*r=NULL,*ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            n=new ListNode(ptr->val);
            if(r==NULL)
            {
                r=n;
            }
            else
            {
                n->next=r;
                r=n;
            }
            ptr=ptr->next;
        }
        return r;
    }
    void reorderList(ListNode* head) {
        ListNode* ptr,*list=NULL,*res=NULL,*n,*forward;
        int count=0,i=0;
        ptr=head;
        // counting the number of nodes in the list.
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        count/=2;
        ptr=head;
        // Traversing upto the half of the count.
        while(i<=count)
        {
            ptr=ptr->next;
            i++;
        }
        
        // Reversing the remaining nodes of the list .
        list=ptr;
        list=reverse(list);

        ptr=head;
        i=0;
        // Now making the list as it is needed in the result.
        while(i<=count || list!=NULL)
        {
            n=ptr;
            ptr=ptr->next;
            n->next=NULL;
            if(res==NULL)
            {
                res=n;
                forward=res;
            }
            else
            {
                forward->next=n;
                forward=forward->next;
            }
            if(list!=NULL)
            {
                n=list;
                list=list->next;
                n->next=NULL;
                forward->next=n;
                forward=forward->next;
            }
            i++;
        }
        head=res;
    }
};
