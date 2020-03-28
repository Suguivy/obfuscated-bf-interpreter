char            b
[99999999],*    y

,*              A
,*              n
[256],**        a
,               i
,               s
;
#include<stdio.h>
#define u(w,u)(i>w&&i<u)
#define o else if 
int main(int c,char**v){y=b;A=b+99969999;a=n;FILE*x=fopen(v[1],"r");while(~(i=fgetc(x)))*(y++)=i;fclose(x);*y=0;y=b;while((i=*y++))if(i==44)*A=getchar();o(i==46)putchar(*A);o u(59,63)A+=i-61;o u(42,46)*A-=i-44;o(i==91)if(s=1,*A)*(++a)=y;else while(s&&(i=*y++)){if u(90,94)s-=i-92;}o(i==93){if(*A)y=*a;else--a;}}
