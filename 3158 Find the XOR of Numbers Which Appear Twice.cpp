#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main(){
    vector<int>nums = {1,2,2,3,4,4,5,6};
    unordered_set<int> set1;
    int op = 0;
    for(int i = 0;i<nums.size();i++){
        if(set1.count(nums[i])){
            op^=nums[i];
        }
        else{
            set1.insert(nums[i]);
        }
    }
    cout<<op;
        
}