// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    int clients;
    int j;



    FILE* ptr;
    char ch;
 
    // Opening file in reading mode
    ptr = fopen("a_an_example.in.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    int i;
    char* s=malloc(sizeof(char)*81);

    int num;
    char* ing[5];
    int k;
    int counter=0;
    for ( k=0; k<5; k++)
    {
        ing[k]=malloc(sizeof(char)*15);
    }

    while (fgets(s, 81, ptr))
    {
        
        i=0;
        for (char *p = strtok(s," "); p != NULL; p = strtok(NULL, " "))
        {
            if(counter==0)
            {
            clients=atoi(p);
            counter++;
            }
            //if i mod 2 if i mod 3 to change like and dislike
            switch(i)
            {
                default:{num=atoi(p); break;}
                case 1:{strcpy(p, ing[0]); break;}
                case 2:{strcpy(p, ing[1]); break;}
                case 3:{strcpy(p, ing[2]); break;}
                case 4:{strcpy(p, ing[3]); break;}
                case 5:{strcpy(p, ing[4]); break;}
            }
            i++;
        }
    }


    printf("num: %d ing1:%s ing2:%s", num, ing[0], ing[1]);
    // Closing the file
    fclose(ptr);
    return 0;
}