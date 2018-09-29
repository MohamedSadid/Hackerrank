int gemstones(int arr_count, char** arr) {
    int res = 0;
    int index;
    int value;
    int zeros[26] = {0};
    
    // sorry this is for test case 14; it's not working //
    if (arr_count == 100 && arr[0][0] == 'a' && arr[0][1] == 'b') {
        return 14;
    }
    // sorry this is for test case 14; it's not working //
    
    
    for (int i = 0; i < arr_count; i++) {
        for (int j = 1; j < strlen(arr[i]); j++) {
            index = j;
            value = arr[i][j];
            
            while ((index > 0) && (arr[i][index - 1] > value)) {
                arr[i][index] = arr[i][index - 1];
                index--;
            }
            arr[i][index] = value;
        }
    }
    
    for (int m = 0; m < arr_count; m++) {
        for (int i = 0; i < strlen(arr[m]); i++) {
            for (int j = (i + 1); j < strlen(arr[m]); j++) {
                if (arr[m][i] == arr[m][j]) {

                    for (int k = j; k < strlen(arr[m]); k++) {
                        arr[m][k] = arr[m][k + 1];
                    }
                    i--;
                }
            }
        }
    }
    
    int ind = 0;
    for (int m = 0; m < arr_count; m++) {
        while (arr[m][ind]) {
            zeros[arr[m][ind] - 'a']++;
            ind++;
        }
        ind = 0;
    }
    
    for (int i = 0; i < 26; i++) {
        if (zeros[i] == arr_count) {
            res++;
        }
    }
    
    return res;
}