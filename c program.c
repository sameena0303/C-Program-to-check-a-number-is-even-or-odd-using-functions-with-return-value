#include <stdio.h>
int main()
{
    int n,r;
    printf("Enter a number : ");
    scanf("%d", &n);
    r=n%2;
    if(r==0)
    printf("Even");
    else
    printf("ODD");
    return 0;
}
