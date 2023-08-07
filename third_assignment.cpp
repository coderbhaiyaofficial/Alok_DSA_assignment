//Generate a random Alphanumeric String having Random Length between (3-10)character,in this string each character can be either from(0-9)or(A-F)
//SO determine the highest base of that Alphanumeric string using the formula (Highest Base of "67B89D" = max('6','7','B','8','9','D') = max(6,7,11,8,9,13) = 13+1 = 14)
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
  printf(" is %d",(value-55)+1);//This statement will print the Highest alphabetic base value in string
 }
 else
 printf("%c",value+1);//This statement will print the Highest numeric base value in string
}
//Output:-The Highest Base of 1CD1 is 14
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~COMPLETE~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~