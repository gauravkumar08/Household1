#include <stdio.h>

 int main()
{
	int h_rent,health,education,expenses,savings,tar_percent,income,g_bill,i_bill,e_bill,insurance,other;
	float act_percent;
	char name[30];

    printf("**************************************************\n");

    printf("                  Consumer Details                \n");

    printf("**************************************************\n");

    printf("Enter your name (max 30 characters) : ",name);
	fgets(name,"30",stdin);

    printf("Enter monthly income  in rupees : ");
	scanf("%d",&income);

    printf("Enter goal for your savings ( in percent ) : ");
	scanf("%d",&tar_percent);

	printf("--------------------------------------------------\n");

	printf("       Please Enter Your Expenses                 \n");

	printf("--------------------------------------------------\n");
	printf("Enter house rent in rupees: ");
	scanf("%d",&h_rent);


	printf("Enter grocery expenses in rupees : ");
	scanf("%d",&g_bill);


	printf("Enter electricity bill cost in rupees : ");
	scanf("%d",&e_bill);


	printf("Enter internet bill cost in rupees : ");
	scanf("%d",&i_bill);


	printf("Enter monthly insurance amount in rupees : ");
	scanf("%d",&insurance);


    printf("Enter health expenses in rupees : ");
	scanf("%d",&health);


    printf("Enter education expenses in rupees : ");
	scanf("%d",&education);


	printf("Enter other expenses in rupees : ");
	scanf("%d",&other);


	printf("-------------------------------------------\n");


	expenses = h_rent + g_bill + e_bill + i_bill + insurance + other;

	savings = income - expenses;
	printf("Your Total expenses of this month : %d \n",expenses);

	if(income > expenses)
	printf("savings this month : %d\n\n",savings);

	else if(income < expenses)
	printf("you are short of amount : %d\n\n",-savings);

	else if(income = expenses)
	printf("you have used up your income...\n\n");

	act_percent=(float)savings/income*100;
	if(tar_percent > act_percent)
    {
	printf("you have spent more than your goal ..\n");
	printf("your goal ( in % ) : %d\n",tar_percent);
	printf("your actual saving ( in % ) : %.3f%%\n",act_percent);

	}
	else if(tar_percent <= act_percent)
    {
	printf("you have achieved your goal this month..\n");
	printf("your goal ( in percent ) : %d\n",tar_percent);
	printf("your actual saving ( in % ) : %.3f%%\n",act_percent);
	}

}
