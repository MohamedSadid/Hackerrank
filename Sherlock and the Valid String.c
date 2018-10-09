char* isValid(char* s) {
    int min = (1 << 30);
    int ones = 0;
    int def = 0;
    int *pA = (int *)calloc(26, strlen(s));
    
    if (strlen(s) == 1) return "YES"; 
    for (int i = 0; i < strlen(s); i++) {
        pA[s[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if ((pA[i] != 0) && (pA[i] != 1) && (pA[i] < min)) min = pA[i];
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", pA[i]);
        if (pA[i] == 1) ones++;
        if ((pA[i] != 0) && (pA[i] != 1)  && (pA[i] != min)) def = pA[i];
    }
    
    if (ones > 1) {
        return "NO";
    } else if (ones == 0) {
        if (def != 0) {
            if ((def - 1) != min) return "NO";
        }    
    } else if ((ones == 1) && (def != 0)) {
        return "NO";
    }
    return "YES";
}