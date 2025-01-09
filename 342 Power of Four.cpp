#include<iostream>
using namespace std;

int main(){
    int n = 28;
    int a =n;
    if(n<=0){
        cout<<a<<" is not in power of 4";

    }
    while(n>1){
        if(n%4!=0){
            cout<<a<<" is not in power of 4";
            exit(1);
        }
        n/=2;
    }
    cout<<a<<" is in power of 4";

    return 0;
}