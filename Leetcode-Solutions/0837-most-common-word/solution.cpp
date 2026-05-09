class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedWords(banned.begin(), banned.end());
        unordered_map<string, int> count;

        string word = "";
        string answer = "";

        for (char ch : paragraph) {
            if (isalpha(ch)) {
                word += tolower(ch);
            } else {
                if (word != "" && bannedWords.count(word) == 0) {
                    count[word]++;
                    if (answer == "" || count[word] > count[answer]) {
                        answer = word;
                    }
                }
                word = "";
            }
        }

        if (word != "" && bannedWords.count(word) == 0) {
            count[word]++;
            if (answer == "" || count[word] > count[answer]) {
                answer = word;
            }
        }

        return answer;
    }
};
