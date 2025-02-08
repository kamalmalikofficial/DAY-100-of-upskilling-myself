class Solution {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int> arr;
            for(int i = 0;i<nums.size();i++){
                int ptr =0;
                for(int j = 0;j<nums.size();j++){
                    if(nums[j]<nums[i] && j != i){
                        ptr++;
                    }
                }
                arr.push_back(ptr);
            }
            return arr;
            
        }
    };