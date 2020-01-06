#include<stdlib.h>
int main()
 {
   int a = 7;
   char c ='m';
   float b = 7.6;
   void *p;
   p = &a;
 //  p = &b;
   printf("Integer variable is = %d", *( (int*) p) );
  p = &b;
   printf("\nFloat variable is = %f", *( (float*) p) );
   p =&c;
   printf("\nchar variable is = %c", *( (char*) p) );
   
   return 0;
}
