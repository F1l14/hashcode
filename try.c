#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char* num;
    char ing[50];
    char ing2[50];
    int i=0;



   char* str=malloc(sizeof(char)*50);
   scanf("%s", str);
   const char s[2] = " ";
   char token;

   /* get the first token */
   token = strtok(str, s);
   switch (i)
   {
    default:
    {
        num=token;
        break;
    }
    case 1:
    {
        strcpy(token, ing);
        break;
    }
    case 2:
    {
        strcpy(token, ing2);
        break;
    }
   }
   /* walk through other tokens */
   while( token != NULL ) {
      //printf( " %s\n", token );

      token = strtok(NULL, s);
      i++;
   }

   printf("num is %d\n", num);
   return(0);
}