int minimum(int num1, int num2) {
    return ((num1 < num2) ? (num1) : (num2));
}
int* closestNumbers(int arr_count, int* arr, int* result_count) {

    int i;
    int index;
    int value;
    int minStep;
    int count = 0;
    int ind = 0;

    for (i = 1; i < arr_count; i++) {
        index = i;
        value = arr[index];
        
        while ((index > 0) && (arr[index - 1] > value)) {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }

    minStep = abs(arr[0] - arr[1]);
    for (i = 0; i < arr_count - 1; i++) {
      minStep = minimum(minStep, abs(arr[i] - arr[i + 1]));
    }

    for (i = 0; i < arr_count - 1; i++) {
      if (abs(arr[i] - arr[i + 1]) == minStep) {
          arr[ind] = arr[i];
          arr[ind + 1] = arr[i + 1];
          count += 2;
          ind += 2;
      }
    }

    *result_count = count;

    return arr;
}