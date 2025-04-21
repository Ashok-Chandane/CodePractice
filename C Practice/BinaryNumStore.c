#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void BinaryNumRepresentation(uint8_t *NumPtr);
void BinaryNumStore(uint8_t *NumPtr,uint8_t BinArr[32]);

void main(void)
{
    uint8_t Number = 100;
    uint8_t BinaryArr[32] = {0};

   // BinaryNumRepresentation(&Number);
    printf("\n\n");
    BinaryNumStore(&Number,BinaryArr);
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

void BinaryNumStore(uint8_t *NumPtr,uint8_t BinArr[32])
{
    uint8_t Input;
    int8_t Idx = 0;

    Input = *NumPtr;

    while( (0 != Input) && (1 != Input))
    {
        BinArr[Idx] = (Input%2);
        Input = (Input >> 1);
        Idx++;
    }

    BinArr[Idx] = Input;

    for(Idx = 31; Idx >= 0; Idx--)
    {
      printf("%d",(BinArr[Idx]));
    }

}
