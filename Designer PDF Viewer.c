int designerPdfViewer(int h_count, int* h, char* word) {
    int len = strlen(word);
    int max = h[(int)*(word) - 'a'];
    
    while (*word++) {
        if (h[(int)*(word) - 'a'] > max) max = h[(int)*(word) - 'a'];
    }
    
    return max * len;
}