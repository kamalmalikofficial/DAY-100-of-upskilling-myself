class Solution {
    public:
        vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
            int a =  nums.size();
            vector <int > target;
    
            for(int i = 0;i<a;i++){
                target.insert(target.begin()+index[i],nums[i]);
           
            }
            return target;
        } 
    };