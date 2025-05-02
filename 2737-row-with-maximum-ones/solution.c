/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int count(int *arr, int size){
    int sum = 0;
    for (int i = 0 ; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int* rowAndMaximumOnes(int** mat, int matSize, int* matColSize, int* returnSize) {
    int *out = malloc(sizeof(int) * 2);
    int max_int = count(mat[0], matColSize[0]);
    out[0] = 0;
    out[1] = max_int;
    for (int i = 1; i < matSize; i++){
        int temp_int = count(mat[i], matColSize[i]);
        if (temp_int > max_int){
            max_int = temp_int;
            out[0] = i;
            out[1] = temp_int;
        }
    }
    *returnSize = 2;
    return out;
}



