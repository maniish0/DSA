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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int> arr;
        ListNode* curr = head;

        while(curr){
            if(curr -> val != val){
                arr.push_back(curr->val);
            }
            curr = curr -> next;
        }
        if(arr.empty()){
            return nullptr;
        }
         ListNode* result = new ListNode(arr[0]);
         curr = result;
         for(int i = 1; i < arr.size(); i++){
            ListNode* node = new ListNode(arr[i]);
            curr->next = node;
            curr = curr-> next;
        }
        return result;

    }
};