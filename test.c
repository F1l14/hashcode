#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//ARRAY POINTERS NEED TO BE NULL
typedef struct people{
    int numlike;
    int numdislike;
    char* like[5];
    char* dislike[5];
}CLIENTS;


void show(int numclients, CLIENTS board[])
{
    int i;
    for ( i = 0; i < numclients; i++)
    {
        printf("like: %d %s %s %s %s\n", board[i].like[0], board[i].like[1], board[i].like[2], board[i].like[3]);
        printf("dislike: %d %s %s %s %s\n",  board[i].dislike[0], board[i].dislike[1], board[i].dislike[2], board[i].dislike[3]);    
    }
}

int main()
{
  //open file
    char *filename = "a_an_example.in.txt";
    FILE *fp = fopen(filename, "r");
	//file open failed
    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
        return 1;
    }

  
  
    // reading line by line, max 256 bytes
    const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, fp))
        printf("%s", buffer);

    // close the file
    fclose(fp);

    int clients, i, j;
    // reading the num of clients
    do{
        printf("Enter num of clients: ");
        scanf("%d", &clients);
    }while((clients<1)&&(clients>pow(10,5)));

    CLIENTS table[clients];
    printf("format: num_ingr_like ingr1 ingr2\n        num_ingr_like ingr1 ingr2\n");



    //memory allocation
    //char temp[4][15];
    for ( i = 0; i < clients; i++)
    {
        for ( j = 0; j < 5; j++)
        {
          table[i].like[j]=malloc(sizeof(char)*15);
          table[i].dislike[j]=malloc(sizeof(char)*15);
        }
    }


    //get preferences
    for ( i = 0; i < clients; i++)
    {
        printf("Client %d: ", i);
            scanf("%d %s %s %s %s %s", &table[i].numlike, table[i].like[0], table[i].like[1], table[i].like[2], table[i].like[3]);
            scanf("%d %s %s %s %s", &table[i].numdislike, table[i].dislike[0], table[i].dislike[1], table[i].dislike[2], table[i].dislike[3]);
    }
    printf("Finished\n");
    show(clients, table);







// close the file
    fclose(fp);
return 0;
}