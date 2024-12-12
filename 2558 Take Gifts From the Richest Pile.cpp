#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;

int main(){
    vector<int> gifts ={25,64,9,4,100};
    int k= 4;
    long long sum= 0;
    int ptr = 0;
    
    while(k>0){
        int max = INT_MIN;
        for(int i =0;i<gifts.size();i++){
            if(gifts[i]>max){
                max=gifts[i];
                ptr =i;
            }
            
        }
        gifts[ptr]=floor(sqrt(max));
        k--;
    }
    for(int j = 0;j<gifts.size();j++){
        sum+=gifts[j];
    }
    cout<<sum; 
        
}