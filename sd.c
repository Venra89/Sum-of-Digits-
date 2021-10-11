#include <stdio.h>

int main(void) {
	// your code goes here

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int val,sum=0,rem=0,temp=0;
	   scanf("%d",&val);
	   while(val>0){
	    rem=val%10;
	    sum=sum+rem;
	    val=val/10;
	       
	   }
	   sum=sum+temp;
	   printf("%d",sum);
	   printf("\n");
	}
	return 0;
}

