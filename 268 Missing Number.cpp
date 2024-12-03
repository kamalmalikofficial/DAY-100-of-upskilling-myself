#include<iostream>
using namespace std;

int main(){
    int nums[] = {1,2,3,0,5};
    int sum = 0;
    int n = sizeof(nums)/sizeof(nums[0]);
    int totsum = (n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum +=nums[i];

    }
    cout<<"Missing number: "<<totsum - sum;
    
}