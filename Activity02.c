#include<stdio.h>
int main()
{
    float h,l,w,SURFACE,VOLUME;
    printf("ENTER THE LENGTH,WIDTH,HEIGHT:");
    scanf("%f%f%f",&l,&w,&h);
    SURFACE=((2*l*w)+(2*l*h)+(2*w*h));
    VOLUME=(l*w*h);
    printf("THE SURFACE OF RECTANGLER SOLID IS:%.2f\n",SURFACE);
    printf("THE VOLUME OF THE RECTANGLER SOID IS:%.2f\n",VOLUME);
    return 0;

}