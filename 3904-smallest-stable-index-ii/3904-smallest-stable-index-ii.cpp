class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int a = 0;
        int n = nums.size();
        vector<int>mins(n);
        mins[n-1] = nums[n-1];

        for(int i = n-2 ; i >= 0 ; i--){
            mins[i] = min(nums[i], mins[i+1]);
        }

        for(int i = 0 ; i < nums.size() ; i++){
            a = max(a, nums[i]);
            int b = mins[i];

            if(a-b <= k) return i;
        }
        return -1;
    }
};