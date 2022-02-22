// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char ch;
 
    // Opening file in reading mode
    ptr = fopen("a_an_example.in.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
 
    // Printing what is written in file
    // character by character using loop.
    // do {
    //     ch = fgetc(ptr);
    //     printf("%c", ch);
 
    //     // Checking if character is not EOF.
    //     // If it is EOF stop eading.
    // } while (ch != EOF);
 


        int i=0;
        char* s=malloc(sizeof(char)*81);

        fgets(s, 81, stdin);
        int num;
        char* ing1=malloc(sizeof(char)*15);
        char* ing2=malloc(sizeof(char)*15);
        while (fgets(s, 81, ptr))
        {
            for (char *p = strtok(s," "); p != NULL; p = strtok(NULL, " "))
            {
                strdup(p);
                switch(i)
                {
                    default:{num=atoi(p); break;}
                    case 1:{strcpy(p, ing1); break;}
                    case 2:{strcpy(p, ing2); break;}
                }
                i++;
            }
        }

    // Closing the file
    fclose(ptr);
    return 0;
}