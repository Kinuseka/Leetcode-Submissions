int climbStairs(int n) {
    int a = 0;
    int b = 1;
    int result = 0;
    for (int i = 0; i < n; i++){
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}
