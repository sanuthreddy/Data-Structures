class Solution {
public:
    bool isPalindrome(int x) {
       /* string s=to_string(x);
        string s1=s;
        reverse(begin(s1),end(s1));
        return (s==s1);*/
     long long o=x;
     long long rev=0;
     while(o>0){
        long long rem=o%10;
        rev=rev*10+rem;
        o/=10;
     }
     return (rev==x);       
    }
};