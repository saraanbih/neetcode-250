class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int XorAll = 0,XorNumbers = 0;
       for(auto &num:nums) XorNumbers ^= num;
       for(int i =0;i<= nums.size();i++) XorAll ^= i;
       return XorAll ^ XorNumbers;
    }
};
