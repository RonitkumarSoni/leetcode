class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string s : sentences) {
            int words = 1; // at least 1 word

            for (char c : s) {
                if (c == ' ') words++;
            }

            if (words > maxWords) maxWords = words;
        }

        return maxWords;
    }
};
