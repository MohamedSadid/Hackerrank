char* solve(long n) {

    long arr[100];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < 100; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for (int i = 99 ; i >= 0; i--) {
        if (arr[i] == n) {
            return "IsFibo";
        }
    }

    return "IsNotFibo";
}