/*
Concatenate without built in function.
*/
#include<stdio.h>
#include<string.h>
int main(){
    //initialization
    char MainStr[100];
    char AddStr[100];
    //scanning each strings
    printf("Enter your Main string : ");
    scanf("%s",MainStr);

    printf("Enter the string you want to add in it : ");
    scanf("%s",AddStr);

    int i=0,lastIndex = strlen(MainStr); //lastIndex of MainStr
    
    //adding our string
    while(AddStr[i] !='\0'){ //as null is at the end
        MainStr[lastIndex] = AddStr[i];
        i++;
        lastIndex++;
    }

    printf("Your new string after concatenation is : %s",MainStr);
    return 0;

}