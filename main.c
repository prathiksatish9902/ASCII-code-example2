#include <stdio.h>
#include <ctype.h>
int main()
{
    char input;
    printf("enter the character : \n");
    scanf("%c", &input);
    if (isdigit(input))
    {
        printf("it is a digit \n");
    }
    else if (isalpha(input))
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
