class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> res;

        unordered_map<string,vector<string>> mp;

        for(auto &str:strs)
        {
            vector<int> count(26,0);
            for(auto&ch:str)
              count[ch-'a']++;

            string key;
            for(int &i:count)
              key += "#" + to_string(i);
            
            mp[key].push_back(str);
        }

        for(auto&pair:mp)
        {
            res.push_back(pair.second);
        }
        return res;
    }
};
