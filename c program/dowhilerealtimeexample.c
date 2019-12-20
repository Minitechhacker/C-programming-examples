#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,net=0,qty,amt,i;
	printf("mini hotel's");
	do
	{
	printf("\n1.dosai");
	printf("\n2.chapathi");
	printf("\n3.itlly");
	printf("\n4.vadi");
	printf("\nenter your choice:");
	scanf("\n%d:",&ch);
	switch(ch)
	{
		case 1:
			printf("\n Dosai qty : ");
			scanf("%d",&qty);
			amt=qty*10;
			net=net+amt;
			break;
			case 2:
				printf("\n chapathi qty :");
				scanf("%d",&qty);
				amt=qty*15;
				net=net+amt;
				break;
				case 3:
					printf("\n itlly qty :");
					scanf("%d",&qty);
					amt=qty*5;
					net=net+amt;
					break;
					case 4:
						printf("\n vadi qty :");
						scanf("%d",&qty);
						amt=qty*5;
						net=net+amt;
						break;
						default:
							printf("invalid food,so choice valid food");
						    break;
						}
						printf("\n want more press :1 or no press :0 :");
						scanf("%d",&i);
					}while(i==1);
					printf("\nnet amt : %d",net);
					getch();
	}
	
	
	


