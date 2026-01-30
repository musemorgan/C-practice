#include <stdio.h>
void my_strcpy(char dest[], char src[]){
    for (int i=0; src[i]!='\0'; i++){
        dest[i]=src[i];
    }
    return;
}

int main (){
char original[] = "Hello";
char copy[50];
my_strcpy(copy, original);
printf("Original: %s\n", original);
printf("Copy: %s\n", copy);




    return 0;
}