/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int **final = (int**)malloc(sizeof(int*)*numRows);
    (*returnColumnSizes) = (int*)malloc(sizeof(int)*numRows);
    *returnSize = numRows;
    for (int i = 0; i < numRows; i++){
        final[i] = (int*)malloc(sizeof(int)*(i+1));
        int coefficient = 1;
        (*returnColumnSizes)[i] = i + 1;
        for (int j = 1; j <= i + 1; j++){
            final[i][j-1] = coefficient;
            coefficient = coefficient * (i - j + 1) / j; 
        }
    }
    return final;
}
