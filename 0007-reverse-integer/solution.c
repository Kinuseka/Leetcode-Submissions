#include <stdlib.h>
#include <limits.h>

int reverse(int x){
    long reversed = 0;
    int digit;
    while (x != 0) {
        digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    if (reversed > INT_MAX || reversed < INT_MIN) {
        return 0;
    }
    return reversed;
}
