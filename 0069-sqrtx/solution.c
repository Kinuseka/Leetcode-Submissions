int mySqrt(long long x) {
    if (x <= 1)
        return x;
    long long i = 1;
    long long square = 1;
    for (i; square <= x; i++){
        square = i*i;
    }
    return i - 2;
}
