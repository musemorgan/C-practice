#include <stdio.h>

int main(){
    FILE* file; //* comes after FILE not before
    int grade;
    int count = 0;
    int sum = 0;
    float average = 0;

    printf("DEBUG: opening file\n");

    file = fopen("grades.txt", "r");
    if (file == NULL){
        printf("DEBUG: Couldn't open file\n");
        return 1;
    }

    printf("DEBUG: Successfully opened the file!\n")





    return 0;
}