#include <stdio.h>

int main()
{
    //vowel = a, e, i, o, u
    char letter;
    printf("Enter a Letter: ");
    scanf("%c", &letter);

    if(letter == 'a'  || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        printf("%c is Vowel\n", letter);
    }else{
       printf("%c is consonant\n", letter); 
    }

    return 0;
}