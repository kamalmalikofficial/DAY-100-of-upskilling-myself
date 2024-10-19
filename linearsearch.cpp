#include<iostream>
#include<array>
using namespace std;
void linearsearch(int a[],int s,int t){
        for(int i=0;i<s;i++){
            if (a[i]== t){
                cout << "Element "<<a[i]<<" found at index: " << i << endl;
                return;
            }
        }


}
int main(){
    int arr[10] = {1,2,3,4,5,8,4,5,5,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    linearsearch(arr,s,target);

}