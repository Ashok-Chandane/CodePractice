/**
A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps. The number 32 has binary representation 100000 and has no binary gaps.

Write a function:

int solution(int N);

that, given a positive integer N, returns the length of its longest binary gap. The function should return 0 if N doesn't contain a binary gap.

For example, given N = 1041 the function should return 5, because N has binary representation 10000010001 and so its longest binary gap is of length 5. Given N = 32 the function should return 0, because N has binary representation '100000' and thus no binary gaps.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..2,147,483,647].

**/

#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>

void BinaryNumRepresentation(int N);
int solution(int N) ;

void main(void)
{
    int InputNum = 0;

    InputNum = 1041;
    BinaryNumRepresentation(InputNum);
    printf("\n");
    printf("Max Gap Analysis for %d is %d\n",InputNum,solution(InputNum));

    printf("\n");
    printf("\n");
    InputNum = 15;
    BinaryNumRepresentation(InputNum);
    printf("\n");
    printf("Max Gap Analysis for %d is %d\n",InputNum,solution(InputNum));

    printf("\n");
    printf("\n");
    InputNum = 32;
    BinaryNumRepresentation(InputNum);
    printf("\n");
    printf("Max Gap Analysis for %d is %d\n",InputNum,solution(InputNum));

    printf("\n");
    printf("\n");
    InputNum = 9;
    BinaryNumRepresentation(InputNum);
    printf("\n");
    printf("Max Gap Analysis for %d is %d\n",InputNum,solution(InputNum));
}

int solution(int N)
{
    // write your code in C99 (gcc 6.2.0)
    uint32_t Input;
    uint8_t InitCntr = 0;
    uint8_t GapCntr = 0;
    uint8_t MaxGapCntr = 0;


    Input = N;

    while( (0 != Input) && (1 != Input))
    {
        if(Input%2)
        {
            if(GapCntr > MaxGapCntr)
            {
                MaxGapCntr = GapCntr;
            }
            GapCntr = 0;
            InitCntr = 1;
        }
        else
        {
            if(1 == InitCntr)
            {
                GapCntr++;
            }
        }
        Input = (Input >> 1);
    }

    if(1 == Input)
    {
        if(GapCntr > MaxGapCntr)
        {
            MaxGapCntr = GapCntr;
        }
    }

    return(MaxGapCntr);
}

void BinaryNumRepresentation(int N)
{
    int Input = N;
    printf("Binary Representation of %d : ", N);
    while( (0 != Input) && (1 != Input))
    {
        printf("%d",(Input%2));
        Input = (Input >> 1);
    }
    printf("%d",Input);

}
