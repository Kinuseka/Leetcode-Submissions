int lengthOfLongestSubstring(char* s) {
    int strLen = strlen(s);
    int maxLen = 0;
    int start = 0; //sliding window start
    int index[128]; //Ascii char map
    char cp;
    for (int i = 0; i < strLen; i++){
        cp = s[i];
        
        if (index[cp] > start) {
            start = index[cp];
        }

        int currentLen = i - start + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }

        index[cp] = i + 1;
        // printf("%d, index = %d, cp = %c\n", currentLen, index[cp], cp);
    }
    return maxLen;
}
