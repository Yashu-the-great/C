#include <stdio.h>
#include <stdlib.h>
#include "showAccDetails.h"

void showAccDetails(char *name, char *password)
{
	FILE *acc = fopen(name,"r");
	char accDetails[100];
	while(fscanf(acc,"%100[^\n]\n",accDetails) == 1)
	{
		fscanf(acc,"%100[^\n]\n",accDetails);
		printf("%s\n",accDetails);
	}

}
