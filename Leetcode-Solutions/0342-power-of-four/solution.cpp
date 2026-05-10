class Solution {
public:
    bool isPowerOfFour(int number) {

        if (number <= 0) {
            return false;
        }

        while (number % 4 == 0) {
            number = number / 4;
        }

        return number == 1;
    }
};
