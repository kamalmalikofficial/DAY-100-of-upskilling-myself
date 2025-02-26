class Solution {
    public:
        vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
            int max= INT_MAX;
            int ind = 0;
            while(k>0){
                for(int i= 0;i<nums.size();i++){
                    if(nums[i]<max){
                        max = nums[i];
                        ind = i;
                    }
                }
                max = INT_MAX;
                nums[ind]*= multiplier;   
                k--;
            }
            return nums;
    
        }
    };