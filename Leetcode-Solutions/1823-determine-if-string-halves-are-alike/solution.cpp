class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    bool halvesAreAlike(string s) {
        int n = s.length();
        int count1 = 0, count2 = 0;

        for (int i = 0; i < n / 2; i++) {
            if (isVowel(s[i])) count1++;
        }

        for (int i = n / 2; i < n; i++) {
            if (isVowel(s[i])) count2++;
        }

        return count1 == count2;
    }
};
