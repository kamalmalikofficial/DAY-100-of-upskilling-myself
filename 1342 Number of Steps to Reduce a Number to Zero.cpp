class Solution {
    public:
        int numberOfSteps(int num) {
            int a = 0;
            while(num>0){
                if(num%2==0){
                    num/=2;
                    a++;
                }
                else{
                    num-=1;
                    a++;
                }
            }
            return a;
        }
    };