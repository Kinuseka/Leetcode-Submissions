bool squareIsWhite(char* coordinates) {
    int currentValue = coordinates[0] - 96 + coordinates[1];
    if (currentValue % 2 != 0){
        return true;
    } 
    return false;
}
