#include<stdio.h>
#include<math.h>
int main()
{
	int deduction;
	double salary,rate,tax;
	printf("Enter the salary: ");
	scanf("%lf",&salary);
	if(salary<=3500)
		{rate=0;deduction=0;}
	else if(salary>3500&&salary<=5000)
		{rate=0.03;deduction=0;}
	else if(salary>5000&&salary<=8000)
		{rate=0.1;deduction=105;}
	else if(salary>8000&&salary<=12500)
		{rate=0.2;deduction=555;}
	else if(salary>12500&&salary<=38500)
		{rate=0.25;deduction=1005;}
	else if(salary>38500&&salary<=58500)
		{rate=0.3;deduction=2755;}
	else if(salary>58500&&salary<=83500)
		{rate=0.35;deduction=5505;}
	else
		{rate=0.45;deduction=13505;}
	tax=rate*(salary-3500)-deduction;
	printf("tax=%.2lf",tax);
	return 0;
}
	
	
	
