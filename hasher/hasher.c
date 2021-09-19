#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char sentence[1000];
	puts("\033[0;31mWelcome to Hasher");
	printf("\033[0;32mPlease enter your sentence:\033[0;34m ");
	scanf("%[^\n]", sentence);
	short limit = 5;
	puts("\n");
	printf("\033[0;32mPlease enter your sentence hashing limit:\033[0;34m ");
	scanf("%hi",&limit);
	if(limit < 1 || limit > 5)
	{
		puts("\033[0;31mLimit not valid!!\nPlease enter between 1 to 10 next time");
		exit(0);
	}
	for(short i = 0;i<strlen(sentence);i++)
	{
		sentence[i] = sentence[i] + limit;
	}
	puts("\033[0;35mprocessing your sentence......\n\n");
	printf("\033[0;32mYour hashed sentence:\033[0;34m %s\n", sentence);
	return 0;	
}
