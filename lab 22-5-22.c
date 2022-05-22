#include <stdio.h>
void vowcon(char line[200]){
    int vowels = 0, consonant =0;
    for (int i = 0; line[i] != '\0'; ++i){

        line[i] = tolower(line[i]);

        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u'){

            ++vowels;
        }else if ((line[i] >= 'a' && line[i] <= 'z')){
            ++consonant;
        }
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
}
void whitespaces(char line[200]){
    int space =0;
    for (int i = 0; line[i] != '\0'; ++i){
        line[i] = tolower(line[i]);
        if(line[i] == ' '){
            ++space;
        }
    }
    printf("\nWhite spaces: %d", space);
}

/*  void removeWS(char line[200]){
    for (int i = 0; line[i] != '\0'; ++i){
        line[i] = tolower(line[i]);
        if(line[i] == ' '){
            
        }
    }
}    */

int main() {

    char line[200];
    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    vowcon(line);
    whitespaces(line);
  //  removeWS(line);

  return 0;
}
