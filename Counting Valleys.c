int countingValleys(int n, char* s) {
    int level = 0;
    int valley = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'U') {
            level++;
        } else if (s[i] == 'D') {
            level--;
        }
        
        if (level == 0 && s[i] == 'U') valley++;
    }
    
    return valley;
}