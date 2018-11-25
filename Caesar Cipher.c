char* caesarCipher(char* s, int k) {
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z')) {
            s[i] = ((s[i] - 'A' + 'a' - 'a' + k) % 26) + 'A';
        } else if ((s[i] >= 'a' && s[i] <= 'z')) {
          s[i] = ((s[i] - 'a' + k) % 26) + 'a';
        }
    }

    return s;
}