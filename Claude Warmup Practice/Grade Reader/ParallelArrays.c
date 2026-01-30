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
void find_student(char names[][50], int ids[], int scores[], int count, int search_id){
    for (int i = 0; i < count; i++){
       // fscanf(file, "%s %d %d", names[i], ids[i], scores[i]); not needed because this is reading and storing variables
        if (ids[i] == search_id){
            printf("FOUND: %s %d %d\n", names[i], ids[i], scores[i]);
            return; //doesnt need a number by it because this is a void function
        }}
printf("DEBUG: Student not found.\n");

}

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
    printf("\n ===================== |Searching for Student| =====================\n");
    find_student(name, id, scores, count, 12346);  // Should find Bob
    find_student(name, id, scores, count, 99999);  // Should print "not found"



    return 0;
}