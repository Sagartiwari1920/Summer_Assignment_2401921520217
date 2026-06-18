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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp;
        ListNode* prev=NULL;
        temp=head;
        while(temp!=NULL)
        {
            count++;
            
            temp=temp->next;
        }
        if(count==n)
       {
        
        temp=head;
        head=head->next;
        delete temp;
        return head;

       }
      
        int jump=count-n;
        temp=head;
        

        while(jump--)
        {
            prev=temp;
         temp=temp->next;
         
        }
        prev->next=temp->next;
        delete temp;
        return head;
        


    }
};