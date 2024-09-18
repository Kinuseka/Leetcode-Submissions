#include <string.h>



int strStr(char* haystack, char* needle) {
    int needleLen = strlen(needle);
    int haystackLen = strlen(haystack);

    // Early exit if needle is longer than haystack
    if (needleLen > haystackLen) {
        return -1;
    }

    int start = 0; // Starting index for haystack
    char group[needleLen + 1]; // Temporary array to store a substring

    while (start + needleLen <= haystackLen) { // Ensure we don't go out of bounds
        int gindex = 0;
        for (int i = start; i < start + needleLen; i++) {
            group[gindex++] = haystack[i];
        }
        group[gindex] = '\0'; // Null terminate the group
        if (strcmp(group, needle) == 0) {
            return start; // Found the match, return the starting index
        }
        start++;
    }

    return -1; // If no match found, return -1

}
