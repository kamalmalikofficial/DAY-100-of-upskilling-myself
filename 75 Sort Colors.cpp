#include<iostream>
using namespace std;

int main(){
    int nums[]={1,0,2,0,1,2};
    int n = sizeof(nums)/sizeof(nums[0]);
    int nn = n;
    while(nn>0){
        for(int i =1;i<n;i++){
            if(nums[i-1]>=nums[i]){
                swap(nums[i-1],nums[i]);
            }
        }
        nn--;
    }
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}
