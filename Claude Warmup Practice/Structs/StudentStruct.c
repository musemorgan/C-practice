#include <stdio.h>
#include <string.h>


struct Student{
    char name[50];
    int id;
    int score;
};

int main(){

//two ways to initialize in structs
//strcpy(s1.name, "Alice");
//struct Student s1 = {"Alice, 12345, 95"};

struct Student s1;
strcpy(s1.name, "Alice"); //Why is this formatted this way, but not for the other two items below? Strings can be assigned directly in c
s1.id = 12345;
s1.score = 95;
struct Student s2 = {"Morgan", 10234, 99};

printf("Student: %s (ID: %d) - Score: %d\n", s1.name, s1.id, s1.score);
printf("student: %s (ID: %d) - Score: %d\n", s2.name, s2.id, s2.score);

    return 0;
}