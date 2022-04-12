#include <stdio.h>
#include "file2.h"
#include "file1_func3.h"

int main()
{
	int a,b,c,d,e,f;
	int max,m[31]={0};
	int func_type=1;
	while (func_type)  {
	printf("enter functype-> 1:taghsim or 2: max, 3:func3max\n");
	scanf("%d",&func_type);
	if ((func_type==1) || (func_type==2)){
	printf("%d",func_type);
	printf("enter 2numbers:\n");
	scanf("%d\n",&a);
	scanf("%d",&b);
	func4(func_type,a,b,&c);
	}
		else if (func_type==3){
	 func3(&max,m);
	}
	//return 0;
	}
}

