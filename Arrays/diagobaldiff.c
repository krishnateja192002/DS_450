#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&i);
     int n = i;
    int a[i][i],sum1 = 0,sum2 = 0;
    for(j=0;j<i;j++)
    {
      for(k=0;k<i;k++)
      {
          scanf("%d",&a[j][k]);
      }
    }
      for(j=0;j<i;j++)
    {
      for(k=0;k<i;k++)
      {
          if(j==k)
          sum1 = sum1 + a[j][k];
          else if((j+k)==(i-1) ){
          sum2 = sum2 + a[j][k];

          }

      }
    }
    printf("%d",n);

    if(n%2 != 0)
    {
        j = (i-1)/2;
        sum2 = sum2 + a[j][j];
    }

    int dif;
    dif = sum2 - sum1;
    if(dif<0)
    dif = -dif;
    printf("%d",dif);

}
