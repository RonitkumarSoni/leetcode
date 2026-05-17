class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {

        int aliceTotal = 0;
        int bobTotal = 0;

        for (int candy : aliceSizes) {
            aliceTotal += candy;
        }

        for (int candy : bobSizes) {
            bobTotal += candy;
        }

        int difference = (aliceTotal - bobTotal) / 2;

        unordered_set<int> bobCandies(bobSizes.begin(), bobSizes.end());

        for (int candy : aliceSizes) {

            int neededCandy = candy - difference;

            if (bobCandies.count(neededCandy)) {
                return {candy, neededCandy};
            }
        }

        return {};
    }
};
