#include <stdio.h>

int main(){

    FILE* create_file = fopen("grades.txt", "w");

    if (create_file == NULL){ //requires double == to not set the pointer to null
        printf("DEBUG: Unable to create file\n");
        //what does it mean if a file is null on w ? I understand null on r would mean its empty
        return 1;
    }

    //writing out the grades
    fprintf(create_file, "85\n");
    fprintf(create_file, "90\n");
    fprintf(create_file, "78\n");
    fprintf(create_file, "92\n");
    fprintf(create_file, "88\n");

    fclose(create_file);
    printf("DEBUG: File open, write, and close successful!\n");

    return 0;
}