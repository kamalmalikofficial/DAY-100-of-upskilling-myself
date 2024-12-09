#include<iostream>
#include<vector>
using namespace std;

int main(){
        vector<int> prices={7,1,5,3,6,4};
        int bbin = prices[0];
        int maxprofit=0;

        for(int i = 1;i<prices.size();i++){
            maxprofit = max(prices[i]-bbin,maxprofit);
            bbin=min(bbin,prices[i]);
        }
        cout<< maxprofit;
        return 0;    
    }