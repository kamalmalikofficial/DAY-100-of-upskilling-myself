#include<iostream>
using namespace std;

void bubble(int arr[],int len){
  for(int i=0;i<len;i++){
    for(int j=0;j<len-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j+1],arr[j]);
        }
    }

  }

  for(int k=0;k<len;k++){
    cout<<arr[k]<<" "; 
  }
    

}                

int main(){
    int arr[5]={6,448,14,9,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    bubble(arr,len);
    return 0;
}