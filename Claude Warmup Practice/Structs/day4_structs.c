#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int id;
    int score;
};



int main(){
FILE* file = fopen("student.txt", "r");
struct Student students[100];
int count = 0;

while (fscanf(file, "%s %d %d", students[count].name, &students[count].id, &students[count].score) ==3){
    count++;
}
int temp = 0;
for (int i=0; i<count ; i++){
    printf("%s %d %d\n", students[i].name, students[i].id, students[i].score);
    if (students[temp].score < students[i].score)
        temp = i;
}//THis required me to properly initialize temp to 0, then check the values in the student names with the different indexs, then store the index so it could be used later
printf("==================Best Student========================\n");
printf("%s", students[temp].name);

fclose(file);
return 0;
}