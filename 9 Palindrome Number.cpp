#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x = 123321;
    cout<<"x = "<<x<<endl;
    vector<int>arr;
    int r;
    while(x>0){
        r= x%10;
        arr.push_back(r);
        x/=10;
    }
    int lp = 0;
    int rp = arr.size()-1;
    while(lp<rp){
        if(arr[lp]==arr[rp]){
            lp++;
            rp--;
        }
        else{
            cout<<"not pallindrome";
        }
    }
    cout<<"yes pallindrome";    
}