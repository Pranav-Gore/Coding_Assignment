#include<stdio.h>
int main(){

    char str[50] = "Count Numbers of words in string";
    int count = 0 , i = 0;

   while (str[i] != '\0')
   {
    if (str[i] == ' ')
    {
        count++;
    }
    i++;
   }
    printf("\n No of Words in String %d\n",count + 1);
    return 0;
}