#include <stdio.h>

int main()
{
    char input;
    printf("enter the character : \n");
    scanf("%c", &input);
    if (input >= '0' && input <= '9')
    {
        printf("it is a digit \n");
    }
    else if ((input >= 'A' && input <='Z') || (input >='a' && input <= 'z'))
    {
        printf("it is a alphabet \n");
    }
    else
    {
        printf("it is a special character \n");
    }
    printf("the ASCII code of %c is: %d \n",input,input);
    return 0;
}
