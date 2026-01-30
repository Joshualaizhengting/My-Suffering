#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);
int main()
{
 int num, digit, result=-1;

 printf("Enter the number: \n");
 scanf("%d", &num);
 printf("Enter k position: \n");
 scanf("%d", &digit);
 printf("digitValue1(): %d\n", digitValue1(num, digit));
 digitValue2(num, digit, &result);
 printf("digitValue2(): %d\n", result);
 return 0;
}


int digitValue1(int num, int k){
    int count = 1;
    int value = 0; 
 //why start count at 1?
 //because we are dividing by 10 in a loop, the num will get divided one more time before the loop exits therefore we need to make sure that
 //the value we want is not removed lol

    while (count < k){
        num /= 10;
        count ++;
        if (num < 0){
            return 0;
        }
    }
    value = num % 10;
    return value;
}

void digitValue2(int num, int k, int *result){
    int count = 1;
    int value = 0;

    *result = value;
    while (count < k){
        num /= 10;
        count ++;
    }
    value = num % 10;
    *result = value;
}

