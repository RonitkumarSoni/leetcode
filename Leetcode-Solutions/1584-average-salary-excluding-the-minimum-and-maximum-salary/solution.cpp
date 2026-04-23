#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        int minVal = INT_MAX;
        int maxVal = INT_MIN;
        int sum = 0;

        for (int s : salary) {
            sum += s;
            minVal = min(minVal, s);
            maxVal = max(maxVal, s);
        }

        sum = sum - minVal - maxVal;

        return (double)sum / (salary.size() - 2);
    }
};
