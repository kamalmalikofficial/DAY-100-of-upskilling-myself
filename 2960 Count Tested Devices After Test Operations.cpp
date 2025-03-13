class Solution {
    public:
        int countTestedDevices(vector<int>& batteryPercentages) {
            int sum = 0;
            for(int i = 0;i<batteryPercentages.size();i++){
                if (batteryPercentages[i] == 0){
                        continue;
                }
                else{
                    sum++;
                    for(int j = i;j<batteryPercentages.size();j++){
                        if(batteryPercentages[j] > 0){
                            batteryPercentages[j]--;
    
                        }
                        
    
                    }
    
                }
    
            }
            return sum;
        }
    };