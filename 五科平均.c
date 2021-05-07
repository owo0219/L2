#include <stdio.h>
#include <stdlib.h>

int main()
{
   float c,e,m,S,s;
    printf("請依序並以空白間隔輸入國文、英文、數學、社會、自然五科各自的成績:\n");
    scanf("%f %f %f %f %f",&c,&e,&m,&S,&s);
    printf("五科的平均是: %.2f 分",(c+e+m+S+s)/5.0);
    return 0;
}
