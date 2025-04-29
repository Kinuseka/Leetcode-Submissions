#include <stdlib.h>
int comp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int *sorted = malloc(sizeof(int) * (nums1Size + nums2Size));
    int sortedSize = 0;
    for (int i = 0; i < nums1Size; i++){
        sorted[sortedSize++] = nums1[i];
    }
    for (int i = 0; i < nums2Size; i++){
        sorted[sortedSize++] = nums2[i];
    }
    if ((nums1Size + nums2Size) == 1)
        return sorted[0];
        
    qsort(sorted, sortedSize, sizeof(sorted[0]), comp);
    double sum = 0;
    int mid = sortedSize / 2;
    if (sortedSize % 2 != 0){
        return sorted[mid];
    } else {
        sum = sorted[mid] + sorted[mid-1];
        return sum / 2.0;
    }
}
