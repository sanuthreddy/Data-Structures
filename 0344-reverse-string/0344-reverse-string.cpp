class Solution {
public:
    void reverseString(vector<char>& s) {
        //reverse(s.begin(),s.end());
        int left=0,right=s.size()-1;
       while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
       }
    }
};