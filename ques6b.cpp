#include<iostream>
using namespace std;

void missing(int arr[], int len, int n){
    int fun =(n*(n-1))/2;
    int sum = 0;
    for(int i = 0; i <len; i++) {
        sum += arr[i];
    }
    int missing_num = sum - fun;
    cout<<missing_num <<" is not found "<<endl;

}

int main(){
    int arr[] = {1,2,3,4,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int n =10;
    for(int i=0; i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    missing(arr,len,n);
    return 0;
}







