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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr=NULL,*head=NULL,*n=NULL;
        head=ptr;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<=list2->val)
            {
                n=new ListNode(list1->val);
                if(head==NULL)
                {
                    head=n;
                    ptr=n;
                }
                else
                {
                    ptr->next=n;
                    ptr=ptr->next;
                }
                list1=list1->next;
            }
            else
            {
                n=new ListNode(list2->val);
                if(head==NULL)
                {
                    head=n;
                    ptr=n;
                }
                else
                {
                    ptr->next=n;
                    ptr=ptr->next;
                }
                list2=list2->next;
            }
        }
        while(list1!=NULL)
        {
            n=new ListNode(list1->val);
            if(head==NULL)
            {
                head=n;
                ptr=n;
            }
            else
            {
                ptr->next=n;
                ptr=ptr->next;
            }
            list1=list1->next;
        }
        while(list2!=NULL)
        {
            n=new ListNode(list2->val);
            if(head==NULL)
            {
                head=n;
                ptr=n;
            }
            else
            {
                ptr->next=n;
                ptr=ptr->next;
            }
            list2=list2->next;
        }
        return head;
    }
};
