#include<stdio.h>
int main()

{
	int totalmarks=600;
	int a,b,c,e,f,g,sum;
	float percentage;
	printf("enter the marks of a:");
	scanf("%f",&a);
	printf("enter the marks of b:");
	scanf("%f",&b);
	printf("enter the marks of c:");
	scanf("%d",&c);
	printf("enter the marks of e:");
	scanf("%d",&e);
	printf("enter the marks of f:");
	scanf("%d",&f);
	printf("enter the marks of g:");
	scanf("%d",&g);
	sum=a+b+c+e+f+g;
	percentage=((sum/600)*100);
	printf("percentage=%2f%%",percentage);
	if(percentage>=90)

{
		

	printf("well done");
}
	else
	{
	
	printf("\nyou need improvement");
	
}

}

