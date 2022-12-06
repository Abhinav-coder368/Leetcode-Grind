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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> arr;
        auto dummy = new ListNode(), iter = head;
        for(; iter; iter = iter -> next) 
            arr.push_back(iter -> val);
        iter = dummy;
        for(int i = 0; i < size(arr); i += 2) 
            iter = iter -> next = new ListNode(arr[i]);
        for(int i = 1; i < size(arr); i += 2) 
            iter = iter -> next = new ListNode(arr[i]);
        return dummy -> next;
    }
};