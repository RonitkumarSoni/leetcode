class Solution {
public:
    string reverseStr(string inputString, int k) {

        for (int i = 0; i < inputString.size(); i += 2 * k) {

            int left = i;
            int right = min(i + k - 1, (int)inputString.size() - 1);

            while (left < right) {
                swap(inputString[left], inputString[right]);
                left++;
                right--;
            }
        }

        return inputString;
    }
};
