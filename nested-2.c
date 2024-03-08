#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("enter value a=");
	scanf("%d",&a);
	
	printf("enter value b=");
	scanf("%d",&b);
	
	printf("enter value c=");
	scanf("%d",&c);
	
	printf("enter value d=");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
		   if(a>d)
		   {
		   	    printf("a is max");
		   }
		   else
		   {
		   	    printf("d is max"); 
			}	
		}
		else
		{
		   if(c>d)
		   {
		   	printf("c is max");
		   }
		   else
		   {
		   	printf("d is max");
		   }
		}	
	}
		
	else
	{
		if(b>c)
		{
		    
		   if(b>d)
		   {
		    	printf("b is max");
		   }
		   else
		   {
		   	    printf("d is max");
		   }
		}
		else
		{
			if(c>d)
			{
				printf("c is max");
			}
			else
			{
				printf("b is max");
			}
		}
	}
	
}