//Transformation: Rotating through angle theta
#include<iostream>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;

int main ()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    float angle, theta;
    int gd=DETECT, gm;
    // const char *title;

    // initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    initwindow(900,850);

// cout<<"Hello world\n";
    cout<<"Enter the first point of the line: ";
    cin>>x1>>y1;  

    cout<<"Enter the last point of the line: ";
    cin>>x2>>y2;

    cout<<"Enter the rotation angle: ";
    cin>>angle;

    setcolor(5);
    line(x1,y1,x2,y2);
    outtextxy(x1+5,y1+5,"Original Line");

    theta = angle * (3.14/100);

    x3= x1*cos(theta) - y1*sin(theta);
    y3 = x1*sin(theta) + y1 * cos(theta);
    x4=x2*cos(theta) - y2*sin(theta);
    y4=x2*sin(theta) + y2*cos(theta);

    setcolor(9);
    line(x3,y3,x4,y4);
    outtextxy(x3+5,y3+5,"Original Line");

    closegraph();
    getch();
}