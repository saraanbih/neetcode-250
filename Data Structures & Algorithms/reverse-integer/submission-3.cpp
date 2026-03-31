class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        int mx = 2147483647,mn = -2147483648;
        while(x){
            int digit = x % 10;
            x/=10;
            if((res > mx / 10) || (res == mx/10 ))
                return 0;
            if((res < mn / 10) || (res == mn/10 ))
                return 0;
            res = (res*10) + digit;
        }
        return res;
    }
};
