#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
    int target = 2;
    int row = 0;
    int col = matrix[0].size() -1;
    while(row < matrix.size() && col >= 0){
        if(matrix[row][col] == target ){
            cout<<"yes";
            return 0;
            
        }
        if(matrix[row][col]<target){
            row++;
        }
        else{
            col--;
        }
    }
    cout<<"false"; 
}