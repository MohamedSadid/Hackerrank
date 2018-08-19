int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    
    *result_count = 2;
    int *ptrToHeap = (int *)calloc(*result_count, sizeof(int)); 
    
    for (int i = 0; i < a_count; i++) {
        if (a[i] > b[i]) {
            ptrToHeap[0]++;
        } else if (b[i] > a[i]) {
            ptrToHeap[1]++;
        }
    }
    
    return ptrToHeap;
}