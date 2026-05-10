class Solution {
public:

    int getDigitSquareSum(int number) {

        int sum = 0;

        while (number > 0) {

            int digit = number % 10;
            sum += digit * digit;

            number = number / 10;
        }

        return sum;
    }

    bool isHappy(int n) {

        unordered_set<int> visitedNumbers;

        while (n != 1 && visitedNumbers.count(n) == 0) {

            visitedNumbers.insert(n);

            n = getDigitSquareSum(n);
        }

        return n == 1;
    }
};
