char* funnyString(char* s) {
    int j = strlen(s) - 1;
    bool flag = true;
    
    for (int i = 0; i < strlen(s) - 1; i++, j--) {
        if (abs(s[i] - s[i + 1]) != abs(s[j] - s[j - 1])) {
            flag = false;
            break;
        }
    }   
    return (flag) ? ("Funny") : ("Not Funny");
}