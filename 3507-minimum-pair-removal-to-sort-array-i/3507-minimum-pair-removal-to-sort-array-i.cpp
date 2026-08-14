class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1])
                return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

        while (!isSorted(nums)) {
            int minSum = INT_MAX;
            int index = 0;

            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] + nums[i + 1] < minSum) {
                    minSum = nums[i] + nums[i + 1];
                    index = i;
                }
            }

            nums[index] = minSum;
            nums.erase(nums.begin() + index + 1);

            operations++;
        }

        return operations;
    }
};