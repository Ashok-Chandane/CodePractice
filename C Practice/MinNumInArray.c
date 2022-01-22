#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>

int8_t MinNumInArr(int8_t Arr[], int8_t N);

void main(void)
{
    int8_t N[] = {-3,-5,-9};
    MinNumInArr(N,sizeof(N)/sizeof(N[0u]));
}

int8_t MinNumInArr(int8_t Arr[], int8_t N)
{
    int8_t MinNumInArr;
    int8_t MaxNumInArr;
    int8_t Result;
    uint8_t Idx;
    int8_t Num;

    MinNumInArr = Arr[0];
    MaxNumInArr = Arr[0];

    // Logic to find out Min and Max element in array
    for(Idx = 1; Idx < N; Idx++)
    {
        if(MinNumInArr > Arr[Idx])
        {
            MinNumInArr = Arr[Idx];
        }
        else if(MaxNumInArr < Arr[Idx])
        {
            MaxNumInArr = Arr[Idx];
        }
        else
        {
            //
        }
    }

    printf("MinNumInArr is : %d\n",MinNumInArr);
    printf("MaxNumInArr is : %d\n",MaxNumInArr);

    //
    if(MaxNumInArr > 0)
    {
        for(Num = MinNumInArr; Num <= MaxNumInArr; Num++)
        {
            for(Idx = 0; Idx < N; Idx++)
            {
                if(Num == Arr[Idx])
                {
                    break;
                }

            }

            // Min number not member of array found
            if(Idx == N)
            {
                Result = Num;
                printf("Result is : %d\n",Result);
                break;
            }
        }

        // All N present in array are sequencial
        if(Num >= MaxNumInArr)
        {
            Result = Num;
            printf("Result is : %d\n",Result);
        }
    }
    else
    {
        // Max element present in array is < 0
        Result = 0;
        printf("Result is : %d\n",Result);
    }

    return (Result);
}
