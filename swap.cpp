
#include<iostream.h>
#include<conio.h>
int swap(int a,int b)

    {

     int temp=a;
    a=b;
    b=temp;
    }
    int main()
    {
    float x,y;
    cin>>x>>y;
    cout<<"Before swap "<<"\n"<<"x= "<<x<<"  y= "<<y<<endl;
    swap(a,b);
    cout<<"After swap"<<"\n"<<"x= "<<y<<  "  y= "<<x<<endl;
    getch();
    }

