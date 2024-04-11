/* cv3_4 functions */
#include <stdio.h>

#define  MAXLINE  100 /* max. dlzka vstupn. riadku */

int getlinee(char s[],int lim);
void copy(char s1[], char s2[]);

void main(void)
{
  int len,max;   /* dlzka bezneho a max. riadku */
  char line[MAXLINE], save[MAXLINE];

  max=0;
  while((len=getlinee(line,MAXLINE))>=0)
  {
    if (len > max)
    {
      max=len;
      copy(line,save);
    }
  }

  if(max > 0)
  printf("Najdlhsi riadok : %s\n",save);
  printf("Jeho dlzka   : %d\n",max);
}

int getlinee(char s[],int lim)
{
  int c,i;

  for(i=0;i<lim-1&&(c=getchar())!='k'&&c!='\n';i++) s[i]=c;
  if(c=='\n')
  {
    s[i]=c;
    i++;
  }
  s[i]='\0';
  return(i);
}

void copy(char s1[], char s2[])
{
  int i=0;

  while((s2[i]=s1[i])!='\0') i++;
}
