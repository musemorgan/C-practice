#include <stdio.h>

int my_strlen(char str[]){
int length = 0; 
for (int i=0; str[i]!='\0'; i++ ){
    //str[i]; THis does nothing so its not needed. the line right below is doing the heavy lifitng
    length  += 1;
}
return length;
}

int main(){
char name[]= "Alice";
printf("Length: %d\n", my_strlen(name));





    return 0;
}