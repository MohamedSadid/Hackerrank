int toys(int w_count, int* w) {
    int index;
    int value;
    int base;
    
    for(int i = 1; i < w_count; i++) {
        index = i;
        value = w[i];
        
        while ((index > 0) && (w[index - 1] > value)) {
            w[index] = w[index - 1];
            index--;   
        }
        w[index] = value;
    }
    
    index = 0;
    base = 4 + w[index];
    int preBase = 0;
    int count = 0;
    
    for (int i = 0; i < w_count; i++) {
        if (w[i] > base) base = 4 + w[i];
        
        if (w[i] <= base) {
            if (base > preBase) {
                preBase = base;
                count++;
            }
        }
    }
    
    return count;
}