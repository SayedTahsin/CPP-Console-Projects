///Write a menu driven program to Process a sorted Array.
///Your program should have the following menu: Insert, Delete, Search, Display and Exit
///C191101
///Sayed Tahsinoor Rahman
#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
int arr[1000];
int i=1;
int k=1;
#include "sort.h"
#include "intro.h"
#include "menu.h"
#include "insert.h"
#include "display.h"
#include "delete.h"
#include "exit.h"
#include "search.h"
int main()
{
    for( ; i<=100; i++)
    {
        arr[i]=rand()%100;
    }
    system("color E0");
    intro();
    int n;
    while(1)
    {
        system("color 70");
        system("cls");
        n=menu();
        if(n==1)
        {
            ins();
        }
        else if(n==2)
        {
            del();
        }
        else if(n==3)
        {
            sear();
        }
        else if(n==4)
        {
            display();
        }
        else if(n==5)
        {
            ex();
        }
        else
        {
            cout<<"\n\t!!!INVALID Input!!!\n";
            cin.ignore();
            cin.get();
        }
    }
}
