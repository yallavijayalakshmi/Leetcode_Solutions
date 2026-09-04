class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i =0;i<nums.size();i++){
            int maxi = nums[i];
            int mini = INT_MAX;
            for(int j =0;j<=i;j++){
                maxi = max(maxi , nums[j]);
            } 
            for(int j = i;j<nums.size();j++){
             mini = min(mini , nums[j]);
            }
            int diff = maxi-mini;
            if(diff <= k){
                return i;
            }
        }
            return -1;
        
    }
};