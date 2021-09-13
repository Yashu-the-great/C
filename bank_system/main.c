#include <stdio.h>
#include <stdlib.h>
#include "login.h"
#include "showAccDetails.h"

int main()
{	
	char name[100], password[100];
	printf("Username: ");
	scanf("%s", name);
	printf("Password: ");
	scanf("%s", password);
	login(name, password);
	puts("1 ==> Account Details");
	puts("2 ==> Add Money");
	puts("3 ==> Delete Account");
	printf("\nEnter Your Choice:\t");
	int choice;
	scanf("%i",&choice);
	if(choice == 1)
	{
		showAccDetails(name,password);
	}
	return 0;
}
