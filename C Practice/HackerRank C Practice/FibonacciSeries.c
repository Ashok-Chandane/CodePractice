/*This task is to find fibanocci of n numbers.
TASK: 1.To find fibanocci of n numbers. 2.Use variables n,first=0,second=1,next,c. 
INPUT FORMAT: Use printf statement. Use scanf to get the number n. Use FOR loop. Use IF....ELSE loop statement. 
OUTPUT FORMAT: Use printf statement to print the output SAMPLE INPUT: 2 SAMPLE OUTPUT: 3*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned short int n,first=0,second=1,next=0,c;   

    scanf("%hi", &n);


    if(n>1)
    {
        printf("01");
        for(c=0; c <=n; c++)
        {
            next = first + second;
            printf("%hi",next);
            first = second;
            second = next;
        }
    }
    else
    {
        (n==1) ? printf("01"):printf("0");
    }

    return 0;
}