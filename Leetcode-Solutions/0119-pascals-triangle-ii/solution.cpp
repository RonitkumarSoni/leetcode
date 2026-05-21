class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long value = 1;

        row.push_back(1);

        for(int i = 1; i <= rowIndex; i++){
            value = value*(rowIndex - i + 1) / i;

            row.push_back(value);
        }
        return row;
    }
};
