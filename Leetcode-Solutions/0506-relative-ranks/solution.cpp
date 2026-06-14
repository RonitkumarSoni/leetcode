class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> arr;

        for(int i = 0; i < score.size(); i++){
            arr.push_back({score[i],i});
        }

        sort(arr.rbegin(), arr.rend());

        vector<string> ans(score.size());

        for(int i = 0; i < arr.size(); i++){
            int index = arr[i].second;

            if(i == 0){
                ans[index] = "Gold Medal";
            }
            else if(i == 1){
                ans[index] = "Silver Medal";
            }
            else if(i == 2){
                ans[index] = "Bronze Medal";
            }
            else{
                ans[index] = to_string(i + 1);
            }
        }

        return ans;
    }
};
