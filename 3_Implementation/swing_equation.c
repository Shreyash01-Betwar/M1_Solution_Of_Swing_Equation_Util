// Program to calculate the value of the omega and delata which will help the synchronous machine will  to get back to steady state
/**
 * @file swing_equation.c
 * @author your name (you@domain.com)
 * @brief program to solve the swing equation using the modified eulars method to obatain the values of the omega and delta which will help the synchronous machine to get to its steady state
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>     
#include <stdlib.h>     
#include <math.h>
float D1_Function(float w0) 
{    int temp;    
		temp=w0;    
		return temp;
}
float D2_Function(float pm, float pmax, float d0,float M) 
{  	  float temp;    
	 temp=(pm-(pmax*(sin(d0))))/M;    
	 return temp;
}
float dp_Function(float d0,float t,float D1) 
{    	float temp;    
	temp=d0+D1*t;    
	return temp;
}

float wp_Function(float w0,float t,float D2) 
{    	float temp;   
 	temp=w0+D2*t;    
	return temp;
}

float D1P_Function(float wp) 
{      float temp;    
	temp=wp;   
 	return temp;
}
float D2P_Function(float pm, float pmax, float d0,float M)
{   	 float temp;    
	temp=(pm-(pmax*(sin(d0))))/M;    
	return temp;
}

float Delta_Function(float d0, float D1, float D1P,float t) 
{    	float temp;    
	temp=d0+((D1+D1P)/2)*t;    
	return temp;
}


float Omega_Function(float w0, float D2, float D2P,float t) 
{    float temp;   
 temp=w0+((D2+D2P)/2)*t;    
return temp;
}
int main () //Main Function
{	int H,f,i;
	float pe,pmax,pm,t,d0,w0=0,D1,D2,dp,wp,D1p,D2p,d1,w1,M,G=1,d2,w2,inc;
	printf("Enter value H (Inertia constant)\n");
	scanf("%d",&H);
	printf("Enter value f (Frequency)\n");
	scanf("%d",&f);
	printf("Enter value pe (Electrical Output power)\n");
	scanf("%f",&pe);
	printf("Enter value pmax\n");
	scanf("%f",&pmax);
	printf("Enter value delta (Time Step)\n");
	scanf("%f",&t);printf
	("Enter value of mechanical Output power when subject to disturbance (Pm)\n");
	scanf("%f",&pm);
printf("The Synchronous Machine Characteristics");
printf("Electrical Input Power=%f\n",pe);
printf("Mechanical Output Power=%f\n",pm);
inc=pm-pe;
printf("Error that has occurred due to disturbance=%f\n",inc);
M=G*H/3.142/f;d0=asin(pe/pmax);
printf("The initial value of Delta = (d0)=%f\n",d0);
printf("The initial value of Omega = (w0)=%f\n",w0);
for(i=0;i<10;i++)
{   	 D1=D1_Function(w0);    
	D2=D2_Function(pm,pmax,d0,M);    
	dp=dp_Function( d0, t, D1);   
	 wp=wp_Function( w0, t, D2);   
 	D1p=D1P_Function( wp);    
	D2p=D2P_Function( pm,  pmax,  d0, M);    
	d1=Delta_Function( d0,  D1,  D1p, t);    
	w1=Omega_Function( w0,  D2,  D2p, t);    
	printf("\n\nOutput\n\n");   
 	printf("For The %d Iteration The Values Calculated are\n",i+1);    	printf("\nD1=%f\nD2=%f\ndp=%f\nwp=%f\nD1p=%f\nD2p=%f\nd%d=%f\nw%d=%f\n\n\n\n",D1,D2,dp,wp,D1p,D2p,i+1,d1,i+1,w1);    
if(d1==d0 && w1==w0)    
{    exit(0);    
}    
d0=d1;    
w0=w1;
}
