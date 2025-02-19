class Solution {
    public:
        int scoreOfString(string s) {
            int sum = 0;
    
            int a;
            int b;
            for(int i = 0;i<s.size()-1;i++){
                a = s[i]; b =s[i+1];
                int c = a-b; 
                if(c>=0){
                    sum+= c;
                }
                else{
                    c=-c;
                    sum+= c;
                }
            }
            return sum;        
        }
    };