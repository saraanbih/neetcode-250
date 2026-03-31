class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0,right=0,max_length=0;
        unordered_map<char,int> mp;
        for(right;right<s.length();right++){
            mp[s[right]]++;
            while(mp[s[right]] > 1){
                mp[s[left]]--;
                left++;
            }
            max_length = max(max_length,right-left+1);
        }
        return max_length;
    }
};
