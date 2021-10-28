#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter your sentence: ");
    scanf("%s", &s);

    int length = strlen(s);
    for(int i=0; i<length; i++){
        if( (s[i] <=90 && s[i] >=65) || (s[i] <=122 && s[i] >=97) ){
            printf("%c", s[i]);
        }
    }
}
