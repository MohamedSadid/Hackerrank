int getMin(int *arr, int len) {
    int min = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int countElements(int *arr, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        count++;
    }
    return count;
}

void reduce(int *arr, int *len) {
    for (int i = 0; i < *len; i++) {
        if (arr[i] <= 0) {
            for (int k = i; k < (*len) - 1; k++) {
                arr[k] = arr[k + 1];
            }
            i--;
            (*len)--;
        }
    }
}
int* cutTheSticks(int arr_count, int* arr, int* result_count) {
    *result_count = arr_count;
    int *p;
    int *arrElements = (int *)malloc(arr_count * sizeof(int));
    int len = arr_count;
    int count;
    int min;
    
    for (int j = 0; j < len; j++) {
        count = countElements(arr, arr_count);
        arrElements[j] = count;
        min = getMin(arr, arr_count);
        
        for (int i = 0; i < arr_count; i++) {
            arr[i] -= min;
        }
        reduce(arr, &arr_count);
    }
    
    int zeros = 0;
    
    for (int i = 0; i < len; i++) {
        if (arrElements[i] == 0) {
            zeros++;
        }
    }
    
    *result_count = (len - zeros);    
    return arrElements;
}