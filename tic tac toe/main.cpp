#include <iostream>
#include<stdlib.h>
#include <dos.h>

using namespace std;
void start();
void loading();
void enter(int);
void moves();
void check();
int main()
{
  int m[3][3];

  start();
  loading();
  //delay(2000);

  cout<<"\t\t\t\t\t\t\t\t\n\n\n\nTIC TAC TOE\n";
        for(int k=0;k<3;k++)
       {

        cout<<"\t\t\t\t\t__|__|__\t\n";
        cout<<"\n";
       }
       enter(m[3][3]);
       moves();



    return 0;
}
void start()
{


cout << "\t\t\t\t\t\tHello world!" << endl;
    cout<<"\n\n\n\t\t\t\t\tIT IS THE GAME OF\n\n\t\t\t\t\t";
   // delay(2000);
    cout<<"\tTIC TAC TOE";

}
void loading()
{

    cout<<"\t\t\n\n\nLOADING\t";
    for(int i=0;i<=15;i++)
    {cout<<"." ;
    //delay(1500);
    }
    for(int j=3;j>=0;j--)
    {
       cout<<"...";
       //delay(j*1000);
    }
   // delay(3000);
    cout<<"\nlet's play";
}     // complete it
void enter(int m[3][3]);
{
int x,y;
cout<<"\nEnter coordintes";
cin>>x>>y;
if((x<=3)&&(y<=3))
   {
    X=m[x=1][y+1];
    check();
   }
else
{
    cout<<"\nenter coordinates between 1,3";
    cin>>x>>y;
    X=m[x=1][y+1];
    check();
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
       cout<<m[i][j];
    }
    cout<<"\n";
}
}
void moves()
{
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(m[i][j]==' ')
        O=m[i][j];
        check();
    }
}

}
void check()
{
     for(int i=0;i<3;i++)
{
    if((m[i][0]==m[i][1])&&(m[i][1]==m[i][2]))
    {
     cout<<"\nwinner";
     break();
    }
    for(int j=0;j<3;j++)
    {
        if((m[0][j]==m[1][j])&&(m[1][j]==m[2][j]))
        {cout<<"\nwinner";
        break();
    }


}

