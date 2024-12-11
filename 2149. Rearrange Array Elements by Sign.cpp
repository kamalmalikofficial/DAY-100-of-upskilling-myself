#include<iostream>
#include<vector>
using namespace std;

int main(){
        vector<int> nums = {-1, 5, 3, -5, 2, -3, -3};
        int n =nums.size();
        vector<int> arr(n);
        int itrpos =0;
        int itrneg =1;

        for(int i =0;i<n;i++){
            if(nums[i]>0){
                arr[itrpos]=nums[i];
                itrpos+=2;
            }
            if(nums[i]<0){
                arr[itrneg]=nums[i];
                itrneg+=2;
            }
        }
        for(int i=0; i<nums.size(); i++){
            cout<<arr[i]<<" ";
        }

}
    
