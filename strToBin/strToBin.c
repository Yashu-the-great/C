#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printBin(char *ch) {
    int i = *ch;
    int copy = i,dig=0;
    while(copy > 0) {
        dig = (dig * 10) + (copy%2);
        copy/=2;
    }
    printf("%i\t",dig);
}
int main() {
    // Vars
    char str[] = "";
    printf("Enter the String to convert it to Binary\n----> ");
    puts("\033[0;36m"); // Input in Cyan
    scanf("%[^\n]", str);
    puts("\033[0;33m");// Output in Yellow

    for(long i = 0;i<strlen(str);i+=1) {
        
        if(str[i] == ' ') {
            printf("[ s p a c e ]\t");
            continue;
        } else {
            printBin(&str[i]);        
        }
    }
    puts("\033[0;32m");// Back to Normal
    printf("\n\nConverted From ::: %s\n", str);
    return 0;
}
