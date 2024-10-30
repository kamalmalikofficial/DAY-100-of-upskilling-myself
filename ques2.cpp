    // Function to rotate an array by d elements in counter-clockwise direction.
    
#include<iostream>
#include<vector>

using namespace std;

    void rotateArr(int arr[], int d ,int n) {
        // code here
       
        int arr2[n];
        
        for(int i = d;i<n;i++){
            arr2[i-d]=arr[i];
        }
        
        for (int i = 0;i<d;i++){
            arr2[n-d +i] = arr[i];
        }
        
        
        for (int i = 0; i < n; i++) {
            arr[i] = arr2[i];
        }
        
        for (int i = 0; i < n; i++){
               cout<<arr[i]<<" ";
        }         
    }

int main(){

    int arr[] = {1,2,3,4,5,45,78};
    int d = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rotateArr(arr, d,n);
    
    return 0;
}
