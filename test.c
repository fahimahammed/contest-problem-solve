#include<stdio.h>

void piramid(int n){
    int i, j, k;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("* ");

        }
        printf("\n");

    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    piramid(n);
}
