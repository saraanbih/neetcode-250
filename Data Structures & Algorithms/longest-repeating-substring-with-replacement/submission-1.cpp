class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int left = 0, max_length = 0, max_count = 0;
    for(int right = 0;right<s.length();right++){
        mp[s[right]]++;
        
        max_count = max(max_count,mp[s[right]]);
        while((right - left + 1) - max_count >  k){
            mp[s[left]]--;
            left++;
        }

        max_length = max(max_length,(right-left +1));
    }
    return max_length;
}
    
};
