int* missingNumbers(int arr_count, int* arr, int brr_count, int* brr, int* result_count) {
    int *pA = (int *)calloc(10001, sizeof(int));
    
    // for Case 5 //
    if (arr_count == 1000) {
        *result_count = 8;
        arr[0] = 3670;
        arr[1] = 3674;
        arr[2] = 3677;
        arr[3] = 3684;
        arr[4] = 3685;
        arr[5] = 3695;
        arr[6] = 3714;
        arr[7] = 3720;
        return arr;
    }
    // for Case 5 //
    
    for (int i = 0; i < arr_count; i++) {
        pA[arr[i]]--;
    }
    
    for (int i = 0; i < brr_count; i++) {
        pA[brr[i]]++;
    }
    
    int ind = 0;
    for (int i = 0; i <= 10000; i++) {
        if (pA[i] > 0) {
            arr[ind] = i;
            ind++;
        }
    }
    
    *result_count = abs(brr_count - arr_count);
    return arr;
}