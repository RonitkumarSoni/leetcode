class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int pipeCount = 0;

        for (char ch : s) {
            if (ch == '|') {
                pipeCount++;
            } 
            else if (ch == '*' && pipeCount % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};
