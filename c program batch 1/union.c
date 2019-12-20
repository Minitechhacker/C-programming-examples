 #include<stdio.h>
 #include<conio.h>
 
 union un
 {
 	int a;
 	char b;
 	float d;
 };
 void main()
 {
 	union un o;
 	
 	
 	o.a=10;
 	o.b='m';
 	o.d=20.25;
 	printf("\n%d",o.d);
 	printf("\n%c",o.b);
 	printf("\n%f",o.a);
 	
 }
