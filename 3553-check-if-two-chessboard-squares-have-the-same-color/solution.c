bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    return ((coordinate1[0] - 96 + coordinate1[1]) % 2 == 0) == ((coordinate2[0] - 96 + coordinate2[1]) % 2 == 0);
}
