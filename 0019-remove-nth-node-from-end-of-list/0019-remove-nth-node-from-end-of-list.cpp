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
//         ListNode* curr = head;
//         ListNode* res = head;
//         int cnt=0;
//         while(curr != NULL){
//             cnt++;
//             curr = curr ->  next;
            
//         }
//         if(cnt == n) return head->next;
            
//         int temp = cnt - n;
//         curr = head;
//         temp--;
        
//         while(curr != NULL and temp--){
//             curr = curr->next;
//         }
//         if(curr->next->next != NULL or curr->next!=NULL){
//             res = curr->next->next;
//             curr->next = res;
//         }
        
//         return head;
        
        
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
};