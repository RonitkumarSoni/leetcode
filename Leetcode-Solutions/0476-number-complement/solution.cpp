class Solution {
public:
    int findComplement(int num) {
        long long answer = 0;
        long long placeValue = 1;

        while (num > 0) {
            int bit = num % 2;

            if (bit == 0) {
                answer += placeValue;
            }

            placeValue = placeValue * 2;
            num = num / 2;
        }

        return answer;
    }
};
