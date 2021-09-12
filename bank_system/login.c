#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "login.h"

void login(char *name, char *password)
{
	if(fopen(name, "r") == NULL)
	{
		printf("No person named %s found.\nName: %s\nNew Password: %s\n", name,name,password);
		fopen(name, "w");
		fprintf(fopen(name,"w"), "%s", password);
		exit(0);
	}
	FILE *loginFile = fopen(name, "r");
	char npassword[100];
	fscanf(loginFile, "%s", npassword);
	
	if(strcmp(password,npassword) == 0)
	{
		printf("login Successful!\n");
	}
	else
	{ 
		printf("Error: Wrong Password\nExiting the program!!!\n");
		exit(0);
	}
}

