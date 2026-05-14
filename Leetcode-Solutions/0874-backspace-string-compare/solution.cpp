class Solution {
public:
    string buildString(string text) {
        string result = "";

        for (char ch : text) {
            if (ch == '#') {
                if (!result.empty()) {
                    result.pop_back();
                }
            } else {
                result += ch;
            }
        }

        return result;
    }

    bool backspaceCompare(string s, string t) {
        return buildString(s) == buildString(t);
    }
};
