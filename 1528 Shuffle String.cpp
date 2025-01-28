class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ss = s;

        for(int i = 0;i<s.size();i++){
            ss[indices[i]]=s[i];
        }
        return ss;
        
    }
};