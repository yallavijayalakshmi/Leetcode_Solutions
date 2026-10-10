class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        while(k>0){
            int max_freq =0;
            int num=0;
        for(auto x : mpp){
            if(x.second > max_freq){
                max_freq = x.second;
                num = x.first;
            }
        }
        ans.push_back(num);
        mpp[num]=0;
        k--;
        }
        return ans;
    }
};