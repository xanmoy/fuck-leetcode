int strStr(char* haystack, char* needle) {
    if (needle[0] == '\0') {
        return 0;
    }
    
    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);
    if (needle_len > haystack_len) {
        return -1;
    }

    for (int i = 0; i <= haystack_len - needle_len; i++) {
        int j = 0;
        while (j < needle_len && haystack[i + j] == needle[j]) {
            j++;
        }
        
        if (j == needle_len) {
            return i;
        }
    }
    
    return -1;
}