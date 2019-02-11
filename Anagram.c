int anagram(char* s) {

    int i;
    int len = strlen(s);
    int count = 0;
    if ((len % 2) == 1) {
        return -1;
    }
    unsigned char *arr1 = (unsigned char *)calloc(26, sizeof(unsigned char));
    unsigned char *arr2 = (unsigned char *)calloc(26, sizeof(unsigned char));


    for (i = 0; i < len / 2; i++) {
        arr1[s[i] - 'a']++;
        arr2[s[i + (len / 2)] - 'a']++;
    }
    for (i = 0; i < 26; i++) {
        if (arr1[i] > arr2[i]) {
            count += abs(arr1[i] - arr2[i]);
        }
    }
    return count;
}