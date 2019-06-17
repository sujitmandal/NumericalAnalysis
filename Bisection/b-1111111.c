/* METHOD : BISECTION METHOD */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float y);
int main()
{
	int n=0;
	float a,b,c,x=0;
	printf("enter the value of a : ");
	scanf("%f",&a);
	printf("\nenter the value of b : ");
	scanf("%f",&b);
	printf("----------------------------------------------------------------------------\n");
	printf("n\t      a\t                   b\t            x\t           f(x)\t\n");
	printf("----------------------------------------------------------------------------\n");
	do
	{
		c=x;
		x=(a+b)/2;
	    printf("%d\t  %f\t	%f\t %f\t %f\n",n,a,b,x,f(x));
		if(f(a)*f(x)<0)
		{
			b=x;
		}
		else
		{
			a=x;
		}
		n=n+1;
	}while(fabs(x-c)>0.00001);
	printf("the approximate value is %f",x);
	getch();
}
float f(float y)
{
                 float u;
                 u=y*exp(y)-1;
                 return(u);
}

/* OUTPUT: enter the value of a and b0
1
----------------------------------------------------------------------------
n             a                    b                x              f(x)
----------------------------------------------------------------------------
0         0.000000              1.000000         0.500000        -0.175639
1         0.500000              1.000000         0.750000        0.587750
2         0.500000              0.750000         0.625000        0.167654
3         0.500000              0.625000         0.562500        -0.012782
4         0.562500              0.625000         0.593750        0.075142
5         0.562500              0.593750         0.578125        0.030619
6         0.562500              0.578125         0.570313        0.008780
7         0.562500              0.570313         0.566406        -0.002035
8         0.566406              0.570313         0.568359        0.003364
9         0.566406              0.568359         0.567383        0.000662
10        0.566406              0.567383         0.566895        -0.000687
11        0.566895              0.567383         0.567139        -0.000013
12        0.567139              0.567383         0.567261        0.000325
13        0.567139              0.567261         0.567200        0.000156
14        0.567139              0.567200         0.567169        0.000072
15        0.567139              0.567169         0.567154        0.000029
16        0.567139              0.567154         0.567146        0.000008
the approximate value is 0.567146 */






