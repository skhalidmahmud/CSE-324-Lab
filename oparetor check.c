#include <stdio.h>

int main()
{
    char a[4];
    printf("Give me to a operator: ");
    scanf("%s", &a);
    if(a == '>='){
        printf("Greater then or equal to");
    }else if(a == '>='){
        printf("Less then or equal to");
    }else if(a == '++'){
        printf("Increment");
    }else if(a == "=="){
        printf("Equal to");
    }else if(a == '-'){
        printf("Subtraction");
    }else if(a == '+'){
        printf("Addition");
    }else if(a == '*'){
        printf("Multiplication");
    }else if(a == '/'){
        printf("Division");
    }else if(a == '%'){
        printf("Modulo division");
    }else if(a == '='){
        printf("Equal to");
    }else if(a == '+='){
        printf("Plus equal to");
    }else if(a == '-='){
        printf("Minus equal to");
    }else if(a == '/='){
        printf("Division equal to");
    }else if(a == '*='){
        printf("Multiplication equal to");
    }else if(a == '>'){
        printf("Greater then");
    }else if(a == '<'){
        printf("Less then");
    }else if(a == '&&'){
        printf("Logical AND");
    }else if(a == '||'){
        printf("Logical OR");
    }else if(a == '!'){
        printf("Logical NOT");
    }else
        printf("It ia not a operator");
    return 0;
}
