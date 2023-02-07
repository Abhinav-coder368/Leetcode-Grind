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
     bool isEven(ListNode* head, int k){
        while(k && head){
            head = head->next;
            k--;
        }

        return k==0;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL) {
        return NULL;
    }
        if(head ->next == NULL) return head;
        if(!isEven(head,k)) return head;
    
    //step1: reverse first k nodes
    ListNode* next = NULL;
    ListNode* curr = head;
    ListNode* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(next != NULL) {
        head -> next = reverseKGroup(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
    }
};