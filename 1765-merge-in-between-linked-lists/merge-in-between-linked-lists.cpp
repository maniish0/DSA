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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* curr = list1;
        vector<ListNode*> arr;

        while(curr){
            arr.push_back(curr);
            curr = curr ->next;

        }

        arr[a -1] -> next = list2;
        curr  = list2;

        while(curr -> next){
            curr  = curr -> next;

        }

        curr -> next = arr[b+1];
        return list1;
        
    }
};