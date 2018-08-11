char* catAndMouse(int x, int y, int z) {

    if ((abs(z - x)) > (abs(z - y))) {
        return "Cat B";
    } else if ((abs(z - x)) < (abs(z - y))) {
        return "Cat A";
    } else {
        return "Mouse C";
    }
}