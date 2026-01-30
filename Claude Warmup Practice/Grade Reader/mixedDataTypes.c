#include <stdio.h>

int main(){

    FILE* file = fopen("student.txt", "w");

    if (file == NULL){
            printf("DEBUG: Couldn't open file\n");
            return 1;
        }

    char name[50];
    int id, score;
    int count = 0;
    int total = 0;

    fprintf(file, "Alice 12345 95\n");
    fprintf(file, "Bob 12346 87\n");
    fprintf(file, "Charlie 12347 92\n");
    fclose(file);

    file=fopen("student.txt", "r");

    while(fscanf(file, "%s %d %d", name, &id, &score) == 3) //fscanf needs to imapct the value at the location the pointer points to
    {
        printf("Student: %s (ID: %d) - Score: %d\n", name, id, score); //these values are already stored and are only being read
        total = total + score;
        count = count + 1;
    }
    fclose(file);

    if (file==NULL){
        printf("DEBUG: couldnt close file");
        return 1;
    }

    float average = (float)total / (float)count;
    printf("Average: %.2f", average);





    return 0;
}