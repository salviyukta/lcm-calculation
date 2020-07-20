//CHALLENGE = RECURSION FUNCTION
//to find lcm of 2 numbers using recursion function


#include<stdio.h>
int r(int num1,int num2,int t)//formal parameter
{
	//3. to find the hcf of the number - base condition
	if((num2%t==0)&&(num1%t==0))
	{
		int a = num1/t;
		return (num2*a);
	}
	//4. recursion condition 
	 else  
	   return r(num1,num2,t-1);

}
main()
{
	int n1,n2,p;
	//1. Take a input from the user
	printf("Enter any 2 numbers of which lcm you wish to find: \n");
	scanf("%d%d",&n1,&n2);
	//2. Pass the number as an argument in recursion function
	p = n1>n2?r(n1,n2,n2):r(n2,n1,n1);/*actual parameter are passed through ternary operator in such a way that that 1st parameter 
	is a larger number*/
	//5. print lcm of both numbers using recursion function return value
	printf("LCM of %d and %d is %d\n",n1,n2,p);
	return 0;
}
