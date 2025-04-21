/*This task is to find factorial of n numbers. TASK: To find the factorial of n numbers. 
Use three variables c,n,fact=1. INPUT FORMAT: Use printf statement. Use scanf statement to get the integer n. 
Use FOR loop. OUTPUT FORMAT: Use printf statement to print the output. SAMPLE INPUT: 3 SAMPLE OUTPUT: 6*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    short int n,c;
    long long int fact = 1;

    scanf("%d", &n);

    if(!((n == 0)|| (n == 1)))
    {
        for(c = 2; c <= n; c++)
        {
            fact = (fact * (long long int)c);
        }  
    }

    printf("%lld",fact);
 
    return 0;
}