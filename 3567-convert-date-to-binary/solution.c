#include <stdio.h>

char *toBinary(int num) {
    char *binaryStr = (char*)malloc(33);
    if (num == 0){
        binaryStr[0] = '0';
        binaryStr[1] = '\0';
        return binaryStr;
    }
    int indexF = 0;
    for (int i = 31; i >=0; i--){
        if ((num >> i) & 1) {
            binaryStr[indexF++] = '1';
        } else if (indexF > 0){
            binaryStr[indexF++] = '0';
        }
        // num >>= 1;
    }
    binaryStr[indexF] = '\0';
    return binaryStr;
}

char* convertDateToBinary(char* date) {
    int year, month, day;
    sscanf(date, "%d-%d-%d", &year, &month, &day);
    char *syear = toBinary(year);
    char *smonth = toBinary(month);
    char *sday = toBinary(day);
    char *result = (char*)malloc(strlen(syear)+strlen(smonth)+strlen(sday)+2+1); //+2 dashes+1null
    sprintf(result, "%s-%s-%s", syear, smonth, sday);
    free(syear);
    free(smonth);
    free(sday);
    return result;
}
