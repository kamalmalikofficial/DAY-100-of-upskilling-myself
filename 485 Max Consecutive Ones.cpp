#include<iostream>
using namespace std;

int main(){
    int nums[]={1,0,11,0,1,1,1,1,1,1,0};
    int n = sizeof(nums)/sizeof(nums[0]);
    int key=0;
    int cnt =0;
    for(int i = 0;i<n;i++){
        if(nums[i]==1){
            cnt++;
            key = max(key ,cnt);
        }
        else
            cnt = 0;
    }
    cout<<"Maximum number of consecutive 1's: "<<key<<endl;
    return 0;
    
    return 0;
}        
        