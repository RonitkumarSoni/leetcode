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
    vector<int> nextLargerNodes(ListNode* head) {

        vector<int> ans;
        stack<int> st;

        while (head) {

            while (!st.empty() && head->val > ans[st.top()]) {
                int index = st.top();
                st.pop();

                ans[index] = head->val;
            }

            st.push(ans.size());
            ans.push_back(head->val);

            head = head->next;
        }

        while (!st.empty()) {
            ans[st.top()] = 0;
            st.pop();
        }

        return ans;
    }
};