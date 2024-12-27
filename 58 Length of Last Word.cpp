#include<iostream>
using namespace std;

int main(){
    int lengthOfLastWord(string s) {
    int cnt =0 ;
    int f = 0;
    
    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            cnt = 0;
        }
        else{
            cnt ++;
            f = cnt;
        }
    }
    return f;
    
}