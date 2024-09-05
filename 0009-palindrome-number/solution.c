bool isPalindrome(int x) {
    if (x < 0){
        return false;
    }
    unsigned original = x;
    int buffer;
    unsigned reversed = 0;
    while (x != 0) {
        buffer = x % 10;
        reversed = reversed * 10 + buffer;
        x /= 10;
    }
    return (reversed == original);
}
