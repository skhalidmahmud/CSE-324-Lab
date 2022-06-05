#include <stdio.h>

int main()
{
    char a[4] = {0};
    printf("Give me to a operator: ");
    
    scanf("%s", a);
    
    if(a[0] == '+'){
        if(a[1] == 0){
            printf("Addition");
        }else if(a[1] == '+'){
            printf("Increment");
        }else if(a[1] == '='){
            printf("Plus equal to");
        }
    }else if(a[0] == '-'){
        if(a[1] == 0){
            printf("Subtraction");
        }else if(a[1] == '-'){
            printf("Decrement");
        }else if(a[1] == '='){
            printf("Minus equal to");
        }
    }
    return 0;
}
