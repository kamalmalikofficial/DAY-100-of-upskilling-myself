class Solution {
    public:
        double minimumAverage(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int str = 0;
            int end = nums.size()-1;
            vector<double>average;
    
            while(str<end){
                average.push_back(( nums[str]+ nums[end])/2.0);
                str++;
                end--;
    
            }
            double minn = DBL_MAX;
            for(int i = 0;i<average.size();i++){
                if(average[i]<minn){
                    minn = average[i];
                }
            }
            return minn;
            
        }
    };