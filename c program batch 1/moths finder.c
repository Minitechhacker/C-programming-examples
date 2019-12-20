int main()
{
	int month;
	printf("\n enter the month number:");
	scanf("%d",&month);
	switch(month)
	{
		case 1: printf("\n it is JAN");
		break;
		case 2: printf("\n it is FEB");
		break;
		case 3:printf("\n it is MAR");
		break;
		case 4: printf("\n it is APR");
		break;
		case 5: printf("\n it is MAY");
		break;
		case 6: printf("\n it is JUN");
		break;
		case 7: printf("\n it is JULY");
		break;
		case 8: printf("\n it is AUG");
		break;
		case 9:printf("\n it is SEP");
		break;
		case 10: printf("\n it is OCT");
		break;
		case 11: printf("\n it is NOV");
		break;
		case 12:printf("\n it is DEC");
		break ;
		default :printf("\n invalid input");
	}
	return 0;
	}

