class Solution {
public:
    vector<string> result;

    void solve(string s, int index, int parts, string current) {
        
        if(parts == 4 && index == s.size()) {
            current.pop_back();
            result.push_back(current);
            return;
        }

        if(parts >= 4) return;

        for(int len = 1; len <= 3; len++) {
            if(index + len > s.size()) break;

            string part = s.substr(index, len);

            if((part[0] == '0' && part.length() > 1) || stoi(part) > 255)
                continue;

            solve(s, index + len, parts + 1, current + part + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        solve(s, 0, 0, "");
        return result;
    }
};
