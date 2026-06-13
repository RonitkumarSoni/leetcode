class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<vector<int>> ans;

        for (int num : nums) {
            freq[num]++;

            int row = freq[num] - 1;

            if (row >= ans.size()) {
                ans.push_back({});
            }

            ans[row].push_back(num);
        }

        return ans;
    }
};
