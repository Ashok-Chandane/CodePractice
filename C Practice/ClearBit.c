#include <stdio.h>
#include <conio.h>
#include <stdint.h>

#define CLR_BIT(Data,Pos)    (Data = (Data) & ~(0x01 << Pos))

void main()
{
    uint8_t BitPos = 1;
    uint8_t InputData = 7;

    printf("Before : InputData = %d\n",InputData);
    printf("Before : InputData = %b\n",InputData);

    CLR_BIT(InputData,BitPos);

    printf("After : InputData = %d\n\n",InputData);
}

