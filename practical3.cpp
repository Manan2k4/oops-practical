#include<iostream>
using namespace std;
class car{
public:
    int seating,type;
    float price,mile,tank;
    string name;
    int insertcardata()
    {
        cout<<"model name:";
        cin>>name;
        cout<<"seating:";
        cin>>seating;
        cout<<"price";
        cin>>price;
        cout<<"mileage:";
        cin>>mile;
        cout<<"tank capcity:";
        cin>>tank;
        cout<<"fule type: 1.petrol 2.cng 3.diseal 4.elctric:";
        cin>>type;
    }
    int displycardata()
    {
        cout<<"model name:"<<name<<endl;
        cout<<"seating:"<< seating<<endl;
        cout<<"price:"<<price <<endl;
        cout<<"mileage:"<<mile <<endl;
        cout<<"tank capacity:"<<tank<<endl;
        cout<<"fule type"<<type <<endl;

    }
};
int main()
{
    const int maxcar=10;
    int n,p,ch,i;
    car A[maxcar];
    cout<<"how many car details you knoe:"<<endl;
    cin>>n;
    if(n<maxcar)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"Enter the car details:"<<endl;
            A[i].insertcardata();

        }
    }
    else
    {
        cout<<"please enter car details <10";
    }
    cout<<"WELCOME TO TATA MOTORS:"<<endl;
    cout<<"GET THE DETAILS AS PER YOUR PREFRENCE:"<<endl;
    cout<<"1.model name 2.fule type 3.price range"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"list of car:";
        for(int i=0;i<n;i++)
        {
            cout<<i+1.<<A[i].name<<endl;
            //A[i].name also write
        }
        cout<<"chose your car:";
        cin>>p;
        p--;
        A[p].displycardata();
        break;


    case 2:
        int x;
        cout<<"tata motors are avaliable:"<<endl;
        cout<<"1.petrol 2.cng 3.diseal 4.elctric:"<<endl;
        cin>>x;
        for(int i=0; i<n; i++)
        {
            if(x==A[i].type)
            {
                A[i].displycardata();
            }
        }
        break;
    case 3:
        int l;
        cout<<"Entear your maximum range in lakhs:";
        cin>>l;
        for(int i=0;i<10;i++)
            {
        if(A[i].price<l)
        {
            A[i].displycardata();
        }
        break;
            }

    }
}

