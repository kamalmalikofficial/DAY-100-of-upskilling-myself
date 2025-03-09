class Solution {
    public:
        int largestAltitude(vector<int>& gain) {
            int val = 0;
            int m = 0;
            for(int i = 0;i<gain.size();i++){
                val= val+ gain[i];
                if(val> m){
                    m= val;
                }
            }
            return m;
            
        }
    };
    