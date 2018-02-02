#include<stdio.h>
int main()
{
	int a[100],i,n,max,l,b,j;
	
	scanf("%d",&n);
	
	for(i=0 ; i <n ;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0 ; i<n ;i++){
		for(j=i ; j<n ; j++){
			if(a[i] < a[j]){
				b=a[i];
				a[j]=a[i];
				a[i]=b;
			}
		}
	}
			for(i=0 ; i<n ;i++){

			printf("%d",a[i]);
		}
		}
		
	
