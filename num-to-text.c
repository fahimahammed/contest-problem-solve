#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void numToText(char* num)
{
    int len = strlen(num);

    if (len == 0) {
        fprintf(stderr, "Empty! Please enter a number.\n");
        return;
    }
    if (len > 4) {
        fprintf(stderr, "Please enter 3 or less digit number\n");
        return;
    }

    char* singleDigit[] = { "Zero", "One", "Two",   "Three", "Four","Five", "Six", "Seven", "Eight", "Nine" };
    char* twoDigits[] = { "", "Ten", "Eleven",  "Twelve", "Thirteen",  "Fourteen", "Fifteen", "Sixteen","Seventeen", "Eighteen", "Nineteen" };
    char* tensMul[] = { "", "", "Twenty", "Thirty", "Forty",   "Fifty", "Sixty",  "Seventy", "Eighty", "Ninety" };
    char* power[] = { "Hundred", "Thousand" };

    if (len == 1) {
        printf("%s\n", singleDigit[*num - '0']);
        return;
    }

    while (*num != '\0') {

        if (len >= 3) {
            if (*num - '0' != 0) {
                printf("%s ", singleDigit[*num - '0']);
                printf("%s ", power[len - 3]);
            }
            --len;
        }

        else {

            if (*num == '1') {
                int sum = *num - '0' + *(num + 1) - '0';
                printf("%s\n", twoDigits[sum]);
                return;
            }

            else if (*num == '2' && *(num + 1) == '0') {
                printf("twenty\n");
                return;
            }

            else {
                int i = *num - '0';
                printf("%s ", i ? tensMul[i] : "");
                ++num;
                if (*num != '0')
                    printf("%s ", singleDigit[*num - '0']);
            }
        }
        ++num;
    }
}

int main(void)
{
    char num[5];
    printf("Enter a number: ");
    scanf("%s", &num);
    printf("\n");
    numToText(num);
    printf("\n");


    return 0;
}
