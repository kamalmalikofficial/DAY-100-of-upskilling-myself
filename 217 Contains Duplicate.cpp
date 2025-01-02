#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {0,1,2,3,4,5,6,7};
    sort(nums.begin(),nums.end());

    for(int i = 0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            cout<<"yes duplicate present";
        }
    }
    cout<<"no duplicate present";

}