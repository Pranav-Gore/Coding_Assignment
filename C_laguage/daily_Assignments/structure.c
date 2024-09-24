// Q12. Have a structure program in c which will store data of 5 students id , name ,
//  address, city , class , percentage. And function to print it

#include<stdio.h>

struct student
{
    int id;
    char name[20];
    char address[100];
    char city[20];
    char class[20];
    float percentage;

};

void printStudentsDetails(struct student s){
    printf("Student Id: %d\n",s.id);

    printf("Student Id: %s\n",s.name);

    printf("Student Id: %s\n",s.address);

    printf("Student Id: %s\n",s.city);

    printf("Student Id: %s\n",s.class);

    printf("Student Id: %.2f\n \n",s.percentage);
}

int main(){

    struct student s[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter a Student Id: \n");
        scanf("%d",&s[i].id);

        printf("Enter a Student Name: \n");
        scanf("%s",s[i].name);

        printf("Enter a Student Address: \n");
        scanf("%s",s[i].address);

        printf("Enter a Student City: \n");
        scanf("%s",s[i].city);

        printf("Enter a Student Class: \n");
        scanf("%s",s[i].class);

        printf("Enter a Student Percentage: \n");
        scanf("%f",&s[i].percentage);
    }
    
    printf("<<<<=========Students Record========>>>>\n \n");

    for (int i = 0; i < 5; i++)
    {
        printStudentsDetails(s[i]);
    }
    

    return 0;
}