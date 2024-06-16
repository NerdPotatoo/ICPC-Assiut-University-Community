#include<stdio.h>
#include<string.h>
int main()
{
    int sum = 0;
    char s[1000001];
    scanf("%s", s);
    for(int i = 0; i<strlen(s); i++)
    {
        sum += s[i]-48;
    }
    printf("%d", sum);
}