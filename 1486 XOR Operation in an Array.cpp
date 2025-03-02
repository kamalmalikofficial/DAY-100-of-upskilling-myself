class Solution {
    public:
        int xorOperation(int n, int start) {
            vector<int > temp;
            for(int i = 0;i<n;i++){
                temp.insert(temp.begin()+i,start+2*i);
            }
            int sum = 0;
    
            for(int i = 0;i<n;i++){
                sum^=temp[i];
        
            }
            
            return sum;
            
        }
    };