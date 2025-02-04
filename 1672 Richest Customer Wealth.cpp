class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum =INT_MIN;
        int m = accounts.size();

        for(int i = 0;i<m;i++){
            int ins=0;

            for(int j=0;j<accounts[i].size();j++){
                ins+=accounts[i][j];
            }
            sum=max(ins,sum);
        }
        return sum;
    }
};