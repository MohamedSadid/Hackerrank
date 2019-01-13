void quickSort(int *arr, int start, int end) {
    int pInd;
    if (start < end) {
        pInd = pivotIndex(arr, start, end);
        quickSort(arr, start, pInd - 1);
        quickSort(arr, pInd + 1, end);
    }
}

void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int pivotIndex(int *arr, int start, int end) {
    int pivot = arr[end];
    int index = start;
    for (int i = start; i < end; i++) {
        if (arr[i] < pivot) {
            swap(&arr[i], &arr[index]);
            index++;
        }
    }   
    swap(&arr[index], &arr[end]);
    return index;
}
// Complete the getMinimumCost function below.
int getMinimumCost(int k, int c_count, int* c) {

    quickSort(c, 0, c_count - 1);
    int count = 0;
    int res = 0;
    int ind = 0;
    int i;
    for (i = (c_count - 1); i >= 0; i--) {
        res += (ind + 1) * c[i];
        count++;
        if (!(count % k)) ind++;
    }

    return res;
}