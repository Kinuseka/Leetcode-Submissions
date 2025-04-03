/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minCosts(int* cost, int costSize, int* returnSize) {
    int minimal = cost[0];
    int *finalResult = malloc(sizeof(int) * costSize);
    finalResult[0] = cost[0];
    *returnSize = costSize;
    for (int i = 1; i < costSize; i++){
        if (cost[i] < minimal){
            minimal = cost[i];
        }
        finalResult[i] = minimal;
    }
    return finalResult;
}
