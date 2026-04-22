class Solution {
public:
    string capitalizeTitle(string title) {
        for (int i = 0; i < title.size(); i++) {
            title[i] = tolower(title[i]);
        }

        int i = 0, n = title.size();

        while (i < n) {
            int j = i;

            while (j < n && title[j] != ' ') j++;

            int len = j - i;

            if (len > 2) {
                title[i] = toupper(title[i]);
            }

            i = j + 1;
        }

        return title;
    }
};
