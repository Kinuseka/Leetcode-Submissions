/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    int j = 0;
    int seen = 0;
    for (i; i < numsSize; i++){
        j = i + 1;
        for (j; j < numsSize; j++){
            seen = nums[i] + nums[j];
            if (seen == target){
                int* result = malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            } else {
                seen = 0;
            }

        }
    }
    *returnSize =0;
    return NULL;
}
