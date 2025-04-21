/*
Task

Given a five digit integer, print the sum of its digits.

Input Format

The input contains a single five digit number, .

Constraints


Output Format

Print the sum of the digits of the five digit number.

Sample Input 0

10564
Sample Output 0

16
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long int n,div,sum = 0;
    short int i = 0;

    scanf("%ld",&n);

    div = n;

    for(i=0; i<5 ; i++)
    {
        sum += div % 10;
        printf("div = %ld\n",div);
        printf("sum = %ld\n",sum);
        div = div / 10;
    }

    printf("%ld",sum);

    return 0;
}