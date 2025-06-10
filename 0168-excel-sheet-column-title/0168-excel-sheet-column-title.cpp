class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
         while(columnNumber>0){
              columnNumber--;
              int remainder=columnNumber%26;
              char ch=remainder+'A';
              result+=ch;
              columnNumber/=26;
         }
         reverse(result.begin(),result.end());
         return result;
    }
};