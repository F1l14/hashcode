#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//ARRAY POINTERS NEED TO BE NULL
typedef struct people{
    int numlike;
    int numdislike;
    char* like[5];
    char* dislike[5];
}CLIENTS;

void show(int numclients, CLIENTS board[]);
int file_insert(CLIENTS board[]);


int main()
{
    int clients, i, j;
    
    CLIENTS table[clients];
    
    clients = file_insert(table);
    printf("%d", clients);
    
    // // readboard->like the num of clients
    // do{
    //     printf("Enter num of clients: ");
    //     scanf("%d", &clients);
    // }while((clients<1)&&(clients>pow(10,5)));

    // printf("format: num_board->liker_like board->liker1 board->liker2\n        num_board->liker_like board->liker1 board->liker2\n");



    //memory allocation
    for ( i = 0; i < clients; i++)
    {
        for ( j = 0; j < 4; j++)
        {
          table[i].like[j]=malloc(sizeof(char)*15);
          table[i].dislike[j]=malloc(sizeof(char)*15);
        }
    }


    //get preferences
    // for ( i = 0; i < clients; i++)
    // {
    //     printf("Client %d: ", i);
    //         scanf("%d %s %s %s %s %s", &table[i].numlike, table[i].like[0], table[i].like[1], table[i].like[2], table[i].like[3], table[i].like[4]);
    //         scanf("%d %s %s %s %s %s", &table[i].numdislike, table[i].dislike[0], table[i].dislike[1], table[i].dislike[2], table[i].dislike[3], table[i].dislike[4]);
    // }
    printf("Finished\n");
    show(clients, table);

return 0;
}

void show(int numclients, CLIENTS board[])
{
    int i;
    for ( i = 0; i < numclients; i++)
    {
        printf("like: %s %s %s %s %s\n", board[i].like[0], board[i].like[1], board[i].like[2], board[i].like[3], board[i].like[4]);
        printf("dislike: %s %s %s %s %s\n",  board[i].dislike[0], board[i].dislike[1], board[i].dislike[2], board[i].dislike[3], board[i].dislike[4]);    
    }
}

int file_insert(CLIENTS board[])
{
    FILE* ptr;
 
    // Openboard->like file in readboard->like mode
    ptr = fopen("a_an_example.in.txt", "r");
    if (NULL == ptr) {
        printf("file can't be opened \n");
        exit(1);
    }
 
    int i, j;
    char* s=malloc(sizeof(char)*81);
    int numclients;
    int num;
    int counter=0;
    for ( i=0; i<5; i++)
    {
        board->like[i]=malloc(sizeof(char)*15);
    }
    j=0;
    while (fgets(s, 81, ptr))
    {
        
        i=0;
        for (char *p = strtok(s," "); p != EOF; p = strtok(NULL, " "))
        {
            if(counter==0)
            {
                numclients=atoi(p);
                counter++;
            }
            //if i mod 2 if i mod 3 to change like and dislike
            if (j%2 == 0)
            {
                switch(i)
                {
                    default:{num=atoi(p); break;}
                    case 1:{strcpy(p, board->like[0]); break;}
                    case 2:{strcpy(p, board->like[1]); break;}
                    case 3:{strcpy(p, board->like[2]); break;}
                    case 4:{strcpy(p, board->like[3]); break;}
                    case 5:{strcpy(p, board->like[4]); break;}
                }
            }
            else
            {
                switch(i)
                {
                    default:{num=atoi(p); break;}
                    case 1:{strcpy(p, board->dislike[0]); break;}
                    case 2:{strcpy(p, board->dislike[1]); break;}
                    case 3:{strcpy(p, board->dislike[2]); break;}
                    case 4:{strcpy(p, board->dislike[3]); break;}
                    case 5:{strcpy(p, board->dislike[4]); break;}
                }
            }
            i++;
            j++;
        }
    }
    return numclients;
}