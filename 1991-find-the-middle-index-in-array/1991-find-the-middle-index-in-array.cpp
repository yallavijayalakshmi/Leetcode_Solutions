class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int prefix =0;
        int suffix =0;
        for(int i =1;i<nums.size();i++){
            suffix += nums[i];
        }
        if(prefix == suffix) return 0;
        int i =1;
        while(i<nums.size()){
            prefix += nums[i-1];
            suffix -= nums[i];
           
            if(prefix == suffix){
                return i;
            }
            i++;
        }
        
return -1;
    }
};