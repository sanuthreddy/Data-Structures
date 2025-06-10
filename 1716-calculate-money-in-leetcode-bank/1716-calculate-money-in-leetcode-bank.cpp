class Solution {
public:
    int totalMoney(int n) {
        /* 1 2 3 4 5 6 7=28           k=n/7
           2 3 4 5 6 7 8=35           k/2[2*28+(k-1)*7]
           3 4 5 6 7 8 9=42
           4 5 6 7       n%7 is remaining days 
           4 is can know by ai is k+1 as starting 
        */
        int k=n/7;
        int sum=(k*(2*28+(k-1)*7))/2;
        for(int day=0;day<n%7;day++){
            sum+=(k+1)+day;
        }
        return sum;
    }
};