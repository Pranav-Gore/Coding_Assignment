#include<stdio.h>
int main(){

    char str[] = "My Name is Pranav";
    int count = 0;
    int i = 0;

    while(str[i] !='\0'){
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
        
    }
    printf("Number of spaces%d\n",count);
    return 0;
}