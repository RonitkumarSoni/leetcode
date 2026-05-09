class Solution {
public:
    bool rotateString(string originalString, string targetString) {

        if (originalString.size() != targetString.size()) {
            return false;
        }

        string doubledString = originalString + originalString;

        if (doubledString.find(targetString) != string::npos) {
            return true;
        }

        return false;
    }
};
