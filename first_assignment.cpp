//Question:- generate a random charater, either it is a numeric value(0-9) or a alphabetic value(A-F) with a beautiful msg as "the randomly generated character is A"
#include<stdio.h>
#include<stdlib.h>//this library is used for rand function 
#include<stdbool.h>//this library is used for boolean function
#include<time.h>//this library is used for srand funtion to generate different alphanumeric character with updated time

#define min_alp_ascii 65//here i defined minumum alphabetic ascii value (A)
#define max_alp_ascii 70//here i defined maximum alphabetic ascii value (F)

#define min_num_ascii 48//here i defined minumum numeric ascii value (0)
#define max_num_ascii 57//here i defined maximum numeric ascii value (9)

int main()
{
    char ch;
    bool toss;
    srand (time(NULL));//this function is used to print different alphanumeric character with updated time
    toss = rand()%2;//here rand function is used to generate a random condition in every run

    if(toss == true)                
    {ch = rand()%((max_num_ascii-min_num_ascii)+1) + min_num_ascii;//This statement will store random numeric value in ch(ch = rand()%scaling_factor+shifting_value)
    }                                                              
    else                                                    
    {ch = rand()%((max_alp_ascii-min_alp_ascii)+1) + min_alp_ascii;//This statement will store random alphabetic value in ch 
    }
    printf("the randomly generated character is:%c",ch); ///this will print the random character which is store in ch 
    return 0;
    }