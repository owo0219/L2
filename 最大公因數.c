#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t,p,m;
    printf("請輸入兩個相異正整數(以空白間隔):\n");
    scanf("%d %d",&a,&b);
    if(a>b){
        t=b;
        p=a;
    }
    else{
        t=a;
        p=b;
    }
    for(int i=1 ; i<=t ; i++){
        if(t%i==0 && p%i==0)
        m=i;
    }
    printf("最大公因數為:%d",m);
    return 0;
}
