#include <stdio.h>
#include <string.h>
void PigLatin(char *eword, char *PLword);
int main(){
    char eword[80];
    char PLword[80];

    printf("Enter your English word: \n");
    scanf("%s", eword);

    PigLatin(eword, PLword);

    printf("PigLatin(): %s\n", PLword);
    return 0;
}

void PigLatin(char *eword, char *PLword){
 /* Write your code here */
    char vowels[40] = "aeiouyAEIOUY";
    char ay[10] = "ay";
    
    if (strchr(vowels, eword[0])){
        strcpy(PLword, eword);
        strcat(PLword, ay);

    }else{
        int len = strlen(eword);
        for (int i =0; i<len -1; i++){
            PLword[i] = eword[i+1];
        }
        PLword[len-1] = eword[0];
        strcat(PLword, ay);
    }
}