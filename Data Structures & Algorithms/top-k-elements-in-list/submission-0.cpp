class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> ans;
        for(auto &num:nums) mp[num]++;
        vector<pair<int,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](const pair<int, int> &a, const pair<int, int> &b) {
        return a.second > b.second;  // Ascending order
    });
        for(auto&pair:vec){
            cout << pair.first << " " << pair.second << endl;
            if(ans.size() < k) ans.push_back(pair.first); 
        }
        return ans;
    }
};