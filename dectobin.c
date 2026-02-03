#include <stdio.h>
#include <math.h>

void readIn(int *num);
void calculate(int *num, int *result);
int main(){
    int num, result;
    readIn(&num);
    calculate(&num, &result);

    printf("The equivalent binary number: %d", result);
    return 0;
}

void readIn(int *num){
    printf("Enter a decimal number: \n");
    scanf("%d", num);
}

void calculate(int *num, int *result){
    int remainder = 1, value = 0, count = 0;

    while (*num > 0){
        value = *num%2;
        remainder = remainder * pow(10,count) + value;
        *num = *num / 2;
        count ++;
    }
    *result = remainder;
}