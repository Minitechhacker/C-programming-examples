 #include<stdio.h>
 #include<conio.h>
 void main()
 {//file handling 
 	FILE *fp;
 	char c;
 	fp=fopen("bc.txt","r");//"name",mode;
    if(fp!=NULL)
    {
	
    printf("file open succesfully\n");
     while(1)
     {
	c=fgetc(fp);
	if(c==EOF)
	break;
	putchar(c);
	}
}
    else
    {
    	printf("file is created");
    	
	}
	//fprintf(fp,"This is my first programming lanuage,then i know lanuage for c,c++,java and finally CEH");
	fclose(fp);

 }
