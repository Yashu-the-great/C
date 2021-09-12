#include <stdio.h>
#include <stdlib.h>
#include "login.h"

int main()
{	
	char name[100], password[100];
	printf("Username: ");
	scanf("%s", name);
	printf("Password: ");
	scanf("%s", password);
	login(name, password);
	return 0;
}
