 #include<stdio.h>
 #include<conio.h>
 void main()
 {//file handling 
 	FILE *fp;
 	char ch;
 	fp=fopen("df.txt","w");//"name",mode;
    if(fp!=NULL)
    {
	
    printf("file open succesfully\n");
    printf("enter the char");
    ch=getchar();
    fputc(ch,fp);

}
    else
    {
    	printf("file is created");
    	
	}
	//fprintf(fp,"This is my first programming lanuage,then i know lanuage for c,c++,java and finally CEH");
	fclose(fp);

 }
