class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        vector<int> counts(mx-mn+1,0);
        for(auto &num : nums)
            counts[num - mn]++;
        int idx = 0;
        for(int i=0;i<counts.size();i++){
            while(counts[i] > 0){
                nums[idx++] = i + mn;
                counts[i]--;
            }
        }
        return nums;
    }
};