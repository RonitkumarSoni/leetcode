class Solution {
public:
    string toHex(int num) {

        if (num == 0) {
            return "0";
        }

        string hexChars = "0123456789abcdef";
        string answer = "";

        unsigned int number = num;

        while (number > 0) {

            int remainder = number % 16;

            answer = hexChars[remainder] + answer;

            number = number / 16;
        }

        return answer;
    }
};
