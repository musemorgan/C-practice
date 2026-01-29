#include <stdio.h>
/*
Goal: Read all students into arrays, THEN:

Print all students
Calculate average
NEW: Find and print the highest score + that student's name

Your task: After the loop, write code to:
Loop through and print all students
Find the index of the highest score
Print: "Best student: [name] with score [score]"
*/

int main(){
    FILE* file = fopen("student.txt", "r");

    if (file == NULL){
        printf("DEBUG: Couldn't open file");
        return 1;
    }
    char name[100][50]; //[100 students (row instqances)][string length within each row]
    int id[100];
    int scores[100];
    int count = 0;


    int topScoreIndex = 0;
    while (fscanf(file, "%s %d %d", name[count], &id[count], &scores[count]) == 3){
        //utilizing the count to be able to traverse through each row instance 
        if (scores[topScoreIndex] < scores[count])
            topScoreIndex = count;
        count++;
    }
    fclose(file);
    if (file == NULL)
        printf("DEBUG: Couldn't close file");

    for (int i = 0; i < count; i++)
    {
        printf("Student: %s (ID: %d) - scores: %d\n", name[i],id[i], scores[i]);
    }

    printf("Best student: %s with score %d", name[topScoreIndex], scores[topScoreIndex]);




    return 0;
}