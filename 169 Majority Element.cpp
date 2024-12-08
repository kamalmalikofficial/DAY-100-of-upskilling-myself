#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums ={1,1,0};
    int ele;
    int cnt =0;
    for(int i = 0;i<nums.size();i++){
        if(cnt == 0){
            ele = nums[i];
            cnt++;}
        else if(nums[i]== ele){
            cnt++;}
        else{
            cnt--;}
    }
    int cnt1;
    for(int i = 0;i<nums.size();i++){
        if(nums[i]==ele){
            cnt1++;}
    }
    if(cnt1>nums.size()/2){
        cout<<ele;}
    else{
        cout<<"no majority element found";
    }    
    
    
}