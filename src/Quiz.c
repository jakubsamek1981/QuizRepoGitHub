/*
 ============================================================================
 Name        : Quiz.c
 Author      : Jakub SAMEK
 Version     : 0.1
 Copyright   : Your copyright notice
 Description : Jakubs quizzes in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <conio.h>

int question_count = 0;
int question_number = 0;

int main()
{
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  char ch;

  //infinite loop
  while(1)
  {
	printf("1 Select quiz type\n");
	printf("2 Select quiz categories\n");
	printf("3 Run quiz\n");
	printf("4 Exit\n");
	printf("Enter your choice: ");
	//read a single character

    scanf(" %c", &ch);
	if(ch==0x0A)
    {
      printf("ENTER KEY is pressed. Exiting...\n");
      break;
    }
	else if(ch == '1')
    {
      do {
	    printf("Select test type:\n");
	    printf("1.1 Top 10 wrong questions\n");
	    printf("1.2 Top 10 least used\n");
	    printf("1.3 Clear selection\n");
	    printf("1.4 Return menu\n");
	    scanf(" %c", &ch);
	    printf("%c \n", ch);
		int count = 40;  // Line counter (result)
		int random_num = generate_random_num(count);
		printf("Random number is: %d \n ", random_num);
		//break;
		if (ch == '4')
		{
		  printf("Back to menu...\n");
		  break;
		}
      } while (ch != 4);
	}
	else if(ch=='4')
	{
	  printf("Exiting...\n");
	  break;
	}
	else
	{
		printf("%c is pressed.\n",ch);
	}
	//read dummy character to clear
	//input buffer, which inserts after character input
  }


/*************
	quiz_type = select_type(); // top_10_wrong; top_10_least_used

	quiz_category =  select_category(); // history, sport, ....

	do_quiz (int quiz_type, quiz_category);

*/



  return 0;
}
