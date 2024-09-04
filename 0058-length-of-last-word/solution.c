int lengthOfLastWord(char* s) {
    int length = strlen(s);
    int f;
    char space = ' ';
    for(int i = length-1; i>=0; i--) {
        if (s[i] != space) {
            f = i;
            break;
        }
    }
    int size_last = 0;
    for (int i = f; i >= 0; i--){
        if (s[i] == space) break;
        size_last++;
    }
    return size_last;
}
