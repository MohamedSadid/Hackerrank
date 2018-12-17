int maximum(int num1, int num2) {
    return ((num1 > num2) ? (num1) : (num2));
}
int pickingNumbers(int a_count, int* a) {

    int index;
    int value;
    int count = 0;
    int max = 0;
    int count2 = 0;
    int max2 = 0;

    for (int i = 1; i < a_count; i++) {
        index = i;
        value = a[index];
        while ((index > 0) && (a[index - 1] > value)) {
            a[index] = a[index - 1];
            index--;
        }
        a[index] = value;
    }

    for (int i = 0; i < a_count - 1; i++) {
      if (a[i] == a[i + 1]) {
          count2++;
          max2 = maximum(count2, max2);
      } else if (a[i] != a[i + 1]) {
          count2 = 0;
      }
    }

    for (int i = 0; i < a_count - 1; i++) {
      if (abs(a[i] - a[i + 1]) == 1) {
            for (int j = 0; j < a_count; j++) {
                if ((a[j] == a[i]) || (a[j] == a[i + 1])) {
                    count++;
                }
            }
        max = maximum(count, max);
        count = 0;
      }
    }
    return (((max2 + 1) > max) ? (max2 + 1) : (max));
}