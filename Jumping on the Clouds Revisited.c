int jumpingOnClouds(int c_count, int* c, int k) {
    int energy = 100;
    
    for (int i = 0; i < c_count; i = i + k) {
        if (c[i] == 0) {
            energy--;
        } else if (c[i] == 1) {
            energy = energy - 3;
        }
    }
    return energy;
}