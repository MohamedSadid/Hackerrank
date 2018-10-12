int* countingSort(int arr_count, int* arr, int* result_count) {
    int *pA = (int *)calloc(100, sizeof(int));
    
    for (int i = 0; i < arr_count; i++) {
        pA[arr[i]]++;
    }
    
    int ind = 0;
    for (int i = 0; i < 100; i++) {
        if (pA[i] > 0) {
            for (int j = 0; j < pA[i]; j++) {
                arr[ind] = i;
                ind++;
            }
        }
    }
    
    *result_count = arr_count;
    return arr;
}