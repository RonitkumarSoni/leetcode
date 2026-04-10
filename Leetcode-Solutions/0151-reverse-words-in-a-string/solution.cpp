class Solution {
public:
    string reverseWords(string s) {
        vector<string> store;
        string word = "";
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                word += s[i];
            }
            else{
                if(!word.empty()){
                    store.push_back(word);
                    word = "";
                }
            }
        }
        
        if(!word.empty()){
            store.push_back(word);
        }

        string ans = "";
        for(int i = store.size() - 1; i >= 0; i--){
            ans += store[i];
            if(i != 0){
                ans += " ";
            }
        }
        
        return ans;
    }
};
