/*This task is to find greatest of three integer numbers. 
TASK: 1.To find greatest of three integer numbers. 
2.Use three variables a,b,c as integers. INPUT FORMAT: Use single scanf and get three integers. 
Compare three integers using IF.....ELSE statement. 
OUTPUT FORMAT: The output should be the single integer number greatest among a,b,c. SAMPLE INPUT: 1,2,3 SAMPLE OUTPUT: 3*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    short int a,b,c;

    printf("Enter Input:");
    scanf("%i,%i,%i",&a,&b,&c);

    if((a == b) && (a == c))
    {
        printf("%hu", a);
    }
    else 
    {
        printf("%i", (a >= b)? (a >= c ? a : c) : ((b >= c ? b : c)));    
    }

    return 0;
}