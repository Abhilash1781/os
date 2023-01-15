#include<stdio.h>
#include<string.h>
int main()
{
int nf=0,i=0,j=0,ch;
char mdname[10],fname[10][10],name[10];
printf("\nEnter the directory name:");
scanf("%s",mdname);
printf("\nEnter the number of files:");
scanf("%d",&nf);
do
{
printf("\nEnter file name to be created:");
scanf("%s",name);for(i=0;i<nf;i++)
{
if(!strcmp(name,fname[i]))
break;
}
if(i==nf)
{
strcpy(fname[j++],name);
nf++;
}
else
printf("\nThere is already %s\n",name);
printf("\nDo you want to enter another file(yes - 1 or no - 0):");
scanf("%d",&ch);
}
while(ch==1);
printf("\n\nDirectory name is:%s\n",mdname);
printf("\nFiles names are:");
for(i=0;i<j;i++)
printf("\n%s",fname[i]);
return 0;
}
