#include<iostream>
using namespace std;

int main(){
    int nums[]={1,2,3,4,5,6,7};
    int n = sizeof(nums)/sizeof(nums[0]);
        int fault = 0;
        int eq = 0;
        for(int i = 0;i<n-1;i++){
            if ( nums[i]==nums[i+1]){
                eq ++;
            }
        }
        for(int i = 0;i<n-1;i++){
            if ( nums[i]>nums[i+1]){
                fault ++;
            }
        }
        if(nums[n-1]>nums[0]){
            fault++;
        }
        if(eq == n-1){
            cout<<"true";
        }
        if(fault == 1){
                cout<<"true";
        }
        else{
              cout<<"false";
        }
    return 0;
}