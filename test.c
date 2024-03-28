#include <stdio.h>
#define a x
int x = 12;
void b(){x = a * 2;printf("%d\n",x);}
void c(){int a = x + 3;b();printf("%d\n",a + 1);}
int main(){b();c();while(1){}}