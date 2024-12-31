#include<iostream>
using namespace std;

int main(){
    int n = 27;
    int a =n;
    if(n<=0){
        cout<<a<<"is not in power of 3";

    }
    while(n>1){
        if(n%3!=0){
            cout<<a<<"is not in power of 3";
            exit(1);
        }
        n/=3;
    }
    cout<<a<<" is in power of 3";

    return 0;
}