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
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        priority_queue<int>pq;
        while(temp1!=NULL)
        {
          pq.push(temp1->val);
          temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
          pq.push(temp2->val);
          temp2=temp2->next;
        }
        ListNode* head=NULL;
        
        while(!pq.empty())
        {
            if(head==NULL)
            {
                head=new ListNode(pq.top());
                pq.pop();
                continue;
            }
            ListNode* temp= new ListNode(pq.top());
            pq.pop();
            temp->next=head;
            head=temp;
        }
        return head;

    }
};