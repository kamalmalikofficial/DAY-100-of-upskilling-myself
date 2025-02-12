class Solution {
    public:
        int romanToInt(string s) {
            vector<int> arr;
            for(int i = 0;i<s.size();i++){
                if(s[i] == 'I'){
                    arr.push_back(1);
                }
                if(s[i] == 'V'){
                    arr.push_back(5);
                }
                if(s[i] == 'X'){
                    arr.push_back(10);
                }
                if(s[i] == 'L'){
                    arr.push_back(50);
                }
                if(s[i] == 'C'){
                    arr.push_back(100);
                }
                if(s[i] == 'D'){
                    arr.push_back(500);
                }
                if(s[i] == 'M'){
                    arr.push_back(1000);
                }
            }
            int sum =0;
            for(int i = 0;i<arr.size()-1;i++){
                if(arr[i+1]>arr[i]){
                    sum -=arr[i];
                }
                if(arr[i+1]<= arr[i]){
                    sum+=arr[i];
                }
            }
            sum+= arr[arr.size()-1];
            return sum;    
            
        }
    };