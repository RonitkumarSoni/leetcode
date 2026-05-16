class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> nextGreater;
        stack<int> st;

        for (int i = nums2.size() - 1; i >= 0; i--) {

            while (!st.empty() && st.top() < nums2[i]) {
                st.pop();
            }

            if (st.empty()) {
                nextGreater[nums2[i]] = -1;
            } else {
                nextGreater[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        vector<int> answer;

        for (int number : nums1) {
            answer.push_back(nextGreater[number]);
        }

        return answer;
    }
};
