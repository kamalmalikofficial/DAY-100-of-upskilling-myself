#include<iostream>
using namespace std;

int partition(int arr[],int si, int ei){
    int pivot = arr[ei];
    int ii = (si-1);

    for(int i = si ;i<ei; i++){
        if(arr[i]<=pivot){
            ii++;
            swap(arr[i],arr[ii]);
        }
    }
    ii++;
    swap(arr[ii],arr[ei]);
    return ii;
}

void quicksort(int arr[],int si,int ei){
    if(si<ei){
        int pi = partition(arr,si,ei);
        quicksort(arr,si,pi-1);
        quicksort(arr,pi+1,ei);
    }
}

int main(){
    int arr[] = {2,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,n-1);

    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}