 #include<stdio.h>
 #include<conio.h>
 void main()
 {//file handling 
 	FILE *fp;
 	char ch[100]="minidurai";
 	int i;
 	fp=fopen("bc.txt","w");//"name",mode;
    if(fp!=NULL)
    {
	
    printf("file open succesfully");
    for(i=0;ch[i] !='\0';i++)
    {
	
	fputc(ch[i],fp);

}
}
    else
    {
    	printf("file is created");
    	
	}
	//fprintf(fp,"This is my first programming lanuage,then i know lanuage for c,c++,java and finally CEH");
	fclose(fp);

 }
