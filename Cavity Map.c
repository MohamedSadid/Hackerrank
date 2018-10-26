char** cavityMap(int grid_count, char** grid, int* result_count) {
    
    *result_count = grid_count;
    int x[] = {-1, 0, 1, 0};
    int y[] = {0, 1, 0, -1};
    for (int i = 1; i < grid_count - 1; i++) {
        for (int j = 1; j < grid_count - 1; j++) {
            if (grid[i][j] > grid[i + x[0]][j + y[0]] &&
                grid[i][j] > grid[i + x[1]][j + y[1]] &&
                grid[i][j] > grid[i + x[2]][j + y[2]] &&
                grid[i][j] > grid[i + x[3]][j + y[3]]
               ) {
                grid[i][j] = 'X';
            }
        }
    }
    return grid;
}