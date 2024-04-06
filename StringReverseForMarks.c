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
    
        i++;
        j--;
    }
    /*--------------------------------------------------------------------------------------------
We can use for loop also :
for(i=0, j=strlen(string)-1;    i<j;   i++, j--){
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
}
    ----------------------------------------------------------------------------------------------
  */  
    printf("\nAftering Reversing : %s",string);
    return 0;
}
