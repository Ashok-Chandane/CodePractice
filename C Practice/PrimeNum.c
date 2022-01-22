#include <stdio.h>
#include <conio.h>
#include <stdint.h>

void PrimeNumVerification (uint8_t Input);
void main()
{
    PrimeNumVerification(19);
}

void PrimeNumVerification (uint8_t Input)
{
    uint8_t Idx;
    uint8_t Flag;


    for(Idx = 2; Idx < Input; Idx++)
    {
        if(0 == (Input % Idx))
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
        printf(" %d is a Prime Number \n\n", Input);
    }
    else
    {
        printf(" %d is Not a Prime Number \n\n", Input);
    }

}
