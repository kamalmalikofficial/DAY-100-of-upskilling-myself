#include<iostream>
using namespace std;

void finddupli(int arr[],int n){
    for(int i=0;i<n;i++){
        if (arr[i]==arr[i+1]){
            cout<<"duplicate element found and it is "<<arr[i]<<endl;
        }


    }
}

void insertionsort(int arr[], int n){
     for(int i = 1; i < n; i++){
 
        while(i >= 0 && arr[i-1] > arr[i]){
            swap(arr[i-1],arr[i]);
            i--;
        }

     }
     finddupli(arr,n);

}

int main(){
    int arr[]= {23,4,5,6,8,9,2,3,1,4,23};
    int len= sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,len);
    return 0;
}