int pairs(int k, int arr_count, int* arr) {
    int count = 0;
    
    for (int l = 0; l < arr_count; l++) {
        for (int m = (l + 1); m < arr_count; m++) {
            if (arr[m] < arr[l]) {
                arr[m] = arr[m] ^ arr[l];
                arr[l] = arr[m] ^ arr[l];
                arr[m] = arr[m] ^ arr[l];
            }
        }
    }
    
    int i = 0;
    int j = 1;
    int diff;
    
    while (j < arr_count) {
        diff = arr[j] - arr[i];
        if (diff == k) {
            count++;
            j++;
        } else if (diff > k) {
            i++;
            if (i == j) {
                j++;
            }
        } else if (diff < k) {
            j++;
        }
    }
    
    return count;
}