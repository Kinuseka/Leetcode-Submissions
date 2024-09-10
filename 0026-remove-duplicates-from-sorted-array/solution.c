int removeDuplicates(int* nums, int numsSize) {
    int x = 1;
    for (int i = 1; i < numsSize; i++){
        if (nums[i] != nums[i - 1]) {
            nums[x] = nums[i];
            x++;
        }
    }
    return x;
}
