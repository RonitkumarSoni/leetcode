class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> answer;
        vector<int> count(nums.size() + 1, 0);

        for (int number : nums) {
            count[number]++;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (count[i] == 0) {
                answer.push_back(i);
            }
        }

        return answer;
    }
};
