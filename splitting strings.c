#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

int i=0;
char* s=malloc(sizeof(char)*81);

fgets(s, 81, stdin);
int num;
char* ing1=malloc(sizeof(char)*15);
char* ing2=malloc(sizeof(char)*15);
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

printf("num is %d", num);
   return(0);
}