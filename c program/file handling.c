 #include<stdio.h>
 #include<conio.h>
 void main()
 {//file handling
 	FILE *fp;
 	fp=fopen("first.txt","w");//"name",mode;
    if(fp==NULL)
    printf("does not exit");
    else
    {
    	printf("file is created");
    	
	}
	fprintf(fp,"This is my first programming lanuage,then i know lanuage for c,c++,java and finally CEH");
	fclose(fp);

 }
