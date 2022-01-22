#include <stdio.h>
#include <conio.h>
#include <stdint.h>

void BinaryNumRepresentation(uint8_t *NumPtr);

void main(void)
{
    uint8_t Number = 5;

    BinaryNumRepresentation(&Number);
}

void BinaryNumRepresentation(uint8_t *NumPtr)
{
    uint8_t Input;

    Input = *NumPtr;

    while( (0 != Input) && (1 != Input))
    {
        printf("%d \t",(Input%2));
        Input = (Input >> 1);
    }
    printf("%d \t",(Input));
}
