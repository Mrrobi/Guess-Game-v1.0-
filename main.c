#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
void clrscr()
{
    system("@cls||clear");
}
int main(){
	int p1,p2;

	int score=0;
	int attempt=0;

	while(1){
            attempt++;
            clrscr();
            system("COLOR F0");
            printf("\t\t\t\t\tGuess Game. Version 1.0 (C)Robiuddin Robi\n\n\n\n\n");
		    srand(time(0));
			p1=( rand()%3 )+1;
                    printf("Attemp %d\n",attempt);
                    printf("Guess The Number(0-3):_");
                    scanf("%d",&p2);
                    if(p2==p1)
                    {
                        system("COLOR f2");
                        printf("You win!\n");

                        score+=5;
                        printf("Score: %d\n",score);
                        printf("Press any key to try again\nPress 2 to exit\n");
                        int choice;
                                scanf("%d",&choice);
                                if(choice==1){
                                    continue;
                                }
                                else if(choice==2){
                                    break;
                                }
                    }
                    else{
                        system("COLOR 0C");
                        printf("Not matched 2 chances left!\n");

                        printf("Guess The Number(0-3):_");
                        scanf("%d",&p2);
                        if(p2==p1){
                                system("COLOR f2");
                            printf("You win!\n");

                            score+=5;
                            printf("Score: %d\n",score);
                            printf("Press any key to try again\nPress 2 to exit\n");
                            int choice;
                            scanf("%d",&choice);
                            if(choice==1){
                                continue;
                            }
                            else if(choice==2){
                                break;
                            }
                            getch();
                        }
                        else{
                                system("COLOR 0C");

                            printf("Not matched 1 chances left!\n");

                            printf("Guess The Number(0-3):_");
                            scanf("%d",&p2);
                            if(p2==p1){
                                    system("COLOR f2");
                                printf("You win!\n");

                                score+=5;
                                printf("Score: %d\n",score);
                                printf("Press any key to try again\nPress 2 to exit\n");
                                int choice;
                                scanf("%d",&choice);
                                if(choice==1){
                                    continue;
                                }
                                else if(choice==2){
                                    break;
                                }
                                getch();
                            }
                            else{
                                    system("COLOR 0C");

                                printf("Not matched 0 chances left!\n");
                                printf("Computer win!\n");

                            }

                                printf("Score: %d\n",score);
                                printf("Press any key to try again\nPress 2 to exit\n");
                                int choice;
                                scanf("%d",&choice);
                                if(choice==1){
                                    continue;
                                }
                                else if(choice==2){
                                    break;
                                }

                            }
                        }
                }
                clrscr();
                system("COLOR F0");
                printf("\t\t\t\t\tGuess Game. Version 1.0 (C)Robiuddin Robi\n\n\n\n\n");
                printf("Total Attempt: %d\n",attempt);
                printf("Total Score: %d\n",score);
                printf("Thank You For Playing!!!\n");

getch();
}
