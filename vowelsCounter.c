/*Write a program to accept a string and count
 the numbers of vowels present in a string.
*/
#include<stdio.h>
#include<string.h>
    
int main(){
    //initialization
    char a[100];
    char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
    gets(a);
    int i,j,count=0, length = strlen(a);
    //logic
    for(i=0;i<length;i++){
        for(j = 0;j<strlen(vowels);j++){
            if(a[i] == vowels[j]){
                count++;
                break;
            }
        }
    }
    printf("So number of vowels in given string is %d",count);
}

