class Solution {
    public:
        vector<int> leftRightDifference(vector<int>& nums) {
            int sumleft = 0;
            int sumright = 0;
            vector<int> left;
            vector<int> right;
            vector<int> arr;
    
    
            for(int i = 0;i<nums.size();i++){
                sumright= sumright+ nums[i]; 
            }
    
            for(int i = 0;i<nums.size();i++){
                sumright-= nums[i];
                right.push_back(sumright);
                
            }
            left.push_back(0);
            for(int i = 1;i<nums.size();i++){
                sumleft += nums[i-1];
                left.push_back(sumleft);
                
            }
            for(int i = 0;i<nums.size();i++){
               arr.push_back(abs(left[i]-right[i]));
                
            }
            return arr;
        }
    };