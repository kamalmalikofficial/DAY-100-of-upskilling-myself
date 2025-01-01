#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    vector<int> nums1 = {1,2,2,3};
    vector<int> nums2 = {2,2,3,3,4};
    set<int> set1;
    for(int i =0;i<nums1.size();i++){
        for(int j = 0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                set1.insert(nums2[j]);
            }
        }
    }
    
    vector<int> result(set1.begin(), set1.end());
    for(int i =0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    
    return 0;

        
}