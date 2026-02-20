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
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         ListNode* prevSlow  = NULL;
//         ListNode* slow      = head;
//         ListNode* fast      = head;
        
//         while(fast && fast->next) {
//             prevSlow = slow;
//             slow = slow->next;
            
//             fast = fast->next->next;
//         }
        
//         if(prevSlow == NULL) {
//             return NULL;
//         }
        
//         prevSlow->next = slow->next; 
//          //here we point the previous node (before the slow where the middle found) to the next Node to the middle of the LL. 
//         // For Eg : 1,2,3,4   And in this ll the mid is "3" then we point the "2" -> "4" by USING " prevSlow->next = slow->next;"
        
//         delete(slow);
        
//         return head;
//     }
// };
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* prevSlow = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            prevSlow = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prevSlow == NULL){
            return NULL;
        }
        prevSlow->next = slow->next;

        delete (slow);

        return head;








        
    }
};
