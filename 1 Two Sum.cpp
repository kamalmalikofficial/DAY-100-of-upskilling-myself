#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    int n = nums.size();
    vector<int> prr;
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(nums[i]+nums[j]== target && i!=j){
                prr.push_back(i);
                prr.push_back(j);

                cout<<prr[i]<<" "<<prr[j]<<endl;
            }
        }
    }
    return 0;
}