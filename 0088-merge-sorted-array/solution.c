void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int p1 = m - 1;
    int p2 = n - 1;
    int p1f = m + n - 1;
    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[p1f] = nums1[p1];
            p1--;
        } else {
            nums1[p1f] = nums2[p2];
            p2--;
        }
        p1f--;
    }
    while (p2 >= 0){
        nums1[p1f] = nums2[p2];
        p2--;
        p1f--;
    }
}
