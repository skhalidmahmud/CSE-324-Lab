#include <stdio.h>

int main(){
    char str[100] = {0};
    int b = 100;
    printf("Give me a string: ");

    scanf("%s", str);

    if((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_'){
        for(int i=1; str[i]>='\n'; i++){
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '_') || (str[i] >= '0' && str[i] <= '9'))
                b = 0;
            else{
                b = 10;
                break;
            }
        }
        if(b == 0)
            printf("Valid");
    }else
            printf("Invalid");
    getch();
    return 0;
}
