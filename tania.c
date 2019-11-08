#include<stdio.h>

float media_et(int m[101], int p)
{
 int i; float md=0;
 for(i=0;i<p;i++)
    md=md+m[i];

 return md/p;

}


