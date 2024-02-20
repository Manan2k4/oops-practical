/* This program is created by 23CS025 */
/*A system calculates the area of circle, rectangle and cuboid. Every time it called the same function for
calculating the area. Depending on the number of parameters passed, it chooses where to find area or
circle / rectangle / cuboid. */
//23CS022
#include<iostream>
using namespace std;
#define pi 3.14

float area(int radius)
{
    return pi*radius*radius;
}
int area(int width,int length)
{
    return width*length;
}
int area(int length,int width,int height)
{
    return 2*(length*width + width*height + height*length  );
}
int main()
{
    float radius,length,height,width;
    cout<<"Enter the radius of a circle:"<<endl;
    cin>>radius;
    cout<<"The area of a circle is:"<<area(radius)<<endl;
    cout<<"Enter the lenghth of a rectangle:";
    cin>>length;
    cout<<"Enter the width of a rectangle:";
    cin>>width;
    cout<<"the area of a rectangle is:"<<area(length,width)<<endl;
    cout<<"Enter the lenghth of a cuboid:";
    cin>>length;
    cout<<"Enter the height of a cuboid:";
    cin>>height;
     cout<<"Enter the width of a cuboid:";
     cin>>width;
    cout<<" the area of a cuboid:"<<area(length,width,height);
    cout<<"\n \n JAGDISH 23CS025";
    return 0;
}

