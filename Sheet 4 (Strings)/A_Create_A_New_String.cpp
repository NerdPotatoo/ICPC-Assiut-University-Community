#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[1001],t[1001];
    scanf("%s", s);
    scanf("%s", t);
    int len_s = strlen(s), len_t = strlen(t);
    printf("%d %d\n%s %s", len_s, len_t, s, t);
    return 0;
}