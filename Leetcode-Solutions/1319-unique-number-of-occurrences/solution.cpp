class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;

        for(int num : arr){
            freq[num]++;
        }

        unordered_set<int> s;

        for(auto it : freq){
            s.insert(it.second);
        }

        return s.size() == freq.size();
    }
};
