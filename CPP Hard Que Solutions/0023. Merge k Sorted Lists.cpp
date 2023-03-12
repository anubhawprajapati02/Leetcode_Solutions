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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        int i,j;
        ListNode* head=NULL,*n,*p;
        for(i=0;i<lists.size();i++)
        {
            p=lists[i];
            while(p!=NULL)
            {
            v.push_back(p->val);
            p=p->next;
            }
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            n=new ListNode(v[i]);
            if(head==NULL)
            {
                head=n;
                p=head;
            }
            else
            {
                p->next=n;
                p=p->next;
            }
        }
        return head;
    }
};
