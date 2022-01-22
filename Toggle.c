#include <stdio.h>
#include <conio.h>
#include <stdint.h>

#define TOGGLE_BIT(Data,Pos)    (Data = (Data) ^ (0x01 << Pos))

void main()
{
    uint8_t BitPos = 1;
    uint8_t InputData = 7;

    printf("Before : InputData = %d\n",InputData);

    TOGGLE_BIT(InputData,BitPos);

    printf("After 1st iteration: InputData = %d\n\n",InputData);

    TOGGLE_BIT(InputData,BitPos);

    printf("After 2nd iteration: InputData = %d\n\n",InputData);

    TOGGLE_BIT(InputData,BitPos);

    printf("After 3rd iteration: InputData = %d\n\n",InputData);

    TOGGLE_BIT(InputData,BitPos);
}

