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
strcpy(s1.name, "Alice");
s1.id = 12345;
s1.score = 95;

printf("Student: %s (ID: %d) - Score: %d\n", s1.name, s1.id, s1.score);

    return 0;
}