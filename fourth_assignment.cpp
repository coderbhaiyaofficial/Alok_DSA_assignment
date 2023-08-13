//Generate a random Alphanumeric String having Random Length between (3-10)character,in this string each character can be either from(0-9)or(A-F)
//SO determine the highest base of that Alphanumeric string using the formula (Highest Base of "67B89D" = max('6','7','B','8','9','D') = max(6,7,11,8,9,13) = 13+1 = 14)
//this process iterate 50 times with the help of loop
//this program should be print with a beautiful msg "The Highest Base of 67B89D is 14"
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

int main(void)
{
char str[11];//here i declared an array which will store characters in the form of string
int i; 
bool toss;
srand(time(NULL));//this function is used to print different alphanumeric character with updated time

for(int k=0;k<50;k++)//this loop iterate 50 times a random alphanumeric string
{
int length = rand()%((MAX_LENGTH - MIN_LENGTH)+1) + MIN_LENGTH;//this statement gives a random length of alphanumeric string between (3-10)

printf("The Highest Base of ");

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
//this is the code to find maximun base of this alphanumeric string
int max = str[0];//here i declared the zero-th index as a maximum base of an array
int j;
for(j=0;j<length;j++)//here for loop is used to find and store maximim base character for this alphanumeric string
{
if(str[j]>max)//here this condition check that j-th value is greater than max value (as we assume) or not
 {
  max = str[j];//here i assigned str[j] as a maximim base
 }
}
 char value = max;//here data type of max base is changed (from int to char) and assigned or declared with value (as a name)
 if(value=='A'||value=='B'||value=='C'||value=='D'||value=='E'||value=='F')//if (value) Character is Alphabet then this code will print
 {
  printf(" is %d\n",(value-55)+1);//This statement will print the Highest alphabetic base value in string
 }
 else if(value=='9')

 printf(" is 10\n");
 
 else
 
 printf(" is %c\n",value+1);//This statement will print the Highest numeric base value in string
}
}
//Output:-
/*
The Highest Base of 2EDC609 is 15
The Highest Base of FB4EF15 is 16
The Highest Base of 00B2C5 is 13
The Highest Base of 41809B72ED is 15
The Highest Base of 385 is 9
The Highest Base of B9C857E is 15
The Highest Base of E0E1 is 15
The Highest Base of 66FBEDE9E2 is 16
The Highest Base of 13D5 is 14
The Highest Base of 66B597 is 12
The Highest Base of 0F8394DC is 16
The Highest Base of B3D5BC1 is 14
The Highest Base of EFE is 16
The Highest Base of 4DF0 is 16
The Highest Base of 5BB is 12
The Highest Base of 8D7EEC is 15
The Highest Base of DAC6549 is 14
The Highest Base of 68615 is 9
The Highest Base of 1C62DA0 is 14
The Highest Base of C60D73E8 is 15
The Highest Base of 3B96207E2A is 15
The Highest Base of DB65 is 14
The Highest Base of 98DA is 14
The Highest Base of 4092E5CA is 15
The Highest Base of 18081BE is 15
The Highest Base of B15B0 is 12
The Highest Base of 5EE3 is 15
The Highest Base of B6FCA1 is 16
The Highest Base of FA95B81F52 is 16
The Highest Base of 27DE4C45 is 15
The Highest Base of E003 is 15
The Highest Base of 4EE is 15
The Highest Base of 4189DE303 is 15
The Highest Base of 2DCCF is 16
The Highest Base of 9DC6AF is 16
The Highest Base of F9AEF6C9 is 16
The Highest Base of 2AEC0AD25 is 15
The Highest Base of 356D3FBA is 16
The Highest Base of F3423232F is 16
The Highest Base of BCA0502E2 is 15
The Highest Base of 2580BD7F57 is 16
The Highest Base of BEA33C is 15
The Highest Base of B52421BF is 16
The Highest Base of 6B741E is 15
The Highest Base of 1925F22BC is 16
The Highest Base of 44EDC82871 is 15
The Highest Base of B336DFDA is 16
The Highest Base of BAF5B36AF is 16
The Highest Base of FDB8F3 is 16
The Highest Base of 568 is 9
*/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~COMPLETE~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~