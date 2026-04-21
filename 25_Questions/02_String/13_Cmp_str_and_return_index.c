#include <stdio.h>

int cmpString(const char *str1, const char *str2){
    int i = 0;
    
    for(i = 0; str1[i] != '\0'; i++) {
        for(int j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j]) {
                return i;
            }
        }
    }

    return -1;
}

int main()
{
    char str1[100] = "embedded"; 
    char str2[100] = "xyzb";
    
    int index = cmpString(str1, str2);
    printf("Index of first mismatch: %d\n", index);

    return 0;
}
