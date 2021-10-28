#include<stdio.h>

int main()
{
    int n;
    int c = 0;
    for(n=1; n<=100; n++){
    for(int j=2; j<n; j++){
        if(n%j==0){
            c++;
        }

    }
    if(c == 0){
            printf("Prime num: %d\n", n);
        }
        c=0;
}}
