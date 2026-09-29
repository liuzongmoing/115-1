#include <stdio.h>
int main()
{
   int 目前客廳設備=9;
   int 目前臥室設備=5;
   int 目前廚房設備=2;
   int 現在設備=13;
   printf("目前客廳設備:%d\n",現在設備&目前客廳設備);
   printf("目前臥室設備:%d\n",現在設備&目前臥室設備);
   printf("目前廚房設備:%d\n",現在設備&目前廚房設備);
   printf("現在設備:%d\n",現在設備^目前廚房設備);
    
    return 0;
}