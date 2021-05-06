#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; //generate random numbers
    do{
        printf("Guess the number between 1 to 100 \n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Guess the lower number please \n");
        }
        else if(guess<number){
            printf("Guess the higher number please \n");
        }
        else{
            printf("Youe guessed in %d attempts \n", nguesses);
        }
        nguesses++;
    }while(guess!=number);
    

return 0;
}
