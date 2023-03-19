#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
    // Random number making
    int number,guess,nguesses=1;
    srand(time(0));
    number= rand()%100+1; 
    // generate number between 1 to 100 
    // printf("The number is %d", number);
    // keep running the loop untill guess
    do {
        printf("Guess a number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number)
        {
            printf("Higher number plsease\n");
        }
        else{
            printf("You guess it on %d attempte\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}