#include<iostream>
using namespace std;

void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int j = i;
        while (j>0 && arr[j-1]>=arr[j])
        {
           swap(arr[j],arr[j-1]);
           j--;
        }
    }
    
    for (int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }  
}
int main(){
    int arr[5]={6,448,14,9,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    insertionsort(arr,len);
    return 0;
    
}