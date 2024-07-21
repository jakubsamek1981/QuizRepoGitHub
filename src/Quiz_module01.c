#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_FILE_NAME 200

char c2;  // To store a character read from file
FILE *fp;
int count2 = 0;  // Line counter (result)
char filename[MAX_FILE_NAME];

int generate_random_num(int count)
{
	int min_num = 0;
	int max_num = count;

	int i;
	time_t t;
	int rand(void);
	int random_number;

	/*for (i = 0; i < count; i++) {
	  random_number = (rand() % (max_num + 1 - min_num)) + min_num;
	  //printf("%d ", random_number);
	}*/

	/* Intializes random number generator */
	srand((unsigned) time(0));

	random_number = (rand() % (max_num + 1 - min_num)) + min_num;

	//int random_number = (rand() % (max_num + 1 - min_num)) + min_num;
	//int num = (rand() % (upper - lower + 1)) + lower;

	return random_number;
}

int count_file_rows2(FILE *fp)
{
	//rewind(fp);
	// Extract characters from file and store in character c
	for (c2 = getc(fp); c2 != EOF; c2 = getc(fp))
	{
	  if (c2 == '\n') // Increment count if this character is newline
	  {
	    count2 = count2 + 1;
	  }
	}
    printf("The file 2 %s has %d lines\n ", filename, count2);

	return 0;
}

int read_file ()
{

  FILE *fp;
  int count = 0;  // Line counter (result)
  char filename[MAX_FILE_NAME];
  char c;  // To store a character read from file

		    // Get file name from user. The file should be
		    // either in current folder or complete path should be provided
		    //printf("Enter file name: ");
		    //scanf("%s", filename);

		    char filename01[] = "ListID1_zakladni.csv";
		    char filename02[] = "ListID2_historie_staroveku.csv";

		    // Open the file
		    fp = fopen(filename01, "r");

		    // Check if file exists
		    if (fp == NULL)
		    {
		        printf("Could not open file %s", filename);
		        return 0;
		    }

		    // Extract characters from file and store in character c
		    for (c = getc(fp); c != EOF; c = getc(fp))
		        if (c == '\n') // Increment count if this character is newline
		            count = count + 1;

		    // Close the file

		    printf("The file %s has %d lines\n ", filename, count);

		    int random_num = generate_random_num(count);
		    printf("Random number is: %d \n ", random_num);

		    count_file_rows2(fp);
		    fclose(fp);

}

int count_questions () {

}


