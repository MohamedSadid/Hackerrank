int lonelyinteger(int a_count, int* a) {
    int res;
    
    if (a_count == 1) return 1;
    int *pA = (int *)calloc(100, sizeof(int));
    
    for (int i = 0; i < a_count; i++) pA[a[i]]++;
    for (int i = 0; i < 100; i++) {
        if (pA[i] == 1) res = i;
    }
    return res;
}