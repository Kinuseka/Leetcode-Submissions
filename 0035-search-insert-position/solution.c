int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    for (i; i < numsSize; i++){
        if (nums[i] == target || nums[i] > target){
            return i;
        }
    }
    return i;
}
