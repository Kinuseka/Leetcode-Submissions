int singleNumber(int* nums, int numsSize) {
    int least = 0;
    for (int i = 0; i < numsSize; i++){
        least = nums[i] ^ least;
    }
    return least;
}
