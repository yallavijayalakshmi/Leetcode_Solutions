class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n);
          prefix[0] = nums[0];
        int mini = prefix[0];
        for(int i =1;i<n;i++){
            prefix[i] = prefix[i-1]+nums[i];
         mini = min(mini,prefix[i]);
        }
        int answer = 1-mini;
        if(answer < 1) {
    answer = 1;
}
        return answer;
    }
};