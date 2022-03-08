#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <stdio.h>

 //long double fibonacci
 long long int fibonacci(long long int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
} 

long long int main(){ 
	int n;
	long long int i,r; 
	FILE * fp;
        char fName[300];
	printf("Enter the number of element you want in series :\n"); 
	    scanf("%d",&n); 
	printf("Enter file name to create :");
              scanf("%s",fName);
       fp=fopen(fName,"w");
        if (fp == NULL)
    {
        printf("File does not exist.\n");
        //return;
        }
	printf("fibonacci series is : \n");
	
	for(i=0;i<n;i++) { 
		r=fibonacci(i);
		printf("%lld \n",r);
		fprintf(fp, "%lld\n",r);
		}
	           fclose(fp);
        printf("File writed success.\n");

      }
 

