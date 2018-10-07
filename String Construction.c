int stringConstruction(char* s) {
    int count = 0;
    int *pA = (int *)calloc(26, sizeof(int));
    
    for (int i = 0; i < strlen(s); i++) {
        pA[s[i] - 'a'] = 1;    
    }
    
    for (int i = 0; i < 26; i++) {
        count += pA[i];
    }
    
    return count;
}