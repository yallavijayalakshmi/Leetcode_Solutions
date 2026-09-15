class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count =0,count1=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count1 = Math.max(count , count1);
                count =0;
            }
        }
     
        return Math.max(count1,count);
    }
}