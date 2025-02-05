class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int > prr;
        for(int i = 0;i<n;i++){
            prr.push_back(nums[i]);
            prr.push_back(nums[i+n]);
        }
        return prr;
        
    }
};