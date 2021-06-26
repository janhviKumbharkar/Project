#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{   
	int a;
    printf("which game you want to play \n 1) number guessing \n 2) positive Negative \n 3) stone paper scissor \n  ----------------------> ");
    scanf("%d",&a);
    if(a==1){
		int number,guess,noguesses=1;
		srand(time(0));
		number=rand()%100+1; 
 	    //generates a random number between 1-100
		//printf("the number is %d\n",number);
		//keep running the loop until no is guessed.
			do{
			printf("Guess the number between 1 to 100\n");
			scanf("%d",&guess);
			if(guess>number){
				printf("Lower number please!\n");
			}
			else if(guess<number){
				printf("Higher number please!\n");
			}
			else{
				printf("you guessed it in %d attempts\n",noguesses);
			}
			noguesses++;
		}while(guess!=number);
    }
    else if (a==2) {
        int number, guess;
		char c[10];
		srand(time(0));
		number = rand() % 1000 + 1;
		printf("Rules : Computer will select a number and you have to tell its EVEN or ODD\n");
		printf("you loose automatically if you don't write eve or odd\n");
		printf("enter the statement eve for even and odd for odd\n");
		scanf("%s", &c);
		//printf("%s", c);
		if ((number % 2 == 0 && strcmp(c,"eve")==0) || (number % 2 == 1 && strcmp(c,"odd")==0))
		{
		    printf("you gussed it right\n");
		    printf("The random number was %d",number);
		        }
		else {
					printf("you loose \n");
		            printf("The random number was %d",number);
		    }
    }
	else if (a == 3){
		char player1[10];
		char  player2[10] = "computer";
    	int in1,in2;
		srand(time(0));
		in2	 = rand()%3+1;
 	    printf("HEY, WELCOME TO ROCK, PAPER & SCISSORS GAME\nWhat is player1's name?\n ");
 	    scanf("%s",&player1);
 	    printf("%s and %s please follow the rules for the game\nPress 1 for stone\nPress 2 for paper\nPress 3 for scissors\n\n",player1,player2);
 	    printf("Now let us start the game\n");
	    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",player1);
	    scanf("%d",&in1);
	    if ((in1==1 && in2==1) || (in1==2 && in2==2) || (in1==3 && in2==3)){
	    printf("Neither %s nor %s won, it is a draw",player1,player2);
		//printf("%d",in2);
		}
	    else if ((in1==1 && in2==3) || (in1==3 && in2==2) || (in1==1 && in2==3)|| (in1==2 && in2==1) || (in1==3 && in2==2) || (in1==1 && in2==3))
	    {printf("Congrats %s! You won!!!!",player1);
				//printf("%d",in2);
				}
	    else if ((in1==1 && in2==2) || (in1==3 && in2==1) || (in1==1 && in2==2)|| (in1==2 && in2==3))
	    {printf("Congrats %s! You won!!!!", player2);
			//printf("%d",in2);
		}
		}
	else {
		printf("there are only three game available");
	}
	return 0;
}