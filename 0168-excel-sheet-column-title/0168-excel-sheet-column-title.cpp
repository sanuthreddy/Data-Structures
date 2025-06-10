class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;//to store answer
         while(columnNumber>0){
              columnNumber--;//to handle corner cases like when 26 multiples
              int remainder=columnNumber%26;
              char ch=remainder+'A';//as decremented before here restored to correct 
              result+=ch;
              columnNumber/=26;
         }
         reverse(result.begin(),result.end());//as we get reverse orrder of answer 
         return result;
    }
};
