#include<iostream>
using namespace std;

void binarysearch(int arr[],int len,int t ){
    int l = 0, h = len;
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid]==t){
            cout<<"Element found at index: "<<mid<<endl;
            return;
        }
        else if(arr[mid]<t){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    cout<<"Element not available in the array."<<endl;
    return;
}

int main(){
    int arr[10] = {1,2,3,4,5,8};
    int s = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    binarysearch(arr,s,target);
    return 0;
}
