class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int var=1,mx=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1])continue;
            if(nums[i] == nums[i-1] + 1) var++;
            else{
                mx = max(mx,var);
                var = 1;
            }
        }
        return max(mx,var);
    }
};
