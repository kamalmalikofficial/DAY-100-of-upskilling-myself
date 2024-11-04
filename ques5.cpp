#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3,0,4,0, 5};
    int a = arr.size();
    vector<int> temparr;

    for(int i = 0;i<a;i++){
        if(arr[i]!=0){
            temparr.push_back(arr[i]);
        }
    }

    int b = temparr.size();
    
    for(int i =0;i<b;i++){
        arr[i]=temparr[i];
    }
    for(int i =b;i<a;i++){
        arr[i] =0;
    }
    
    for(int i =0;i<a;i++){
        cout<<arr[i]<<" ";
    }


    
    return 0;
}



