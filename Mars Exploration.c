int marsExploration(char* s) {
    unsigned char count = 0;
    unsigned char arr[] = {'S', 'O', 'S'};
    if (strlen(s) % 3 == 0) {
        for (int i = 0; i < strlen(s); i++) {
            if (!(s[i] == arr[i % 3])) count++;
        }
    }
    return count;
}
