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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int>v;
        int i;
        ListNode* ptr,*n=NULL;
        unordered_map<int,int>m;
        ptr=head;
        while(ptr!=NULL)
        {
            if(!m.count(ptr->val))
            {
                m[ptr->val]++;
                v.push_back(ptr->val);
            }
            ptr=ptr->next;
        }
        sort(v.begin(),v.end());
        head=NULL;
        for(i=0;i<v.size();i++)
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
        }
        return head;
    }
};
