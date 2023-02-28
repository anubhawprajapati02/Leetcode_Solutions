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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        int i=0;
        ListNode* ptr,*n;
        ptr=head;
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        sort(v.begin(),v.end());
        head=NULL;
        ptr=NULL;
        if(v.size()>0)
        {
            while(i<v.size())
            {
                n=new ListNode(v[i]);
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
                i++;
            }
        }
        return head;
    }
};
