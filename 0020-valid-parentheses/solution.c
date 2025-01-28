int comp_stack(char s, int *stack, int *size){
    if (*size == 0){
        int point = *size;
    } else {
        *size = *size - 1;
    }
    int point = *size;
    if (stack[point] == '{' && s == '}'){
        stack[point] = 0;
        return true;
    } else if (stack[point] == '[' && s == ']'){
        stack[point] = 0;
        return true;
    } else if (stack[point] == '(' && s == ')'){
        stack[point] = 0;
        return true;
    } else {
        return false;
    }
}

void add_stack(char s, int *stack, int *size){
    stack[(*size)++] = s;
}
bool isValid(char* s) {
    if (strlen(s) == 1) {
        return false;
    }
    int max_stack = strlen(s);
    int stack[max_stack] = {}; 
    int stack_size = 0;
    int open = 0;
    int close = 0;
    for (int i = 0; s[i] != '\0'; i++){
        switch(s[i]){
            case '{':
            case '[':
            case '(':
                open++;
                add_stack(s[i], stack, &stack_size);
                break;
            default:
                close++;
                if (!comp_stack(s[i], stack, &stack_size)) {
                    return false;
            }
        }
    }
    return (open == close);
}

