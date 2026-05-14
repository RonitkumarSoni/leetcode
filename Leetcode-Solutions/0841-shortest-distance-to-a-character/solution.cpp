class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        int n = s.size();
        vector<int> answer(n);

        for (int i = 0; i < n; i++) {

            int shortestDistance = n;

            for (int j = 0; j < n; j++) {
                if (s[j] == c) {
                    int distance = abs(i - j);
                    shortestDistance = min(shortestDistance, distance);
                }
            }

            answer[i] = shortestDistance;
        }

        return answer;
    }
};
