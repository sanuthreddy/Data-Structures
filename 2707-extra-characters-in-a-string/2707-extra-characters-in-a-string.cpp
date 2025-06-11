class Solution {
public:
    int t[51];
    int solve(int i, string& s, unordered_set<string>& st, int &n) {
        if(i >= n) {//going outof bound of string s
            return 0;
        }
        if(t[i] != -1) {
            return t[i];
        }
        int result = 1 + solve(i+1, s, st, n);//taking the current char as extra character and seeing next  part of the string 
        for(int j = i; j < n; j++) {//taking the char as not extra character
            string curr = s.substr(i, j-i+1);//checking the possibilities of the subparts exists in set leetcode-l,le,lee,leec,leeco,leecod,leecode 
            if(st.count(curr)) {
                //valid substring
                result = min(result, solve(j+1, s, st, n));
            }
        }
        return t[i] = result;
    }
    int minExtraChar(string s, vector<string>& dict) {
        int n = s.length();
        memset(t, -1, sizeof(t));
        unordered_set<string> st(begin(dict), end(dict));
        return solve(0, s, st, n);
    }
};
