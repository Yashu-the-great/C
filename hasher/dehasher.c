#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	char sentence[1000];
	printf("\033[0;31mWelcome to the Dehasher \033[0;32m \n\n");
	printf("Please enter your hashed sentence: \033[0;34m");
	scanf("%[^\n]", sentence);
	puts("\n");
	printf("\033[0;32mPlease enter your hashed limit: \033[0;34m");
	short limit = 0;
	scanf("%hi", &limit);
	if(limit >10 || limit < 1)
	{
		puts("\033[0;31m Invalid limit !!");
		exit(0);
	}
	printf("\033[0;35mProcessing your sentence.....\n\n");
	for(short i = 0;i<strlen(sentence);i++)
	{	
		sentence[i] = sentence[i] - limit;
	}
	printf("\033[0;32mYour de-hased sentence is :\033[0;34m %s\n", sentence);
	return 0;
}
