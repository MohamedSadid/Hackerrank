int theLoveLetterMystery(char* s) {
    int res = 0;
    int arrSize = (strlen(s) / 2);
    char arr[arrSize];
    int sInd = (strlen(s) % 2) ? ((strlen(s) / 2) + 1) : (strlen(s) / 2);
    int k = 0; 
    
    for (int i = strlen(s) - 1; i >= sInd; i--) {
        arr[k] = s[i];
        k++;
    }    
    
    for (int i = 0; i < arrSize; i++) {
        while (arr[i] != s[i]) {
            res++;
            (arr[i] < s[i]) ? (arr[i]++) : (arr[i]--);
        }
    }
    
    return res;
}