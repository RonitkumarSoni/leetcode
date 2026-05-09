class Solution {
public:
    string toLowerCase(string inputString) {

        for (int i = 0; i < inputString.size(); i++) {

            if (inputString[i] >= 'A' && inputString[i] <= 'Z') {
                inputString[i] = inputString[i] + 32;
            }
        }

        return inputString;
    }
};
