class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res;
        for(int i=0;i<32;i++){
            int bit = 31-i;
            if((1 << i) & n)
                res += (1<<bit);   
        }
        return res;
    }
};
