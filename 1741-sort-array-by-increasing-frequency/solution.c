/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* frequencySort(int* nums, int numsSize, int* returnSize) {
    
    int hash[201] = {};
    // int *newArr = malloc(sizeof(int)*numsSize);
    //FreqCount
    for (int i = 0; i < numsSize; i++){
        hash[nums[i]+100]++;
    }
    //then sort
    for (int i = 0; i < numsSize - 1; i++){
        for (int j = 0; j < numsSize - i - 1; j++){
            if (hash[nums[j]+100] > hash[nums[j+1]+100] || (hash[nums[j]+100] == hash[nums[j+1]+100] && nums[j] < nums[j+1])){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;

        }
    }
    }

    *returnSize = numsSize;
    return nums;
}
