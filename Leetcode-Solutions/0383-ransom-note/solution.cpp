class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int letterCount[26] = {0};

        for (char ch : magazine) {
            letterCount[ch - 'a']++;
        }

        for (char ch : ransomNote) {

            if (letterCount[ch - 'a'] == 0) {
                return false;
            }

            letterCount[ch - 'a']--;
        }

        return true;
    }
};
