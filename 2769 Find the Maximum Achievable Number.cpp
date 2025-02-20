class Solution {
    public:
        int theMaximumAchievableX(int num, int t) {
            int x = 0;
            while(t>0){
                num+=2;
                t--;
            }
            return num;        
        }
    };