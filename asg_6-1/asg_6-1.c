/*
Create a data base for 5 students in a school using array of structs,
 each struct contain 4 members :
 Student name
 Student age
 Student degree
 Student section

 Fill the data inside main function and print it

 +POINT Fill all the data inside the main function and Pass the address of the array to a
 void function called print.
 Then print all the data inside print function
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];
    int age;
    int degree;
    int section;
}student;

void printData(student*s);

student studs[5];

int main(){

//option 1
printf("Enter the data for 5 students:\n");
for(int i =0;i<5;i++){
    printf("\nStudent %d:\n", i + 1);

    printf("Enter name: ");
    scanf("%s", &studs[i].name);
    printf("Enter age:  ");
    scanf("%d", &studs[i].age);
    printf("Enter degree: ");
    scanf("%d", &studs[i].degree);  
    printf("Enter section: ");
    scanf("%d", &studs[i].section);
}

printf("\n-----------\n\n");
printData(studs);

return 0;
}

void printData(student*s){
    for(int i=0;i<5;i++){
        
    printf("Student %d\n\n",i+1);

    printf("Name: %s\n",(s+i)->name);
    printf("Age: %d\n",(s+i)->age);
    printf("Degree: %d\n",(s+i)->degree);
    printf("Section: %d\n\n",(s+i)->section);
    }
}


/*---------------------------------------other ways to write data---------------------------------------*/


/*
------------------------------------------------------------
//option 2

strcpy(studs[0].name,"Bibo");
studs[0].age = 20;
studs[0].degree = 100;
studs[0].section = 2;

strcpy(studs[1].name,"Zumi");
studs[1].age = 20;
studs[1].degree = 100;
studs[1].section = 2;

strcpy(studs[2].name,"Ali");
studs[2].age = 19;
studs[2].degree = 88;
studs[2].section = 1;

strcpy(studs[3].name,"Hamza");
studs[3].age = 21;
studs[3].degree = 85;
studs[3].section = 1;

strcpy(studs[4].name,"mony");
studs[4].age = 20;  
studs[4].degree = 97;
studs[4].section = 3;
------------------------------------------------------------
//option 3 

student studs[5] = {
    {"Habiba", 20, 95, 2},
    {"Hazem", 20, 100, 2},
    {"Ali", 19, 88, 1},
    {"Sara", 21, 91, 2},
    {"Mony", 20, 97, 3}
};*/