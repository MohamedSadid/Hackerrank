// Complete the camelcase function below.
int camelcase(char* s) {
    int count = 0;
    
    while (*s) {
        if (!((*s >= 'a') && (*s <= 'z'))) {
            count++;
        }
        s++;
    }
    
    return count + 1;
}