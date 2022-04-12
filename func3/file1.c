#include<stdio.h>
#include<stdlib.h>

int func1(int a,int b,int *c){
if (b==0){
return -1;
}
*c=a%b;
printf("baghimande is:%d\n",*c);
return 0;
}

int func2(int a,int b,int *c){
 if (a>b) {
  *c=a;
  printf("max is:%d\n",*c);
}
  else if (a<b) {
    *c=b;
    printf("max is:%d\n",*c);
   }
    else{
     printf("equal\n");
     return -1;
      }
      return 0;
}

int func3(int *max,int* m){
int i=31;
printf("enter 32 numbers:\n");
for(i=0;i<=31;i++){
scanf("%d",&m[i]);
}
*max=m[0];
for(i=1;i<=31;i++){
if(*max<m[i])
	 *max=m[i];       
 }    
printf("max:%d\n",*max);
return 0;
}


 
