#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t,p,m;
    printf("�п�J��Ӭ۲������(�H�ťն��j):\n");
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
    printf("�̤j���]�Ƭ�:%d",m);
    return 0;
}
