 #include<stdio.h>
 #include<conio.h>
 void main()
 {//file handling
 	FILE *fp;
 	char str[50];//reading file
 	fp=fopen("first.txt","r");//"name",mode;
    if(fp==NULL)
    printf("does not exit");
    else
    {
    	printf("file is created");
    	
	}
	//fprintf(fp,"This is my first programming lanuage,then i know lanuage for c,c++,java and finally CEH");
	while( fscanf(fp,"%s",str)!=EOF ) //end of file
	{
		printf("%s ",str);
	}
	
	fclose(fp);

 }
