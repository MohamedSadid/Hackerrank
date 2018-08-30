int* permutationEquation(int p_count, int* p, int* result_count) {
    *result_count = p_count;
    int *ptrToHeap1 = (int *)malloc(p_count * sizeof(int));
    int *ptrToHeap2 = (int *)malloc(p_count * sizeof(int));
    
    int x = 1;
    for (int i = 0; i < p_count; i++) {
        for (int j = 0; j < p_count; j++) {
            if (p[j] == x) {
                ptrToHeap1[i] = j + 1;
            }
        }
        x++;
    }
    
    for (int i = 0; i < p_count; i++) {
        for (int j = 0; j < p_count; j++) {
            if (p[j] == ptrToHeap1[i]) {
                ptrToHeap2[i] = j + 1;
            }
        }
    }
    
    for (int i = 0; i < p_count; i++) {
        p[i] = ptrToHeap2[i];
    }
    return p;
}