class Solution {
    public:
        int numberOfMatches(int n){
            int m = 0;
            while(n != 1){
                if(n%2 ==0){
                    m+=n/2;
                    n/=2;
                }
                else{
                    n-=1;
                    m+=n/2;
                    n/=2;
                    n+=1;
                }
            }
            return m;    
        }
    };