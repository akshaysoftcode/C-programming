#include<stdio.h>

int formNumber()
{
  int n,s=0;
  scanf("%d",&n);
  for(int i=n;i>=1;i--)
  {
    int a, z=1;
    scanf("\n%d",&a);

    if(i!= 1)
    {
        for(int j=i;j>1;j--)
            {
                z=z*10;
            }
    }

    else if(i==1)
    {
    z=1;
    }

    s+=a*z;
  //  printf("\n%d",s);
  }
  return s;

}
int main()
{
  int no;
  no=formNumber();
  printf("\n%d",no);

  return 0;
}
