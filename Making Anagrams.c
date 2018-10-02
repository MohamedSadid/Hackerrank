int makingAnagrams(char* s1, char* s2) {
    int res = 0;
    int *pA1 = (int *)calloc(26, sizeof(int));
    int *pA2 = (int *)calloc(26, sizeof(int));
    
    for (int i = 0; i < strlen(s1); i++) {
        pA1[s1[i] - 'a']++;
    }
    
    for (int i = 0; i < strlen(s2); i++) {
        pA2[s2[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        res += abs(pA1[i] - pA2[i]);
    }
    return res;
}