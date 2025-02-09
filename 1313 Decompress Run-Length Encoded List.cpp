class Solution {
    public:
        vector<int> decompressRLElist(vector<int>& nums) {
            vector<int> arr;
            for(int i = 0;i<nums.size()-1;i++){
                int a = nums[i];
                while(a>0){
                    arr.push_back(nums[i+1]);
                    a--;
                }
                i++;
            }
            return arr;    
        }
    };