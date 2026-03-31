class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        while(x){
            int digit = x % 10;
            res = res * 10 + digit;
            x/=10;
            if (res < -2147483648 || res > 2147483647) return 0;
        }
        return static_cast<int>(res);
    }
};
