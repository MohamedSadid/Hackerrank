int jumpingOnClouds(int c_count, int* c) {
    int jumps = 0;
    int i = 0;
    while(true) {
        if(((i + 2) < c_count) && (c[i + 2] == 0)) {
            i += 2;
        } else if((i + 1) < c_count) {
            i++;
        } else {
            break;
        }
        jumps++;
    }
    
    return jumps;
}