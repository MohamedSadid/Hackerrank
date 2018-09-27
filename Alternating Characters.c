int alternatingCharacters(char* s) {
    int res = 0;
    for (int i = 0; i < strlen(s) - 1; i++) {
        if (s[i] == s[i + 1]) {
            res++;
        }
    }
    return res;
}