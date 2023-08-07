#include<stdio.h>
int main()
{
    int t,A,B,D,E,F;
    int C;
    int i=1;
    scanf("%d", &t);
    while(i<=t){
        scanf("%d %d %d %d %d", &A, &B, &D, &E, &F);
        C=A+B+D+E+F;
        printf("%d\n", C);
        i=i+1;
    }
    return 0;
}