#include<iostream>
using namespace std;

int find(int arr[3][3], int prr[3][3], int i, int j){
    int s = 0;
    for(int k = 0; k < 3; k++){
        s += arr[k][j] * prr[i][k];
    }
    return s;
}

void arrmultiarr(int arr[3][3], int prr[3][3]){
    int lrr[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            lrr[i][j] = find(arr, prr, i, j);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<" ", lrr[i][j];
        }
        cout<<"\n";
    }
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int prr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    
    arrmultiarr(arr, prr);
    
    return 0;
}
