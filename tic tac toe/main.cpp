#include <iostream>
#include<stdlib.h>
#include <dos.h>

using namespace std;
void start();
void loading();
void enter(int);
void moves(int);
void check(int);
void check1();
void display();
int main()
{
  int m[3][3];
  char c;
  start();
  loading();
  //delay(2000);

  cout<<"\t\t\t\t\t\t\t\t\n\n\n\nTIC TAC TOE\n";
        for(int k=0;k<3;k++)
       {

        cout<<"\t\t\t\t\t__|__|__\t\n";
        cout<<"\n";
       }
       cout<<"\ndo you want to take first move(y/n)";
       cin>>y;
       if(c=='y'||c=='Y')
       {enter(m[3][3]);}
       else
       {moves(m[3][3]);}



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
void enter(int m[3][3])
{
int x,y;
cout<<"\nEnter coordintes";
cin>>x>>y;
if((x<=3)&&(y<=3))
   {
    m[x=1][y+1]=X;
    check();
   }
else
{
    cout<<"\nenter coordinates between 1,3";
    cin>>x>>y;
    m[x=1][y+1]=X;
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
void moves(int m[3][3])
{
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(m[i][j]==' ')
        m[i][j]=O;
        check1();
    }
}
}

void check(int m[3][3])
{
    int i,j;
     for(i=0,j=0;i<3,j<3;i++,j++)
{
     if((m[i][0]==m[i][1])&&(m[i][1]==m[i][2]))
    {
     cout<<"\nwinner";
     break();
    }

       else if((m[0][j]==m[1][j])&&(m[1][j]==m[2][j]))
        {cout<<"\nwinner";
        break();}
       else if((m[0][0]==m[1][1])&&(m[1][1]==m[2][2]))
        {cout<<"\nwinner diagonal";
        break();}
        else
        moves();
}
}
void check1()
{
    int i,j;
     for(i=0,j=0;i<3,j<3;i++,j++)
 {
     if((m[i][0]==m[i][1])&&(m[i][1]==m[i][2]))
    {
     cout<<"\nwinner";
     break();
    }

       else if((m[0][j]==m[1][j])&&(m[1][j]==m[2][j]))
        {cout<<"\nwinner";
        break();}
       else if((m[0][0]==m[1][1])&&(m[1][1]==m[2][2]))
        {cout<<"\nwinner diagonal";
        break();}
        else
        {
            enter();
        }
 }
}
void display()
{

}

