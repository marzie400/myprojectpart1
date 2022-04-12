#include <stdio.h>
#include "file1_func12.h"
 int func4(int f_name, int a , int b, int* c){

//printf("which function?:%d\n",f_name);
if (f_name==1){
return func1(a,b,c);
 }
 else if (f_name==2){
return func2(a,b,c);
}
 return 0;

}
