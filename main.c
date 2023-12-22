#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define red "\033[31m"
#define green "\033[32m"
#define yellow "\033[33m"
#define blue "\033[34m"
#define reset "\033[0m"

int main() {
	
    int play, score=0;

	printf(blue"\t  WELCOME TO MY QUIZ GAME ( Canadian System )\n"reset);
	
    do {
	
    	printf(">> Press 1 to play  \n>> Press 0 to exit  \n  --> ");
		scanf("%d", &play);
	
    	if ( play==1 ) {
	
    		char name[50];
			printf("Enter your name: ");
            fgetc(stdin);
			fgets(name, 50, stdin);
    		name[strlen(name) - 1] = 0;
	
    		printf("Nice to meet you %s, I am Youness SBAI. Let's Play.\n", name);
			
            printf(yellow"CONCEPT OF THE GAME: There are 5 questions, each question has 4 options, one option is correct. If you don't know the answer put 0.\n"reset);
			
            int answer1, answer2, answer3, answer4, answer5;
			
            do {
			
            	printf("Q1--> What city is known as 'The Eternal City' ?\n");
            	printf("\t 1) Rome      3) London \n\t 2) Tokyo     4) Madrid\n");

		    	printf("Choose the correct option (1, 2, 3 or 4): ");
				scanf("%d", &answer1);

				if (answer1==1) {

					printf(green"  -> Correct"reset);
					score++;

				}

				if (answer1==2 || answer1==3 || answer1==4) {

					printf(red"  -> Incorrect"reset);
					score--;


				}
			} while (answer1!=0 && answer1!=1 && answer1!=2 && answer1!=3 && answer1!=4);

			do {

				printf("\nQ2--> In what country was Elon Musk born?\n");
				printf("\t 1) United States      3) South Africa \n\t 2) England            4) Canada\n");

				printf("Choose the correct option (1, 2, 3 or 4): ");
				scanf("%d", &answer2);

				if (answer2==3) {

					printf(green"  -> Correct"reset);
					score++;

				}

				if (answer2==1 || answer2==2 || answer2==4) {

					printf(red"  -> Incorrect"reset);
					score--;

				}
			} while (answer2!=0 && answer2!=1 && answer2!=2 && answer2!=3 && answer2!=4);

			do {

				printf("\nQ3--> Who is the founder of Microsoft?\n");
				printf("\t 1) Steve Jobs      3) Mark Zuckerberg \n\t 2) Larry Page      4) Bill Gates\n");

				printf("Choose the correct option (1, 2, 3 or 4): ");
				scanf("%d", &answer3);

				if (answer3==4) {

					printf(green"  -> Correct"reset);
					score++;

				}

				if (answer3==1 || answer3==2 || answer3==3) {

					printf(red"  -> Incorrect"reset);
					score--;

				}
			} while (answer3!=0 && answer3!=1 && answer3!=2 && answer3!=3 && answer3!=4);

			do {

				printf("\nQ4--> Who is considered as the Father of the World Wide Web?\n");
				printf("\t 1) Steve Jobs          3) Mark Zuckerberg \n\t 2) Tim Berners-Lee     4) Bill Gates\n");

				printf("Choose the correct option (1, 2, 3 or 4): ");
				scanf("%d", &answer4);

				if (answer4==2) {

					printf(green"  -> Correct"reset);
					score++;

				}

				if (answer4==1 || answer4==3 || answer4==4) {

					printf(red"  -> Incorrect"reset);
					score--;

				}
			} while (answer4!=0 && answer4!=1 && answer4!=2 && answer4!=3 && answer4!=4);

			do {

				printf("\nQ5--> Who won the World Cup in 1934?\n");
				printf("\t 1) France      3) Germany \n\t 2) Italy       4) Brasil\n");

				printf("Choose the correct option (1, 2, 3 or 4): ");
				scanf("%d", &answer5);

				if (answer5==2) {

					printf(green"  -> Correct"reset);
					score++;

				}

				if (answer5==1 || answer5==3 || answer5==4) {

					printf(red"  -> Incorrect"reset);
					score--;

				}
			} while (answer5!=0 && answer5!=1 && answer5!=2 && answer5!=3 && answer5!=4);
		}

		if ( play==0 ) {

			printf("GoodBye. Exiting....");

		}
	} while ( play!=0 && play!=1 );

	printf("\n\nYour Final score is: %d out of 5", score);

	return 0;
}