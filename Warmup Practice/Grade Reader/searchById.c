/*===================project explanation:==========================
This project was to be pasted above and below the ParallelArrays file. It has already been moved, but I created
it here for debugging purposes.

Correction for this file are in comments.

*/

#include <stdio.h>

void find_student(char names[][50], int ids[], int scores[], int count, int search_id){
    int tempCount = 0; //uneccessary because c understands i within the internal 
    for (int i = 0; i < count; i++){
        fscanf(file, "%s %d %d", names[i], ids[i], scores[i]); //not required becuase this is reading the file and storing the variables
        if (ids[i] == search_id){
            printf("%s %d %d\n", names[i], ids[i], scores[i]);
            break; //this can just be return; but the return doesnt require a number since it is a void function and cant output anything
        }
        else if (i==count && ids[i] != search_id) //this whole thing is not needed becuase with the return placed above, it will automcatically excit the loop when the answer is found
                {
                    printf("DEBUG: Student not found\n");
                    break;
            }//whole thing is not needed, replace with a print outside of the above loop and have it say answer not found
            else 
                printf("DEBUG: UNKNOWN ERROR IN find_student\n");
                break;
    }
}
//place in the main fucnction of ParallelArrays
int main(){
    printf("\n ===================== |Searching for Student| =====================");
    find_student(name, id, scores, count, 12346);  // Should find Bob
    find_student(name, id, scores, count, 99999);  // Should print "not found"



    return 0;
}