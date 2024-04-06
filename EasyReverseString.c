#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    gets(string);
    printf("%s",strrev(string));
}