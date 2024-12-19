#include<iostream>
#include<vector>
using namespace std;

int main(){
        vector<int> nums = {1,-1,2,-2,5};
        int sum =0;
        int cnt =0;

        for(int i =0 ;i<nums.size();i++){
            sum+= nums[i];
            if(sum == 0){
                cnt ++;
            }
        }
        cout<< cnt;
        
}
