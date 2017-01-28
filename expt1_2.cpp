#include<stdio.h>
#include<string.h>
struct A
{
	int a;
	float b;
	char c[5];
}s1;
union B
{
	int a;
	float b;
	char c[5];
}u1;
int main()
{
	s1.a=2;
	s1.b=3;
	strcpy(s1.c,"ABCD");

	u1.a=10;
	u1.b=6;
	strcpy(u1.c,"PQRS");

	printf("Structure output:\na=%d\nb=%f\nc=%s",s1.a,s1.b,s1.c);
	printf("\n\nUnion output:\na=%d\nb=%f\nc=%s",u1.a,u1.b,u1.c);
	 
	 printf("\n\nsize of s1=%ld",sizeof(s1));
	printf("\n\nsize of u1=%ld",sizeof(u1));
	return 0;
}
	
