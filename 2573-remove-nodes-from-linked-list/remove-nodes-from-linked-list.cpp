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
    ListNode* removeNodes(ListNode* head) {
        vector<ListNode*> arr;
        arr.push_back(new ListNode(0, head));
        ListNode* cur = head;

        while (cur) {
            arr.push_back(cur);
            cur = cur->next;
        }

        ListNode* rightMaxi = new ListNode(0, nullptr);
        for (int i = arr.size() - 1; i > 0; i--) {
            if (rightMaxi->val > arr[i]->val) {
                arr[i - 1]->next = rightMaxi;
            } else {
                rightMaxi = arr[i];
            }
        }

        return arr[0]->next;
    }
};