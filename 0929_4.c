#include <stdio.h>
int main()
{
   int card=5;
   int park=1<<2;
   int office=1<<3;
   printf("停車場的權限：%d\n",park);
    printf("學生有無停車場權限：%d\n",card&park);
    printf("學生有無老師辦公室權限：%d\n",card&office);
    return 0;
}