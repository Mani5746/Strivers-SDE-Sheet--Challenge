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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* temp=head;
      
       int sz=1;

        while(temp->next!=NULL)
        {
            
            
            temp=temp->next;
            sz++;
        }

         temp->next=head;

       
        temp=head;
        

       

        k=k%sz;
        int end=sz-k;
        
       while(end>1)
        {
           
            temp=temp->next;
            end--;
            
        }
       head=temp->next;
       temp->next=NULL;
  
        return head;

    }
};
