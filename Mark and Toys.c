int maximumToys(int prices_count, int* prices, int k) {
    int count = 0;
    
    int index, value;
    for (int i = 1; i < prices_count; i++) {
        index = i;
        value = prices[i];
        
        while ((index > 0) && (prices[index - 1] > value)) {
            prices[index] = prices[index - 1];
            index--;
        }
        prices[index] = value;
    }
    
    for (int i = 0; i < prices_count; i++) {
        if (prices[i] < k) {
            k -= prices[i];
            count++;
        }
    }
    
    return count;
}