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
    void in(ListNode* r,vector<int>&v)
    {
        if(r==NULL)
        return ;
        v.push_back(r->val);
        in(r->next,v);
    }
    ListNode* insertionSortList(ListNode* head) {
        vector<int>v;
        in(head,v);
        sort(v.begin(),v.end());
        ListNode* p=NULL,*n;
        p=head;
        for(int i=0;i<v.size();i++)
        {
            p->val=v[i];
            p=p->next;
        }
        return head;
    }
};
