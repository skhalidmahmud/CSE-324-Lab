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
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '-'){
        if(a[1] == 0){
            printf("Subtraction");
        }else if(a[1] == '-'){
            printf("Decrement");
        }else if(a[1] == '='){
            printf("Minus equal to");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '*'){
        if(a[1] == 0){
            printf("Multiplication");
        }else if(a[1] == '='){
            printf("Multiplication equal to");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '/'){
        if(a[1] == 0){
            printf("Division");
        }else if(a[1] == '='){
            printf("Division equal to");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '%'){
        if(a[1] == 0){
            printf("Modulo division");
        }else if(a[1] == '='){
            printf("Modulo division equal to");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '='){
        if(a[1] == 0){
            printf("Simple assignment");
        }else if(a[1] == '='){
            printf("Equal to");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '!'){
        if(a[1] == 0){
            printf("Logical NOT");
        }else if(a[1] == '='){
            printf("Not equal to");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '<'){
        if(a[1] == 0){
            printf("Less than");
        }else if(a[1] == '='){
            printf("Less than or equal to");
        }else if(a[1] == '<'){
            if(a[2] == 0){
                printf("Binary Left Shift");
            }else if(a[2] == '='){
                printf("Binary Left Shift AND");
            }else{
                printf("Operators are not valid in 'C'");
            }
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '>'){
        if(a[1] == 0){
            printf("Greater than");
        }else if(a[1] == '='){
            printf("Greater than or equal to");
        }else if(a[1] == '>'){
            if(a[2] == 0){
                printf("Binary Right Shift");
            }else if(a[2] == '='){
                printf("Binary Right Shift AND");
            }else{
                printf("Operators are not valid in 'C'");
            }
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '&'){
        if(a[1] == 0){
            printf("Binary AND");
        }else if(a[1] == '&'){
            printf("Logical AND");
        }else if(a[1] == '='){
            printf("Bitwise AND");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '|'){
        if(a[1] == 0){
            printf("Binary OR");
        }else if(a[1] == '|'){
            printf("Logical OR");
        }else if(a[1] == '='){
            printf("Bitwise OR");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '^'){
        if(a[1] == 0){
            printf("Binary XOR");
        }else if(a[1] == '='){
            printf("Bitwise XOR");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '~'){
        if(a[1] == 0){
            printf("Binary One's Complement");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else if(a[0] == '?'){
        if(a[1] == 0){
            printf("Operators are not valid in 'C'");
        }else if(a[1] == ':'){

            printf("Conditional Expression");
        }else{
            printf("Operators are not valid in 'C'");
        }
    }else{
        printf("Operators are not valid in 'C'");
    }printf(" Operator");

    getch();
    return 0;
}
