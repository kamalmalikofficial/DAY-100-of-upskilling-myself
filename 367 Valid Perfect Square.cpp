#include<iostream>
using namespace std;

int main(){
    int num = 45665;
    cout << num <<endl;
    for( long int i = 0;i*i<=num;i++){
        if(i*i== num){
            cout<<"yes it have a perfect aquare root";
        }
    }
    cout<<"itsnt have a perfect square root";
        
}