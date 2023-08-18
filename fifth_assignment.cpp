//Generate a random Alphanumeric String having Random Length between (3-10)character,in this string each character can be either from(0-9)or(A-F)
//SO determine the highest base of that Alphanumeric string using the formula (Highest Base of "67B89D" = max('6','7','B','8','9','D') = max(6,7,11,8,9,13) = 13+1 = 14)
//this process iterate 50 times with the help of loop
//this program should be print with a beautiful msg "The Highest Base of 67B89D is 14"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define MIN_NUM_ASCII 48		//Define Ascii value of 0 from which our numeric range starts
#define MAX_NUM_ASCII 57		//Define Ascii value of 9 to which our numeric range ends 

#define MIN_ALPHA_ASCII 65		//Define ASCII value of A from which our Alpha range starts
#define MAX_ALPHA_ASCII 70		//Define ASCII value of F to which our Alpha range ends


int main(){
    char str[11];		//declare a array which will store characters in the form of string
    bool toss;
	int hb[50]; 				//Initiate An Array to store highest base value of each Aphanumeric strings
    srand(time(NULL));
 	
    int k;
	for(k=0;k<50;k++){			//This loop will itrate the whole process 50 times
	
	int length = rand() % 8 + 3;	//Generates a random length between 3 to 10
	
    printf("The Highest Base of ");

	int i;
    for (i=0;i<length;i++)		//loop to store and print random characters in each index of array
    {
	toss = rand() % 2;			//it will choose the number will numerical or alphabet and it is random in each turn
	if(toss==true)
        str[i] = rand() % ((MAX_ALPHA_ASCII - MIN_ALPHA_ASCII) + 1) + MIN_ALPHA_ASCII;		//if toss is true than str store random alphabet from ASCII value 65-70
	
	else   
		str[i] = rand() % ((MAX_NUM_ASCII - MIN_NUM_ASCII) + 1) + MIN_NUM_ASCII;	//if toss is false than str store random numerical from ASCII value 48-57
	
	
    printf("%c", str[i]);			//it will print the the alphanumerical string that is store in str 

	}
	
	int max = str[0];		//initiate and store the first value of Alphanumeric string in variable max
	int j;					
	for(j=0;j<length;j++){		//loop to get the maximum value in the alphanumeric string and store it in high
		if(str[j]>max){
			max = str[j];		//if find a value which is greater than 1st value in array than it will store in max variable and loops runs again
		}
	
	}
		
	//printf("  Max value of array is %c",max);		//we can use it to find maximum value in our Alphanumeric Character in Array
	
	char val;					//initiate character variable val and store integer max value in it
	if (max == 'A' || max == 'B' || max == 'C' || max == 'D' || max == 'E' || max == 'F'){ //if max Character is Alphabet then this code will print
		val=(max-55)+1;		//This will print the Highest base value in string
		printf(" is %d\n",val);
	}
	else if(max == '9'){					//if our maximum vlaue in array is 9 then this code will execute 
		val = 10;
		printf(" is %d\n",val);					//print 10 as Highest base value
	}
	else{ 											//if max Character is Numeric then this code will run
		val = (max-48)+1;
		printf(" is %d\n",val);						//This will print the Highest base value in string
}
	hb[k]=val;										//Strore highest base value in hb[] array in index position j

}
	/*int l;
	for(l=0;l<50;l++){
			printf("\nHighest base of each string is %d\n",hb[l]);		//This is code to print all highest base values present in each array
	}
	*/
	printf("-----------------------------------------------------------------------------------------");
	int length = sizeof(hb)/sizeof(hb[0]);    //determine the length of frequency array
        
    //Array fr will store frequencies of element    
    int fr[length];    
    int visited = -1;    
    int x;
	int y;    
    for(x = 0; x < length; x++){    
        int count = 1;    						//initiate the variable which will count frequency of highest base 
        for(int y = x+1; y < length; y++){    
            if(hb[x] == hb[y]){    
                count++;    					//if same value is found in array than value of count increase by 1
                //To avoid counting same element again    
                fr[y] = visited;    
            }    
        }    
        if(fr[x] != visited)    
            fr[x] = count;    
    }    
        
    //Displays the frequency of each element present in array     
            
    for(x = 0; x < length; x++){    
        if(fr[x] != visited){
			printf("\nThere are %d Alphanumeric Strings having highest base of %d\n",fr[x],hb[x]);		//This will print our desirable output    
        }    
    }    
    return 0;
}