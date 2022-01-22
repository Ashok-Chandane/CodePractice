#include <stdio.h>
#include <conio.h>
#include <stdint.h>

void PrimeNumVerification (uint8_t MinData,uint8_t MaxData);

void main()
{
    PrimeNumVerification(0,50);
}

void PrimeNumVerification (uint8_t MinData,uint8_t MaxData)
{
    uint8_t DivIdx;
    uint8_t DataIdx;
    uint8_t Flag;


    for(DataIdx = MinData; DataIdx <= MaxData; DataIdx++)
    {
        for(DivIdx = 2; DivIdx < DataIdx; DivIdx++)
        {
            if(0 == (DataIdx % DivIdx))
            {
                Flag = 0;
                break;
            }
            else
            {
                Flag = 1;
            }
        }

        if(1 == Flag)
        {
            printf(" %d \n", DataIdx);
        }
        else
        {
            // Do Nothing
        }
    }


}

