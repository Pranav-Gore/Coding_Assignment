#include<stdio.h>
int main(){

    char str[100];
    int i = 0;

    printf("Enter A string: ");
    scanf("%99[^\n]",str);// Read input including spaces up to a newline

    while(str[i] != '\0'){
        printf("%c\n",str[i]);
        i++;
    }
    return 0;
}