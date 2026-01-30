#include <stdio.h>
#include <string.h>

int my_strcmp(char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2){
        printf("DEBUG: Length of strings do not match\n");
        return 1;
    }

    for (int i=0; str1[i] != '\0'; i++)
        if (str1[i] != str2[i])
        {
            printf("DEBUG: Strings do not match\n");
            return 1;
        }
    return 0;
}

int main(){
    printf("%d\n", my_strcmp("Hello", "Hello"));  // Should print 0
    printf("%d\n", my_strcmp("Hello", "World"));  // Should print 1



    return 0;
}