/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;

       while(fast != nullptr && fast-> next != nullptr){
        slow = slow -> next ;
        fast = fast -> next -> next;
        if(slow == fast) return true; // slow and fast meet that means there is a cycle in the list
       }
    return false;
    }
};