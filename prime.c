//prime number
#include<stdio.h>
void main(){
    int prime = 0; //0 indicates it is prime
    int num;
    int i = 2;/*we will take this 'i' to divide our number 
    and we will check if its reminder give us 0 or not!  
*/
    //scanning number from user
    printf("Enter your number : ");
    scanf("%d",&num);

    while(i<num){
        if(num%2 == 0){
            prime = 1 ;// 1 indicates it is not a prime number
        }
        i++;
    }
    if(prime == 0){
        printf("Your Entered Number Is Prime!");
    }else{
        printf("Your Entered Number Is Not A Prime Number !");
    }
}