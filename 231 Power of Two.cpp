#include<iostream>
using namespace std;

int main(){
    int n = 27;
    int a =n;
    if(n<=0){
        cout<<a<<"is not in power of 2";

    }
    while(n>1){
        if(n%2!=0){
            cout<<a<<"is not in power of 2";
            exit(1);
        }
        n/=2;
    }
    cout<<a<<" is in power of 2";

    return 0;
}