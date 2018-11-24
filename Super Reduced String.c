char* superReducedString(char* s) {
    int len = strlen(s);

    for (int i = 0; i < len - 1; i++) {
        if (s[i] == s[i + 1]) {
            for (int k = i; k < len - 2; k++) {
                s[k] = s[k + 2];
            }
            i -= 2;
            len -= 2;
        }
    }
    s[len] = '\0';

    return (len) ? (s) : ("Empty String");
}