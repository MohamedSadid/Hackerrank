int migratoryBirds(int arr_count, int* arr) {

    int *ptrToHeap = (int*)calloc(124992, sizeof(int));
    
    for (int i = 0; i < arr_count; i++) {
        ptrToHeap[arr[i]]++;
    }
    
    int max = ptrToHeap[0];
    
    for (int i = 0; i < arr_count; i++) {
        if (ptrToHeap[i] > max) max = ptrToHeap[i];
    }
    
    int flag = -1;
    for (int i = 0; i < arr_count; i++) {
        if (ptrToHeap[i] == max) {
            flag = i;
            break;
        }
    }
    
    return flag;

}