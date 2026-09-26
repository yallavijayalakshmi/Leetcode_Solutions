class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
       
       int total =  nums1.length + nums2.length;
     int[] merged = new int[total];

        for (int i = 0; i < nums1.length; i++) {
            merged[i] = nums1[i];
        }
        for(int i=0;i< nums2.length;i++ ){
            merged[nums1.length+i] = nums2[i];
        }
        Arrays.sort(merged);
        if(merged.length % 2 != 0){
            int index = (total)/2;
            return merged[index];
        }
       int midIndex1 = total / 2 - 1;
            int midIndex2 = total / 2;
            return (double) (merged[midIndex1] + merged[midIndex2]) / 2.0;

    }
}