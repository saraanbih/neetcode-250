class Solution {
public:
    int getSum(int a, int b) {
         int carry = 0, res = 0;
        for (int i = 0; i < 32; i++) {  // 32-bit for general integers
            int sum = (a & 1) ^ (b & 1) ^ carry;  // XOR for the sum of bits
            carry = ((a & 1) & (b & 1)) | ((carry) & ((a & 1) ^ (b & 1)));  // Calculate the carry
            res |= (sum << i);  // Set the current bit of the result
            a >>= 1;  // Right shift a for the next bit
            b >>= 1;  // Right shift b for the next bit
        }
        return res;
    }
};
