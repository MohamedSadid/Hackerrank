int birthday(int s_count, int* s, int d, int m) {
    int res = 0;
    int count = 0;
    int j;
    int k;
    for (int i = 0; i < s_count; i++) {
        j = 0;
        k = i;
        while (j < m) {
            res += s[k];
            k++;
            j++;
        }
        if (res == d) {
            count++;
        }
        res = 0;
    }
    
    return count;
}