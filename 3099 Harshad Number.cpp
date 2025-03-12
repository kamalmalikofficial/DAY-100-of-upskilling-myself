class Solution {
    public:
        int sumOfTheDigitsOfHarshadNumber(int x) {
            int xx  = x;
            int a = 0;
            while(x>0){
                a = a+ x%10 ;
                x/=10;
            }
            if(xx%a == 0){
                return a;
            }
            return -1;
            
        }
    };