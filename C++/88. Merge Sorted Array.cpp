/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
*/
// solution1
public void merge(int[] nums1, int m, int[] nums2, int n) {
    while(n>0){
        if(m>0&&nums1[m-1]>nums2[n-1]){
            nums1[m+n-1] = nums1[m-1];
            m--;
        }
        else{
            nums1[m+n-1] = nums2[n-1];
            n--;
        }
    }
}
// solution2
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int t=n+m-1;
        int i=m-1;
        int j=n-1;
        while(j>=0 && i>=0)
        {
            if(nums1[i]>=nums2[j])
            {
                nums1[t]=nums1[i];
                --i;
                --t;
            }else{
                nums1[t]=nums2[j];
                --j;
                --t;
            }
        }
        while(j>=0)
        {
            nums1[t--]=nums2[j--];
        }
    }
};