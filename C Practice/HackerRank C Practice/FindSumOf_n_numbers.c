/*All Contests  C PROGRAMMING TEST-1  Finding sum of n numbers
Finding sum of n numbers
Problem
Submissions
Leaderboard
Discussions
This task is to find sum of n numbers. 
TASK: 1.To find sum of n numbers. 2.Use variables n,c,sum=0,value. 
INPUT FORMAT: Use printf statement. Use scanf statement to get the number n. Use FOR loop. 
OUTPUT FORMAT: Use printf statement to print the output. SAMPLE INPUT: 3 SAMPLE OUTPUT: 6

Max Score: 30pts dynamic

Submissions: 6132
Max Score: 30
Difficulty: Hard
Rate This Challenge:

    
More
 
1
​
Run Code Submit CodeUpload Code as File 
Test against custom input
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |

The Challenge
You can find the challenge statement here, including the input format and expected output format.
SkipNext →
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    short unsigned int  n,c;
    unsigned long int sum=0;

    printf("SAMPLE INPUT: ");
    scanf("%i",&n);

    for(c=1; c <= n;c++ )
    {
        sum = sum + (unsigned long int )c;
    }
    printf("SAMPLE OUTPUT: %li",sum); 

    return 0;
}


