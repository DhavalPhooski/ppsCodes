//Write a program to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>

int main(){
    char Pali[100];
    int result = 0; //Here let 0 indicates true
    
    //input for string
    gets(Pali);

    int startIndex=0,  lastIndex=strlen(Pali)-1;  //declaration of staring index and last index
    while(startIndex<=lastIndex){
        if(Pali[startIndex] != Pali[lastIndex]){
            result = 1; // here 1 indicates false
        }

        startIndex++;
        lastIndex--;
    }

    if(result == 1){
        printf("It is not Palindrome!");
    }else{
        printf("It is Palindrome!");
    }
    return 0;
}