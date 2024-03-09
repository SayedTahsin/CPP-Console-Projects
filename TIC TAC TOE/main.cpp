#include<bits/stdc++.h>
using namespace std;
char arr[10]= {'0','1','2','3','4','5','6','7','8','9'};
int p=1,flag=0,ans=0,coun=0,n;
char temp;
#include "intro.h"
#include "board.h"
#include "result.h"
#include "exit.h"
int main()
{
    system("color F4");
    intro();

    while(1)
    {
        system("color 70");
        int x=board();
        if(p==1)
        {
            if(arr[x]!='X')
            {
                if(arr[x]!='O')
                {
                    arr[x]='X';
                    p=2;
                    coun++;
                }
                else
                {
                    cout<<"\n\tWrong move\n";
                    cin.ignore();
                    cin.get();
                }
            }
            else
            {
                cout<<"\n\tWrong move\n";
                cin.ignore();
                cin.get();
            }

        }
        else
        {
            if(arr[x]!='X')
            {
                if(arr[x]!='O')
                {
                    arr[x]='O';
                    p=1;
                    coun++;
                }
                else
                {
                    cout<<"\n\tWrong move\n";
                    cin.ignore();
                    cin.get();
                }
            }
            else
            {
                cout<<"\n\tWrong move\n";
                cin.ignore();
                cin.get();
            }

        }
        result();
        if(flag)
        {
            system("cls");
            cout<<"\n\n\tPlayer "<<ans<<" Is the winner.\n\n";
            cin.get();
            cout<<"\tPlay Again???\n";
            cout<<"\tY: Yes  N: No\n\t...";
            cin>>temp;
            if(temp=='y'|| temp=='Y')
            {
                n=1;
                p=1;
                flag=0;
                ans=0;
                coun=0;
            }
            else
            {
                atexit(fn);
                exit(0);
            }
        }
        if(coun==9 && flag==0)
        {
            system("cls");
            cout<<"\n\t DRAWN\n";
            cout<<"\tPlay Again???\n";
            cout<<"\t Y: Yes  N: No\n\t...";
            cin>>temp;
            if(temp=='y'|| temp=='Y')
            {
                n=1;
                p=1;
                flag=0;
                ans=0;
                coun=0;
            }
            else
            {
                atexit(fn);
                exit(0);
            }
        }
    }
}
