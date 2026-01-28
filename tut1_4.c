#include <stdio.h>

int main(){
    double sol = 0.0, x = 0;
    printf("Enter the value: ");
    scanf("%lf", &x);
    double deno = 1.0, nume = 1.0;

    for (int i = 0; i<10; i++){
        sol += nume/deno;
        nume *= x;
        deno *= i +1;
        
    }
    printf("The result is %.2lf", sol);
    return 0;
}

