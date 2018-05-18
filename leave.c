
#include <stdio.h>
int main()
{
    char str[100];
    char l1[10]="Saturday";
    char l2[10]="Sunday";
    scanf("%s",str);
    if((strcmp(str,l1)==0)||(strcmp(str,l2)==0))
    printf("yes");
    else
    printf("no");
    return 0;
}
