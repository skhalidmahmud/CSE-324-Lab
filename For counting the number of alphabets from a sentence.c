#include <stdio.h>

int main(){
    char str[100];
    int ans[128]={0};
    printf("Give me a sentence: ");
    fgets(str, 100, stdin);

    for(int i=0; i<=strlen(str); i++){
        ans[(int)str[i]] = ans[(int)str[i]] + 1;
    }

    printf("\nNumber of word is:\n");
    for(int i=30; i<=127; i++){
        if(!(ans[i]==0)){
            printf("   %c :  %d\n",(char)i, ans[i]);
        }
    }

    getch();
    return 0;
}
