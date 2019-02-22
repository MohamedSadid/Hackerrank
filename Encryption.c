char* encryption(char* s) {
    int string_length = strlen(s);
    int cols = 0;
    int spaces = 0;
    int ind = 0;
    
    cols = ceil(sqrt((double)string_length));
    spaces = cols - 1;

    char res[string_length + spaces + 1];

    ind = 0;
    for (int i = 0; i < cols; i++) {
      for (int j = i; j < string_length; j += cols) {
        res[ind] = s[j];
        ind++;
      }
      res[ind] = ' ';
      ind++;
    }
    res[--ind] = '\0';

    s = res;
    return s;
}