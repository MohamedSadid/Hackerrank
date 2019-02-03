void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int pivotIndex(int *arr, int start, int end) {
    int pivot = arr[end];
    int index = start;
    int i;

    for (i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            swap(&arr[i], &arr[index]);
            index++;
        }
    }
    swap(&arr[index], &arr[end]);
    return index;
}

void quickSort(int *arr, int start, int end) {
    int pInd;
    if (start < end) {
        pInd = pivotIndex(arr, start, end);
        quickSort(arr, start, pInd - 1);
        quickSort(arr, pInd + 1, end);
    }
}
int minimum(int num1, int num2) {
    return (num1 < num2) ? (num1) : (num2);
}
// Complete the maxMin function below.
int maxMin(int k, int arr_count, int* arr) {

    quickSort(arr, 0, arr_count - 1);
    int min = arr[arr_count - 1] - arr[0];

    for (int i = 0; i < (arr_count - k + 1); i++) {
      if ((arr[i + k - 1] - arr[i]) < min) {
        min = arr[i + k - 1] - arr[i];
        }
    }
    return min;

}