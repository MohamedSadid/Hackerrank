char* gameOfThrones(char* s) {
    
    int count = 0;
    int *pA = (int *) calloc (26, sizeof(int));
    
    for (int i = 0; i < strlen(s); i++) {
        pA[s[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (pA[i] % 2) count++;
    }
    
    if (count > 1) return "NO";
    return "YES";
}