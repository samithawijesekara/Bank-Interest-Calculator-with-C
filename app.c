#include <stdio.h>
int main(){



//Headding	
	printf("\n\n\t\t    -------------------------\n");
	printf("-------------------- BANK INTREST CALCULATER --------------------\n");
	printf("\t\t    -------------------------\n\n");




//Choose your acc type
int num;

	printf("\t\t01. Savings Account\n");
	printf("\t\t02. Term Diposit Account\n\n\n");
	printf("\tChoose your Account Type :\n");
	scanf("%d",&num);


		
	if(num == 1){




//Savings acc calculater

float samount,sintrest,stoty,stotm;

printf("-------------- SAVINGS ACCOUNT INTREST CALCULATER --------------\n\n");

	printf("Enter the amount (Rs) : ");
	scanf("%f",&samount);

	printf("Enter the intrest rate: ");
	scanf("%f",&sintrest);

stoty=(samount*sintrest)/100;
stotm=(samount*sintrest)/1200;

printf("\n* You will earn %.2f Rs intrest per year. \n",stoty);
printf("\n* You will earn %.2f Rs intrest per month. \n\n",stotm);


//Footer	
	printf("\n\t\t       -------------------\n");
	printf("----------------------- T H A N K   Y O U -----------------------\n");
	printf("\t\t       -------------------\n\n");
}



		else if(num == 2){



//Term diposit calculater

float tamount,tintrest,ttoty,ttotm,tot;
int tyears;


printf("--------------- TERM DIPOSIT INTREST CALCULATER ---------------\n\n");

	printf("Enter the amount (Rs) : ");
	scanf("%f",&tamount);

	printf("Enter the intrest rate: ");
	scanf("%f",&tintrest);

	printf("Enter the years       : ");
	scanf("%d",&tyears);

ttoty=(tamount*tintrest*tyears)/100;
ttotm=ttoty/(tyears*12);
tot=tamount+ttoty;


printf("\n* You will earn %.2f Rs intrest for the %d year/s. \n",ttoty,tyears);

printf("\n* Your total balance after the %d year/s is %.2f Rs.\n",tyears,tot);

printf("\n* You can get %.2fRs intrest per monthly during the term period.\n(This option is valid to customer who is diposit the money for maturity intrest rate. That means monthly get his/her intrest..!!)\n\n",ttotm);

//Footer	
	printf("\n\t\t       -------------------\n");
	printf("----------------------- T H A N K   Y O U -----------------------\n");
	printf("\t\t       -------------------\n\n");
}

	else {

//When user enter the wrong number...

printf("Plese choose your account type correctly..!!\n\n");

	printf("\n\t\t       -------------------\n");
	printf("----------------------- T H A N K   Y O U -----------------------\n");
	printf("\t\t       -------------------\n\n");


}


return 0;
}
