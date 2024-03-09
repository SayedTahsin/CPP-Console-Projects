#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
#include "intro.h"
#include "menu.h"
#include"class.h"
#include "addinfo.h"
#include "showinfo.h"
#include "modify.h"
#include "report.h"
#include "delete.h"
#include "exit.h"
int main()
{
    int op;
    system("color F4");
    system("cls");
    intro();
    while(1)
    {
        system("cls");
        op=menu();
        cin.ignore();
        if(op==1)
        {
            addinfo();
        }
        else if(op==2)
        {
            showinfo();
        }
        else if(op==3)
        {
            report();
        }
        else if(op==4)
        {
            modify();
        }
        else if(op==5)
        {
            dele();
        }
        else if(op==6)
        {
            atexit(func);
            exit(0);
        }
        else
        {
            cout<<"Invalid Option...";
            cin.get();
        }
    }

}
