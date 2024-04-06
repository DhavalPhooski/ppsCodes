#include<stdio.h>
#include<string.h>
int main(){
    
    char string[100];
    gets(string); //input for string
    int temp,i=0;//starting index
    int j=strlen(string)-1;//last index

    printf("Before Reversing : %s",string);

    //logic : swapping first with last onces
    while(i<j){
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        printf("%c %c\n",string[i],string[j]);
        i++;
        j--;
    }

    printf("\nAftering Reversing : %s",string);
    return 0;
}