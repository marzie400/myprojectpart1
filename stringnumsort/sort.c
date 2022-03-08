#include <stdio.h>
#include <string.h>

char reverse(char n){
 char str[11],rev[11];
  int  i,j;
  int count=0;
scanf("%s", str);
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  //reversing the string by swapping
  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }
  printf("\n%s\n", rev);
}
char ascdesc(char n){
  char str[11],ch;
  int  i,j,l;
  int count=0;
       l=strlen(str);
  /* sorting process */
  for(i=1;i<l;i++){
    for(j=0;j<l-i;j++){
	if(str[j]>str[j+1])
	{
	  ch=str[j];
	  str[j] = str[j+1];
	  str[j+1]=ch;
	}
    }
}
   printf("%s\n",str);
     for(i=0; i<l; i++)
    { 
        for(j=0; j<(l-1); j++)
        {
            if(str[j]<str[j+1])
            {
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    printf("%s\n",str);
       }
  
   void main()
{
char n;
reverse(n);
ascdesc(n);

}
  
