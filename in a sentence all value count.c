#include <stdio.h>

int main(){
    char str[100] = {'\n'}, c, ans[100] = {0};
    printf("Give me a sentence: ");
    fgets(str, 100, stdin);
    
    for(int i = 0; str[i] == '\n'; i++){
        if(str[i] >= 0 && str[i] <= 128){
            ans[str[i] += 1;
        }
    }
    getch();
    return 0;
}
