class Solution {
    public:
        int smallestEvenMultiple(int n) {
            int b = 2;
            while(b%2 != 0 || b%n != 0 ){
                b++;
            }
            return b;      
        }
    };