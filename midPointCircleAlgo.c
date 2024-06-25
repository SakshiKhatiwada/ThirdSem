#include<stdio.h>
#include<graphics.h>

int main ()
{
    int gd=DETECT, gm;
    initgraph (&gd, &gm, C:\\turboc3\\bgi);
    int x, h,k,p;
    float r, y;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    printf("Enter the center of the circle (h,k): ");
    scanf("%d%d",&h,&k);

    //initialization
    p=1-r;
    x=0;
    y=r;
    while (x<=y)
    {
        putpixel(x+h,y+k);
        putpixel(-x+h,y+k);
        putpixel(x+h,-y+k);
        putpixel(-x+h,-y+k);
        putpixel(y+h,x+k);
        putpixel(-y+h,x+k);
        putpixel(y+h,-x+k);
        putpixel(-y+h,-x+k);

        if (p>0)
            p=p+ 2*(x-y) + 5;
        else {
            p= p+2*x+3;
            y--;
        }
        x++;
    }
return 0;
}