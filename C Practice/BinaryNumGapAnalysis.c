#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>

void BinaryNumRepresentation(uint8_t *NumPtr);
void BinaryNumStore(uint32_t *NumPtr,uint8_t BinArr[32]);
//void BinaryNumGapAnalysis(uint8_t BinArr[32]);

void main(void)
{
    uint32_t Number = 1041;
    uint8_t BinaryArr[32] = {0};
    int8_t Idx = 0;
    uint8_t GapCntr = 0;
    uint8_t GapCntrInitFlg = 0;

    //BinaryNumRepresentation(&Number);
    printf("\n\n");
    BinaryNumStore(&Number,BinaryArr);
    printf("\n\n");
    for(Idx = 0; Idx < 31; Idx++)
    {
      if((1 == BinaryArr[Idx]) && (0 == BinaryArr[Idx + 1]))
      {
        GapCntrInitFlg = 1;
      }
      else
      {
          if(((0 == BinaryArr[Idx]) && (1 == BinaryArr[Idx + 1])) && (1 == GapCntrInitFlg))
          {
            GapCntr++;
          }
          else
          {
              // Do nothing
          }
      }
    }

    printf("Gap Counter : %d", GapCntr);
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

void BinaryNumStore(uint32_t *NumPtr,uint8_t BinArr[32])
{
    uint32_t Input;
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
