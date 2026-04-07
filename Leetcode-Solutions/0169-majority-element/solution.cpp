class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int freq = nums.size() / 2;

        for (int value : nums) {
            mp[value]++;

            if (mp[value] > freq) {
                return value;
            }
        }

        return -1;
    }
};
