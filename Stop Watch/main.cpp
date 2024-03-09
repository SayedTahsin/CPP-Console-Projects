#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
#include "windows.h"
#include "intro.h"

int main()
{
    intro();
    system("color 70");
    while(1)
    {
        int H=0,M=0,S=0;
        char c;
        system("cls");
        cout<<"\n\n\t\tSTOPWATCH"<<endl;
        cout<<"\n\t\t  "<<H<<":"<<M<<":"<<S<<endl;
        cout<<"\n\tPress S to start: ";
        cin>>c;
        if(c=='S' || c=='s')
        {
            while(!kbhit())
            {
                system("cls");
                cout<<"\n\n\t\tSTOPWATCH"<<endl;
                if(S%2==0)
                    cout<<"\n\t\t  "<<H<<":"<<M<<":"<<S<<endl;
                else
                    cout<<"\n\t\t  "<<H<<" "<<M<<" "<<S<<endl;

                cout<<"\n\tpress Anything to Stop...";
                Sleep(1000);
                S++;
                if(S==60)
                {
                    S=0;
                    M++;
                }
                if(M==60)
                {
                    M=0;
                    H++;
                }
            }
        }
        system("cls");

        cout<<"\n\n\t\tSTOPWATCH";
        cout<<"\n\n\t\t  "<<H<<":"<<M<<":"<<--S<<endl;
        cin.ignore();
        cin.get();
        cout<<"\n\n\t\t R :Reset";
        cout<<"\n\n\t\t E :Exit\n\t\t...";
        char a;
        cin>>a;
        if(a=='R' ||a=='r')
        {
            continue;
        }
        else
        {
            system("cls");
            cout<<"\n\n\tTHANK YOU!!!\n\n\n";
            cin.ignore();
            cin.get();
            exit(0);
        }

    }
    return 0;
}
