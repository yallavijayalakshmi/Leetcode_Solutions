class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        vector<int> copy = arr;
        
        sort(copy.begin(), copy.end());
        
        int target = copy[copy.size() - 1];
        
        int left = 0;
        int right = arr.size() - 1;
        
        // Find target in the original array
        for (int i = left; i <= right; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        
        return -1;
    }
};