class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //left pre
        int n = nums.size();
        vector<int> lpre(n,1),rpre(n,1);
        for(int i=1;i<n;i++) lpre[i] =  lpre[i-1] * nums[i-1];
        //right pre
        vector<int> ans(n);
        for(int i=n-2;i>=0;i--) rpre[i] = rpre[i+1] * nums[i+1];
        for(int i=0;i<n;i++){
            ans[i] = lpre[i]*rpre[i];
        }
        return ans;
    }
};