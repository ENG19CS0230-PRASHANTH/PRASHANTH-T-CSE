//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
Int main()
{
Float h,b,d,vol;
printf(“Enter height,breadth,depth :”);
scanf(“%f%f%f”,&h,&b,&d);
vol=((h*d)+d)/(3*b);
printf(“volume of the tromboloid is %f”,vol);
return 0;

}



