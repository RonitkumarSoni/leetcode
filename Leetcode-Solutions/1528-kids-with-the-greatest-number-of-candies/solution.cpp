class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;

        for (int c : candies) {
            if (c > maxCandies) maxCandies = c;
        }

        vector<bool> ans;

        for (int c : candies) {
            if (c + extraCandies >= maxCandies) ans.push_back(true);
            else ans.push_back(false);
        }

        return ans;
    }
};
