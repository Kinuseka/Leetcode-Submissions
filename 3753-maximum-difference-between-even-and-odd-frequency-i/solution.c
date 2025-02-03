int maxDifference(char* s) {
    int *freq = calloc(26,sizeof(int));
    int max = 0;
    int min = 0;

    for (int i = 0; i < strlen(s); i++){
        freq[s[i] - 'a'] = ++freq[s[i] - 'a'];
    }
    for (int i = 0; i < 26; i++){
        int current = freq[i];
        if (current > 0){
            if (current % 2 == 0){
                if (current < min || min == 0) {
                    min = current;
                }
            } else {
                if (current > max){
                    max = current;
                }
            }
        }
    }
    return max - min;
}
