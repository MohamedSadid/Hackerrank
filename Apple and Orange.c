void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int *ptrToApples = apples;
    int *ptrToOranges = oranges;
    
    int countApples = 0;
    int countOranges = 0;
    
    for (int i = 0 ; i < apples_count; i++) {
        *(ptrToApples + i) += a;
        
    }
    
    for (int i = 0 ; i < oranges_count; i++) {
        *(ptrToOranges + i) += b;
    }
    
    for (int i = 0; i < apples_count; i++) {
        if ((*(ptrToApples + i) >= s) && (*(ptrToApples + i) <= t)) countApples++;
    }
    
    for (int i = 0; i < oranges_count; i++) {
        if ((*(ptrToOranges + i) >= s) && (*(ptrToOranges + i) <= t)) countOranges++;
    }
    
    printf("%d\n%d", countApples, countOranges);
}