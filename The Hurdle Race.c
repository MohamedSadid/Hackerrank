int hurdleRace(int k, int height_count, int* height) {
    int *ptrToArr = height;
    int max = *ptrToArr;
    
    for (int i = 1; i < height_count; i++) {
        if (*(ptrToArr + i) > max) max = *(ptrToArr + i);
    }
    
    if (max > k) return (max - k);
    else return 0;
}
