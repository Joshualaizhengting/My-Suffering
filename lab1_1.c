#include <stdio.h>
//char grade(int);


int main(){
    int sentinal = 0;
    int marks;

    while (sentinal != -1){
        printf("Enter Student ID: ");
        scanf("%d", &sentinal);

        if (sentinal == -1){
            break;
        }

        printf("Enter the marks: ");
        scanf("%d", &marks);
        
        if (marks >= 75 && marks <= 100){
            printf("Grade = A\n");
        } else if (marks >= 65 && marks < 75){
            printf("Grade = B\n");
        } else if (marks >= 55 && marks < 65){
            printf("Grade = C\n");
        } else if (marks >= 45 && marks < 55){
            printf("Grade = D\n");
        } else if (marks < 45){
            printf("Grade = F\n");
        } else{
            printf("Marks out of range. Try again\n");
        }
    }
    return 0;
}




