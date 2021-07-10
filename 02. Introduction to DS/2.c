#include <stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a == b)
        printf("both same");
    else if ( a > b)
        printf("a > b");
    else
        printf("b > a");
    return 0;
}