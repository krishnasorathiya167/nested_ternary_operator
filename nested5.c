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
	
	if(a<b)
	{
	   if(a<c)
	   {
	   	    if(a<d)
	   	    {
	   	    	if(a<e)
	   	    	{
	   	    	  	printf("A is min");	
				}
				else
				{
					printf("E is min");
				}
		    }
		    else
		    {
		     	if(d<e)
				{
				 	printf("D is min");	
				}
				else
				{
					printf("E is min");
				}	
			}
	   }
	   else
	   {
	   		if(c>d)
	   		{
	   			if(c<e)
				{
				 	printf("C is min");  	
				}
				else
				{
					printf("E is min");
				}		
			}
			else
			{
				if(d<e)
				{
					printf("D is min");	
				}
				else
				{
					printf("E is min");	
				}	
			}
	   }	
	}
	else
	{
		if(b<c)
	   {
	   	    if(b<d)
	   	    {
	   	    	if(b<e)
	   	    	{
	   	    	  	printf("B is min");	
				}
				else
				{
					printf("E is min");
				}
		    }
		    else
		    {
		     	if(d<e)
				{
				 	printf("D is min");	
				}
				else
				{
					printf("E is min");
				}	
			}
	   }
	   else
	   {
	   		if(c>d)
	   		{
	   			if(c<e)
				{
				 	printf("C is min");  	
				}
				else
				{
					printf("E is min");
				}		
			}
			else
			{
				if(d<e)
				{
					printf("D is min");	
				}
				else
				{
					printf("E is min");	
				}	
			}
	   }	
	}
}