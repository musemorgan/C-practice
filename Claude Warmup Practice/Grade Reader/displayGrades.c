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

    printf("DEBUG: Successfully opened the file!\n");

    while(fscanf(file, "%d", &grade) == 1)
    {
        printf("DEBUG: grade #%d\n", grade);
        sum = sum + grade;
        count = count + 1;
    }

    printf("DEBUG: Finished reading, total number of grades = %d\n", count);
    fclose(file);

    if (count > 0 ){
        average = sum /(float)count; //casting to another data type can be done with parenthesis and the data type inside
        printf("===============RESULTS=============\n");
        printf("Number of grades: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    }
    else{
        printf("DEBUG: No grades found.");
    }

    return 0;
}