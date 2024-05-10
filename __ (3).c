#include <stdio.h>
float p(int x,int n) {
    if(n<0)
    {   return (0);
    }
    if(n==0)
    {   return (1);
    } else if(n==1)
    {   return (x);
    } else
    {
        return (((2*n-1)*x-p(x,n-1)-(n-1)*p(x,n-2))/n);

    }

};
int main(int argc, char** argv) {
    float p(int x,int n);
    int n,x;
    float m;
    scanf("%d,%d",&n,&x);
    if(n<=0)
    {   printf("error");
    } else if(n==0)
    {   m=1;
        printf("1");
    } else if(n==1)
    {   m=x;
        printf("%.2f",m);
    } else
    {   printf("%.2f",p(x,n));
    }
    return 0;
}


