class Solution {
public:
    string largestOddNumber(string num) {
        int s=-1;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2!=0){//checking the first odd from back as to get the largest length as in same ordre requires
                s=i;
                break;
            }
        }
        return s>=0?num.substr(0,s+1):"";
    }
};
