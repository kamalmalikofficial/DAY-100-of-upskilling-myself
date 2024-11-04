#include<iostream>
using namespace std;

void missing(int arr [],int len,int n){
    int si =0;
    while(si<=n){
        int flag = 0;
        for(int i=0;i<len;i++){
            if(arr[i]== si){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout<<si<<" is not found  ";
        }
        si++;
    }
}

int main(){
    int arr[]= {0,1,2,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int n = 5;

    missing(arr,len,n);


    return 0;
}


