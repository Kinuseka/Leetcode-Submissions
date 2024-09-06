int *removeElement(int* nums, int numsSize, int val) {
    // int newArray[numsSize] = {};
    int tracker = 0;
    int holes = 0;
    for (int i = 0; i < numsSize; i++){
        int current = nums[i];
        if (current != val){
            nums[tracker] = current;;
            tracker++;
        } else{
            nums[i] = (i+1 < numsSize) ? nums[i+1]: NAN;
        }
    }
    return tracker;
}
