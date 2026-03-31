class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
       for(int &num:nums)
       {
         if(count(nums.begin(),nums.end(),num) > 1)  return true;
       }

       return false;

    }
};
