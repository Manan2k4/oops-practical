This program is created by 23CS025 */

/*
Set circle radius to 1 when the new circle object is created.
Set circle radius to parameter value if the new circle object is created with parameter.
Copy the radius of one circle object to another if circle object is created with another object as parameter.
System calculates and display the area of a circle.
System should count total number of circle object created and display total number of active circle object
when any circle object is deleted.
*/
#include<iostream>
using namespace std;
int count=0;
class area
{
private:
    int radius;
public:

    area()
    {
    count++;
    radius=1;
    cout<<"circle with radius 1 "<<endl;
    }
    area(float x)
    {
        count++;
        radius=x;
          cout<<"circle with radius  "<<x<<endl;
    }
    area(area &r)
    {
        count++;
        radius=r.radius;
          cout<<"circle with radius "<<radius<<endl;
    }
    ~area()
    {
         count--;
        cout<<"one object is deleted"<<endl;
        cout<<"total active object are "<<count<<endl;

    }

};
int main()
{
    area o1;
    area o2(20);
    area o3(o1);
}

