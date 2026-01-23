#include <stdio.h>
#include <string.h>

int main(){
    int arr[100];
    int count = 0; int lines = 0; int sum = 0; double average = 0.0;

    printf("Enter the number of lines: ");
    scanf("%d", &lines);

    for (int i =0; i < lines; i++){
        count = 0;
        sum = 0;
        printf("Enter the numbers (-1 to end): ");
        while (count <100 && scanf("%d", &arr[count]) == 1 && arr[count] != -1){
            count++;
        }
        
        for (int j = 0; j < count; j++){
            sum += arr[j];
        }
        average = (double) sum/count;
        printf("Average = %.2lf\n", average);
    }
    return 0;


}