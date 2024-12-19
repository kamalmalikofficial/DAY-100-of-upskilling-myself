#include<iostream>
#include<vector>

#include<algorithm> 
using namespace std;

int main(){
    vector<int> nums = {10, 20, 30};
    sort(nums.begin(),nums.end());
    int a =nums[0];
    int b =nums[1];
    int c =nums[2];
    if(a+b <= c){
        cout<< "cant form a triangle";
    }
    else if(a==b && b==c && c==a){
        cout<< "equilateral";
    }
    else if(a!= b && b != c && c != a){
        cout<< "scalene";
    }
    else{
        cout<< "isosceles";
    }
}