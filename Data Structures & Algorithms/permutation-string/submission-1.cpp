class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       if(s1.size() > s2.size()) return false;
       unordered_map<char,int> mp,tm;
       int left=0;

       for(auto&ch:s1) mp[ch]++;

       for(int right=0;right<s2.size();right++){
          tm[s2[right]]++;

          if((right - left + 1) > (s1.size())){
            tm[s2[left]]--;
            if(tm[s2[left]] == 0) tm.erase(s2[left]);
            left++;
          }
          if(tm == mp) return true;
       }
       return false;
    }
};
