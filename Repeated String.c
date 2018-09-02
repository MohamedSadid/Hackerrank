long repeatedString(char* s, long n) {
    long count = 0;
    long div = n / strlen(s);
    long rem = n % strlen(s);
    
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'a') {
            count++;
        }
    }
    
    count *= div;
    
    for (long i = 0; i < rem; i++) {
        if (s[i] == 'a') count++;
    }
    return count;
}