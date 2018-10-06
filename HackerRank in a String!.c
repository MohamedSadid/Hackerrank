char* hackerrankInString(char* s) {
    
    char *ptr = "hackerrank";
    int count = 0;
    
    for (int i = 0; i < strlen(s); i++) {
        if((ptr[count] == s[i])) {
            count++;
        }
    }
    return (count == 10) ? ("YES") : ("NO");

}