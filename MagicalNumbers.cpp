#include<stdio.h>
#include<conio.h>
int sum_of_digits(int num);
int reverse_number(int sum);
main(){
	int num,rev,sum=0;
	scanf("%d",&num);/*1234*/
	sum=sum_of_digits(num); /* 10*/
	printf("%d",sum);

	rev=reverse_number(sum);/* 01*/
	printf("%d",rev);	
	
	if((sum*rev)==num){
		printf("\nit is magical no.");
	}else{
		printf("\nit is not magical");
	}

getch();
}

int sum_of_digits(int num){
	int sum,rem;
	while(num>0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	return sum;
}
int reverse_number(int sum){
	int rev,rem;
	while(sum>0){
		rem=sum%10;
		rev=(rev*10)+rem;
		sum=sum/10; 
	}
	return rev;
	}
