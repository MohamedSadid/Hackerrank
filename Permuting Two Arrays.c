int minimum(int num1, int num2) {
    return ((num1 < num2) ? (num1) : (num2));
}
int* closestNumbers(int arr_count, int* arr, int* result_count) {

void insertionSort(int *arr, int len, unsigned char flag) {
  int i;
  int index;
  int value;

  for (i = 1; i < len; i++) {
    index = i;
    value = arr[index];

    if (!flag) {
        while ((index > 0) && (arr[index - 1] > value)) {
            arr[index] = arr[index - 1];
            index--;
        }
    } else if (flag) {
        while ((index > 0) && (arr[index - 1] < value)) {
            arr[index] = arr[index - 1];
            index--;
        }
    }
    arr[index] = value;
  }
}

char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {

    insertionSort(A, A_count, 0);
    insertionSort(B, B_count, 1);

    int i;
    for (i = 0; i < A_count; i++) {
        if ((A[i] + B[i]) < k) {
            return "NO";
        }
    }

    return "YES";
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