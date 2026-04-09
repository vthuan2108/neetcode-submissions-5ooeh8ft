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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!= NULL&& fast->next!= NULL){
            slow=slow->next;
            fast=fast->next->next; // two step ahead
        }
    
    // reverse array2
    ListNode* curr= slow->next; // node dau day 2
    ListNode *prev= NULL;
    slow->next=NULL;
    while(curr !=NULL){
        ListNode* tmp= curr->next; 
        curr->next=prev; 
        prev=curr;
        curr=tmp;
    }

    // 3. merge
    ListNode* l1 = head;
    ListNode* l2 = prev;// tro den node cuoi 

    while(l2){
        ListNode* n1 = l1->next;
        ListNode* n2 = l2->next;

        l1->next = l2;
        l2->next = n1;

        l1 = n1;
        l2 = n2;
    }
    }
};
