#include <stdio.h>

int main()
{
    char a;
    printf("Give me a character: ");
    scanf("%c", &a);
    if((a > 64) && (a < 91)){
        printf("%c", a+32);
    }else{
        printf("%c", a-32);
    }
    return 0;
}
