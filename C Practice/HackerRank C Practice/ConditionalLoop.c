/*
Task

For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Input Format

The first line contains an integer, .
The seond line contains an integer, .

Constraints


Output Format

Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    char *PtrArray[10] = {"one","two","three","four","five","six","seven","eight","nine"};
    int i,a,b,min,max;

    scanf("%d \n %d",&a,&b);

    if(a>b)
    {
        min = b; 
        max = a; 
    }
    else
    {
        min = a; 
        max = b;
    }

    i = min;
    while((max >= i) && (i < 10))
    {
        printf("%s\n",PtrArray[i-1]);
        i++;
    }

    while(i<=max)
    {
        (i & 0x01 ) ? printf("odd \n") : printf("even \n");
        i++;
    }

    return 0;
}