class Solution {
public:
    int countOdds(int low, int high) {
       /* int cnt=0;
        for(int i=low;i<=high;i++){
            cnt+=(i&1);
        }
        return cnt;*/
        int r=high-low+1;
        if(r%2==0){//length even means have equal no of even and odd
            return r>>1;
        }else{
            if(low%2!=0 && high%2!=0){//3 4 5 6 7
                return r/2 +1;
            }else{//2 3 4 5
                return r>>1;
            }
        }
    }
};
