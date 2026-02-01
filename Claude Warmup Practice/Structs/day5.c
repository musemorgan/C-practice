//The creation of a grade management system, combinging all arrary, string, and struct learnings into one program

#include <stdio.h>
#include <string.h>

//defining the struct
struct Student{
    char name[10];
    int id;
    int score;
};

int main(){
//opening the file
FILE* file = fopen("student.txt", "r");
if (file == NULL)
{
    //ensuring that the file opens, and practicing debugging
    printf("DEBUG: File could not open");
    return 1;
}
//creating rows for the students
struct Student students[100];
//creating variables used within 
int count = 0;
int sum= 0;
float average = 0;
int Hscore =0;
int Lscore=0;
int hTemp=0;
int lTemp =0;
int below =0;
int above =0;
//reading and storing the students information into different rows from the file
while (fscanf(file, "%s %d %d",students[count].name, &students[count].id, &students[count].score) ==3)
    {
        //allows you to traverse through the different students based upon index
        count++;
    }
fclose(file);

FILE* report = fopen("report.txt", "w");
if (report ==NULL){
    printf("DEBUG: couldnt open report file");
    return 1;
}
    else 
        printf("DEBUG: successfully opened report.txt, beginning writing");
fprintf(report,"=========CLASS REPORT=============\n");
fprintf(report, "Total Students: %d\n", count);
fprintf(report, "\nAll Students:\n");
for (int i = 0; i<count; i++){
    fprintf(report, "%s (ID: %d) - Score: %d\n", students[i].name, students[i].id, students[i].score);
    if (students[hTemp].score<students[i].score)
        hTemp = i;
    if (students[lTemp].score>students[i].score)
        lTemp = i;
    sum += students[i].score;
}
average = (float)sum /(float)count;
for (int j=0; j < count; j++){
    if(students[j].score <average)
        below++;
    else
        above++;
}

fprintf(report, "========= STATISTICS ============\n");
fprintf(report, "Class Average: %.2f\n", average);
fprintf(report, "Highest Score: %s - %d\n", students[hTemp].name, students[hTemp].score);
fprintf(report, "Lowest Score: %s - %d\n", students[lTemp].name, students[lTemp].score);
fprintf(report, "Students Above Average: %d\n", above);
fprintf(report, "Students Below Average: %d\n", below);
fclose(report);

    return 0;
}