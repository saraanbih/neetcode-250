class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = std::accumulate(nums.begin(),nums.end(),0);
        int sz = nums.size();
        int realSum = sz*(sz+1) / 2;
        if(sum == realSum) return 0;
        return realSum - sum;
    }
};
