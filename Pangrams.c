char* pangrams(char* s) {
    bool flag = true;
    int *arr = (int *)calloc(26, sizeof(int));
    
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            arr[s[i] - 'a']++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            arr[s[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 26; i++ ) {
        if (arr[i] == 0) {
            flag = false;
            break;
        }
    }
    
    return (flag == true) ? ("pangram") : ("not pangram");
}