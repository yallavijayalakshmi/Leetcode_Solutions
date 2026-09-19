class Solution {
public:
    void sortColors(vector<int>& nums) {

        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        // Count 0, 1 and 2
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 0)
                count0++;

            else if(nums[i] == 1)
                count1++;

            else
                count2++;
        }

        // Put 0s
        int i = 0;

        while(count0 > 0) {
            nums[i] = 0;
            i++;
            count0--;
        }

        // Put 1s
        while(count1 > 0) {
            nums[i] = 1;
            i++;
            count1--;
        }

        // Put 2s
        while(count2 > 0) {
            nums[i] = 2;
            i++;
            count2--;
        }
    }
};