 /* 1
      #include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("enter a niumbers");
    scanf("%d",&x);
    y=x%10;
    printf("%d",y);
    return 0;
}*/
/* 2.
#include<stdio.h>
int main()
{
    int x=123;
    x=x/10;
    printf("%d",x);
    return 0;
}*/
/* 3.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter ywo numbers");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n a=%d b=%d c=%d",a,b,c);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two numbers ");
    scanf("%d %d",&x,&y);
    printf("a=%d and b=%d",x,y);
   x=x+y;
   y=x-y;
   x=x-y;
    printf("\f a=%d and b=%d",x,y);
    return 0;
}*/
/* 5
#include<stdio.h>
int main()
{
    int x,sum=0,rem=0;
    printf("enter three digit numbers");
    scanf("%d",&x);
    rem=x%10;
    x=x/10;
    sum=sum+rem;
     rem=x%10;
    x=x/10;
    sum=sum+rem;
    rem=x%10;
    x=x/10;
    sum=sum+rem;
    printf("%d",sum);
    return 0;
}*/
/* 6.
#include<stdio.h>
int main()
{
    char x='W';
    printf("%d",x);
    return 0;
}*/
/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,count=0,result=0;
    printf("enter a numbers");
    scanf("%d",&x);
    while(x!=0)
    {
        result=x&1;
        count++;
        if(result==1)
        {
            printf("%d ",count);
            break;
        }
        x=x>>1;
    }
    getch();
}*
/*  8
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a numbers");
    scanf("%d",&x);
    y=x&1;
    if(y==1)
    {
        printf("odd");
    }
    else
        printf("even");
    return 0;
}*/
/* 9.
#include<stdio.h>
int main()
{
    double x;
    x=sizeof(x);
    printf("%lf",x);
    return 0;
}*/
/* 10.
#include<stdio.h>
int main()
{
    int x=2345;
    printf("a=%d",x);
    x=x/10;
    x=x*10;
    printf("\n%d",x);
    return 0;
}*/
/*11.
#include<stdio.h>
int main()
{
    int x,num;
    printf("enter a numbers");
    scanf("%d",&x);
    printf("a=%d",x);
    printf("\n\n enter a digit numbers");
    scanf("%d",&num);
    printf("b=%d",num);
    x=x*10;
    num=x+num;
    printf("\n%d",num);
    return 0;
}*/
/*  12.
#include<stdio.h>
int main()
{
    int x;
    float a;
    printf("enter a numbers ");
    scanf("%d",&x);
    a=x*1/76.23;
    printf("%f",a);
    return 0;}
  } */

/* 13.
#include<stdio.h>
int main()
{
    int a=123,b,c;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    b=b*10+c;
    a=b*10+a;
    printf("%d",a);
    return 0;

}*/
