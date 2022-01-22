#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

uint8_t MyStrlenFunc(char *MyStr);

void main(void)
{
    char MyString[100];// = "Find my length";

    printf("Enter Your String : ");
    //scanf("%s",MyString);
    gets(MyString);
    printf("My String Length is %d\n\n", MyStrlenFunc(MyString));

    printf("API String Length is %d\n\n", strlen(MyString));

}

uint8_t MyStrlenFunc(char *MyStr)
{
    uint8_t Idx;

    for(Idx = 0; MyStr[Idx] != '\0'; Idx++);

    return(Idx);
}
