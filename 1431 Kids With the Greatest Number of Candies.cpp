class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            int a = INT_MIN;
            for(int i = 0;i<candies.size();i++){
                if(candies[i]>a){
                    a= candies[i];
                }
            }
            vector<bool> arr;
            for(int i = 0;i<candies.size();i++){
                if(candies[i]+extraCandies >= a){
                    arr.push_back(true);
                }
                else{
                    arr.push_back(false);
                }
            }
            return arr;
    
        }
    };
    