#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fptr;

char filename[100], c;
printf("Enter the filename to open for reading: \n");
scanf("%s", filename);
fptr=fopen(filename,"r");
if(fptr==NULL)
{
 printf("Cannot open file %s \n",filename);
 exit(0);
}

int newl=0;
char opt;

int flag=0;

while(c!=EOF)
{
 if(newl==5&&flag==0)
 {
  printf("\nC or Q?");
  scanf(" %c",&opt);
  flag=1;
  if(opt=='q')
  exit(0);
  else
  {
  	newl++;
  }
 }
 
 if(c=='\n')
 newl++;
	
 if(flag==1)
 {
 	newl=0;
 	flag=0;
 }

 printf("%c",c);
 c=fgetc(fptr);

}




return 0;
}
