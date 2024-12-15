#include<iostream>
#include <algorithm>

#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int>nums={1,2,3,3,4};
    int cnt = 0;
    int longest =1;
    int last =INT_MIN;
    
    // for soorting we may can use any other popular
    sort(nums.begin(),nums.end());
    if (nums.size()==0){
        return 0;
    }
    for(int i= 0;i<nums.size();i++){
        if (nums[i]-1 == last){
            cnt++;
            last = nums[i];
        }
        else if(nums[i] !=last){
            cnt = 1;
            last = nums[i];
        }
        longest = max(longest,cnt);
    }
    cout<<longest;
        
}