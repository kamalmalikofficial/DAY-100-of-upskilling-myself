#include<iostream>
using namespace std;

void arrsumarr(int arr[3][3], int prr[3][3]){
    int lrr[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            lrr[i][j] = arr[i][j] + prr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<" "<<lrr[i][j];
        }
        cout<<"\n";
    }
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int prr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    
    arrsumarr(arr, prr);
    
    return 0;
}
