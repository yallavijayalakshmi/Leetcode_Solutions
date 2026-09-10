class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum =0;
        int cnt =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] > 0){
                sum += nums[i];
            }
            else{
                sum += nums[i];
            }
       
        if(sum == 0 ) cnt++;
       
        }
         return cnt;
    }
};