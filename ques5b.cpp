#include<iostream>
#include<vector>
using namespace std;
void move (vector<int> arr, int len){
    int j = 0;
    for(int i = 0;i<len; i++){

        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
            }
    }

    for(int i = 0; i<len ; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    vector<int> arr = {1,0,3,0,5,6,7,8};
    int len = arr.size();
    move(arr,len);
    return 0;
}