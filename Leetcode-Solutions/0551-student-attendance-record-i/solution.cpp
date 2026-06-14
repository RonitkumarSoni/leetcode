class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0; 
        for(char ch : s){
            if(ch == 'A'){
                absent++;
            }
            if(absent >= 2){
                return false;
            }

            if(s.find("LLL") != string::npos){
                return false;
            }
        }

        return true;
    }
};
