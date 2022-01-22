#include <stdio.h>
#include <conio.h>
#include <stdint.h>

#define SET_BIT(Data,Pos)    (Data = (Data) | (0x01 << Pos))

void main()
{
    uint8_t BitPos = 2;
    uint8_t InputData = 2;

    printf("Before : InputData = %d\n\n",InputData);

    SET_BIT(InputData,BitPos);

    printf("After : InputData = %d\n\n",InputData);
}
