#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("Enter Value Of A =");
	scanf("%d",&a);
	printf("Enter Value Of B =");
	scanf("%d",&b);
	printf("Enter Value Of C =");
	scanf("%d",&c);
	printf("Enter Value Of D =");
	scanf("%d",&d);
	printf("Enter Value Of E =");
	scanf("%d",&e);
	
	(a>b) ? (a>c) ? (a>d) ?  (a>e) ? printf("A is Max"):printf("E is Max") :(d>e) ? printf("D is max"): printf("E is Max") : (c>d) ?(c>e)? printf("C is max"): printf("E is Max"):(d>e)? printf("D is max"):printf("E is max")  
	      : (b>c) ? (b>d) ?  (b>e) ? printf("B is Max"):printf("E is Max") :(d>e) ? printf("D is max"): printf("E is Max") : (c>d) ? (c>e)? printf("C is max"): printf("E is Max"):(d>e)? printf("D is max"):printf("E is max"); 
}