class Solution {
    public:
        int sumOddLengthSubarrays(vector<int>& arr) { 
         int totalSum = 0;
    
        for (int i = 0; i < arr.size(); i++) {
            
            int totalSubarrays = (i + 1) * (arr.size() - i);
    
            int oddCount = (totalSubarrays + 1) / 2;
    
            totalSum += arr[i] * oddCount;
        }
    
        return totalSum;
        }
    };