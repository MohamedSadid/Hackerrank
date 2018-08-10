int* breakingRecords(int scores_count, int* scores, int* result_count) {
    
    *result_count = 2;
    
    int max = scores[0];
    int min = scores[0];
    int countMax = 0;
    int countMin = 0;
    
    for (int i = 1; i < scores_count; i++) {
        if (scores[i] > max) {
            countMax++;
            max = scores[i];
        } else if (scores[i] < min) {
            countMin++;
            min = scores[i];
        }
    }
    
    scores[0] = countMax;
    scores[1] = countMin;
    
    return scores;

}