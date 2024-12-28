#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>height = {1,2,3,4,5,6,7,8};
    int area= 0;
    int temparea;
    int li = 0;
    int ri = height.size()-1;
    while(li<ri){
        int h = min(height[li],height[ri]);
        int w = ri-li; 
        temparea = h*w;
        if(temparea >area){
            area = temparea;
        }
        if(h == height[li] ){
            li++;
        }
        else{
            ri--;
        }
    }
    cout<<"the maximum area of water is "<< area;
    return 0;
}