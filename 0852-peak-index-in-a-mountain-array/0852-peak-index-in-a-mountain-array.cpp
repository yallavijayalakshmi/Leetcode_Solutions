class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        vector<int> copy = arr;
        
        sort(copy.begin(), copy.end());
        
        int target = copy[copy.size() - 1];

        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return mid;
            }
            
            // We are on the increasing side
            if (arr[mid] < arr[mid + 1]) {
                left = mid + 1;
            }
            
            // We are on the decreasing side
            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};