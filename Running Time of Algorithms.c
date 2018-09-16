int runningTime(int arr_count, int* arr) {
    int count;
    int index, value;
    for (int i = 1; i < arr_count; i++) {
        index = i;
        value = arr[i];
        while ((index > 0) && (arr[index - 1] > value)) {
            count++;
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
    return count;
}