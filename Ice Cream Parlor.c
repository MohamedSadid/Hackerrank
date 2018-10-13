for (int i = 0; i < arr_count; i++) {
        for (int j = (i + 1); j < arr_count; j++) {
            if (arr[i] + arr[j] == m) {
                arr[0] = i + 1;
                arr[1] = j + 1;
                return arr;
            }
        }
    }
    return 0;
}