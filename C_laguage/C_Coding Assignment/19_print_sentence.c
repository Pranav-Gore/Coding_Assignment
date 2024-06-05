// 19.Write a program which accept sentence from user and print that sentence.
// Input : My name is
// Output : My name is

#include<stdio.h>
int main(){
    char sentence[100];
    printf("Enter a sentence:\n");
    scanf("%99[^\n]", sentence); 

    printf("Your sentence is :%s\n",sentence);

    return 0;
}