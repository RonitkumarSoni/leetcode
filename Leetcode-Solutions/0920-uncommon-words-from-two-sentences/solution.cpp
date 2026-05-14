class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string, int> wordCount;
        vector<string> answer;

        string word = "";
        s1 += ' ';
        s2 += ' ';

        for (char ch : s1) {
            if (ch == ' ') {
                wordCount[word]++;
                word = "";
            } else {
                word += ch;
            }
        }

        for (char ch : s2) {
            if (ch == ' ') {
                wordCount[word]++;
                word = "";
            } else {
                word += ch;
            }
        }

        for (auto pair : wordCount) {
            if (pair.second == 1) {
                answer.push_back(pair.first);
            }
        }

        return answer;
    }
};
