class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
unordered_map<string, int> mp;

    for(auto st: strs) {
        string h = st;
        sort(h.begin(), h.end());
        
        if(mp.find(h) == mp.end()) {
            mp[h] = ans.size();
            ans.push_back({st});
        } else ans[mp[h]].push_back(st);
    }

    return ans;
        
    }
};