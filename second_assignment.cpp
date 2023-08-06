//generate a random Alphanumeric String having Random Length between 3 to 10 character, each character in an alphanumeric string can be either from (0-9) or (A-F) with a beautiful msg "the randomly generated alphanumeric character is: 37BFA"
#include<stdio.h>
#include<stdlib.h>//this library is used for rand function
#include<stdbool.h>//this library is used for boolean function
#include<time.h>//this library is used for srand function to generate different alphanumeric character with updated time

#define MIN_LENGTH 3//here i defined min length of alphanumeric string
#define MAX_LENGTH 10//here i defined max length of alphanumeric string

#define MIN_ALPHA_ASCII 65//here i defined minumum alphabetic ascii value (A)
#define MAX_ALPHA_ASCII 70//here i defined maximum alphabetic ascii value (F)

#define MIN_NUM_ASCII 48//here i defined minumum numeric ascii value (0)
#define MAX_NUM_ASCII 57//here i defined maximum numeric ascii value (9)

int main()
{
 char str[11];//here i declared an array which will store characters in the form of string
 int i;
 bool toss;
 srand(time(NULL));//this function is used to print different alphanumeric character with updated time

 int length = rand()%((MAX_LENGTH - MIN_LENGTH)+1) + MIN_LENGTH;//this statement gives a random length of alphanumeric string between (3-10)

 printf("The randomly generated alphanumeric character is :");

 for(i=0;i<length;i++)//for loop is used to store and print random alphanumeric character in each index of an array
 {
   toss = rand()%2;//here rand function is used to generate a random condition in every run and here it will generate different conditon (0 or 1)

   if(toss == true)
   {
     str[i] = rand()%((MAX_ALPHA_ASCII - MIN_ALPHA_ASCII)+1) + MIN_ALPHA_ASCII;//this statement will store a random alphabetic character between (A-F)
   }
   else

    str[i] = rand()%((MAX_NUM_ASCII - MIN_NUM_ASCII)+1) + MIN_NUM_ASCII;//this statement will store a random numeric character between (0-9)
   
    printf("%c",str[i]);//this statement will print alphanumeric string of random length between (3-10) 
 }
}