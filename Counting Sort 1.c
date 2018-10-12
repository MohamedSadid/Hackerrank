int* countingSort(int arr_count, int* arr, int* result_count) {
    *result_count = 100;
    int* pA = (int *)calloc(arr_count, sizeof(int));
    for (int i = 0; i < arr_count; i++) {
        pA[arr[i]]++;
    }
    return pA;
}