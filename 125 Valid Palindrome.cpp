#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "A man, a plan, a canal: Panama";
    vector<char> arr;
    for (int i = 0; i < s.size(); i++) {
        if (isalnum(s[i])) {
            arr.push_back(tolower(s[i]));
        }
    }
    int ptri = 0;
    int ptrf = arr.size() - 1;
    while (ptri < ptrf) {
        if (arr[ptri] != arr[ptrf]) {
            cout<<"no it is not a palindromic string";
            return 0;
        }
        ptri++;
        ptrf--;
    }
    cout<<"yes it is a palindronic string";
}