#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {-1, -1, -1}};  
    int max = INT_MIN;
    int m = matrix[0].size() ; // column 3
    int n = matrix.size();     // rows 3
    vector<int> temp(m,0);
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(matrix[j][i] >max){
                max=matrix[j][i];
            }    
        }
        swap(temp[i],max);
        max = INT_MIN;
    }
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(matrix[j][i] == -1){
                matrix[j][i]=temp[i];
            }   
        }
    }
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;   
    }
        
}