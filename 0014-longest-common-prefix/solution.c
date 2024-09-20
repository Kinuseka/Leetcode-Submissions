char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    char *first = strs[0];
    for (int i = 0; i < strsSize; i++){
        int j = 0;
        while (first[j] && strs[i][j] && first[j] == strs[i][j]){
            j++;
        }

        first[j] = '\0';

        if (j == 0){
            return "";
        }
    }
    
    return first;
}
