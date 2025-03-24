int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int plus = 1;
    int *newArr = malloc((digitsSize + 1) * sizeof(int));
    int newArrSize = digitsSize + 1;
    for (int i = newArrSize - 2; i >= 0; i--){
        if (plus){
            int temp = digits[i];
            temp++;
            plus = 0;
            if (temp > 9){
                if (i == 0){
                    newArr[i] = 1;
                    newArr[newArrSize - 1] = 0;
                    digitsSize++;
                } else {
                    newArr[i] = 0;
                    newArr[i - 1]++;
                    plus = 1;
                }
            }
            else {
                newArr[i] = temp;
            } 
        } else {
            newArr[i] = digits[i];
        }
    }
    *returnSize = digitsSize;
    return newArr;
}
