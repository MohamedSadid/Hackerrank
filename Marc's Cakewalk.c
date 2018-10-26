long marcsCakewalk(int calorie_count, int* calorie) {

    long res = 0;
    int index, value;
    for (int i = 1; i < calorie_count; i++) {
        index = i;
        value = calorie[i];
        while ((index > 0) && (calorie[index - 1] < value)) {
            calorie[index] = calorie[index - 1];
            index--;
        }
        calorie[index] = value;
    }
    
    for (int i = 0; i < calorie_count; i++) {
        res += calorie[i] * pow(2, i);
    }
    
    return res;

}