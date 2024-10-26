#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void getMinMax(vector<long long int>& arr) {
        // code here

        long long posinf = INT_MAX;
        long long neginf = INT_MIN;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            if (arr[i] < posinf) {
                posinf = arr[i];
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > neginf) {
                neginf = arr[i];
            }
        }
        
        cout<<"minimum "<<posinf<< " maximum "<< neginf <<endl ;
}

int main(){
    vector<long long int> arr = {12,45,78,36,96,12,45,};
    getMinMax(arr);
    
    return 0;
}
