/*
Task

There is a series, , where the next term is the sum of pervious three terms. Given the first three terms of the series, , , and  respectively, you have to output the nth term of the series using recursion.

Recursive method for calculating nth term is given below.

Input Format

The first line contains a single integer, .

The next line contains 3 space-separated integers, , , and .

Constraints

Output Format

Print the nth term of the series, .

Sample Input 0

5
1 2 3
Sample Output 0

11
Explanation 0

Consider the following steps:

From steps , , , and , we can say ; then using the values from step , , , and , we get . Thus, we print  as our answer.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    int i,Nth_term, sum = 0;

    for(i=0;i<n;i++)
    {
        if(i<4)
        {
            if(i==0) 
            {
                Nth_term = a;
            }     
            else if(i==1) 
            {
                Nth_term = b;
            }    
            else if(i==2) 
            {
                Nth_term = c;
            }
            else
            {
                sum = a + b + c;
                Nth_term = sum;
            }    
        }
        else
        {
            a = b;
            b = c;
            c = sum;
            sum = a + b + c;
            Nth_term = sum;
        }

    }

    return Nth_term;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}