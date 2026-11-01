#include <stdio.h>
int main(){
printf("Welcome to the helpline! How can we assist you today?\n");
printf("1. Grading System\n");
printf("2. Student Eligibility for Examinations\n");
printf("3. Society Registration\n");
printf("4. Mentor contact and support\n");


int choice;
printf("Please enter your choice (1-4): ");
    scanf("%d", &choice);
switch (choice){
    case 1:
        printf("Grading system of the college is based on the marks you obtain from the tests conducted by the department.\n");
        printf("Please enter marks between 1 to 100 to get your Grade on the display \n");
        int marks;
        scanf("%d", &marks);
        printf("Your grade is --> \n");
            if (marks >=90 && marks <=100){
                printf("A+");
            }else if(marks>=80 && marks<=90){
                printf("A ");
            }else if(marks>=70 && marks<=80){
                printf("B");
            }else if(marks>=60 && marks<=70){
                printf("C");
            }else if(marks>=50 && marks<=60){
                printf("D");
            }else if(marks>=40 && marks<=50){
                printf("F");
            }else{ printf("INVALID INPUT \n");
             }
            
            break;

    case 2:
        printf("To be eligible for examinations, students must have a minimum attendance of 75%% and must have cleared all previous semester exams.\n");
        
        printf("Please enter your attendance percentage: ");
        int att;
        scanf ("%d", &att);
        if (att >75){
            printf("ELIGIBLE FOR THE EXAMS! BEST OF LUCK! \n");
        }else if(att > 100){
            printf("INVALID INPUT \n");
        }else{
            printf("NOT ELIGIBLE FOR THE EXAMS! \n");   
        }       
        break;
    case 3:
        printf("To register a society, students must submit a proposal to the college administration and obtain approval.\n");
        printf("Please enter the following details to sign up for the student activity society: \n");
        char name[50];
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Thank you %s! for your intrest, we will surely get back to you, till then ROCK ON! \n", name);
        break;

    case 4:
        printf("For mentor contact and support, please reach out your respective department reception \n");
        printf ("Still got questions?, please write your query down the line:\n");
        char query[100];
        scanf("%s", query);
        printf("Noted! We will get back to you as soon as possible. \n");
        break;
    }

    return 0;
}

