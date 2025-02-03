bool isPalindrome(char* s) {
    int len = strlen(s);
    int first = 0;
    int last = len - 1;
    int iter = 0;
    while (iter <= len){
        iter++; 
        if ( !isalnum(s[first]) ){
            first++;
            continue;
        }
        else if ( !isalnum(s[last]) ){
            last--;
            continue;
        }   
        if(tolower(s[first++]) != tolower(s[last--])){
            return false;
        }
    }
    return true;
}
