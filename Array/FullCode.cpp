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
void sort_(int k,int i)
{
    int temp;
    for(int n=k,m=1; n<i; n++,m++)
    {
        for(int j=0; j<i-m; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void intro()
{
    cout<<endl;
    cout<<"       Welcome\n\n";
    cout<<"         to\n\n";
    cout<<"   Data Structure\n\n";
    cout<<"       Project\n\n";
    cout<<"Press Enter to continue...";
    cin.get();
}

int menu()
{
    cout<<"\n\tMenu\n";
    cout<<"\t____________\n\n";
    cout<<"\t1.Insert\n";
    cout<<"\t2.Delete\n";
    cout<<"\t3.search\n";
    cout<<"\t4.Display\n";
    cout<<"\t5.Exit\n";
    cout<<"\t____________\n";
    int n;
    cout<<"\n\tchoice: ";
    cin>>n;
    return n;
}

void ins()
{
    while(1)
    {
        int n;
        system("cls");
        cout<<"\n\t1.Insert Elements\n";
        cout<<"\n\t0.Back To Menu\n";
        cout<<"\t________________\n";
        cout<<"\n\tChoice :";
        cin>>n;
        if(n==1)
        {
            system("cls");
            cout<<"\n\tHow many Elements you Want to insert: ";
            cin>>n;
            if(n+i>1000)
            {
                cout<<"\n\tArray size is 1000";
                cout<<"\tNow you can have maximum "<<1000-i<<" elements in this Array.\n";
                system("pause");
                break;
            }
            cout<<"\n\tEnter "<<n<<" Elements to insert in Array: ";
            n=n+i;
            for(; i<n; i++)
            {
                cin>>arr[i];
            }
            cout<<"\n\tArray Updated...";
            cin.ignore();
            cin.get();
        }
        else if(n==0)
        {
            break;
        }
        else
        {
            cout<<"\n\t!!!INVALID Input!!!\n";
            cin.ignore();
            cin.get();
        }
        sort_(k,i);
    }
}

void display()
{
    sort_(k,i);
    system("cls");
    cout<<"\n\t Array: ";
    int j=k;
    if(i==1)
    {
        cout<<"NULL\n";
    }
    else
    {
        for(; j<i; j++)
        {

            cout<<arr[j]<<" ";
            if(j%5==0)
                cout<<"\n\t\t";
        }
    }
    cout<<"\n\n\tPress Enter to continue...";
    cin.ignore();
    cin.get();
}

void del()
{
    int flag=0;
    while(1)
    {
        sort_(k,i);
        system("cls");

        int j=k;
        cout<<"\n\tArray: ";
        for(; j<i; j++)
        {
            cout<<arr[j]<<" ";
        }
        if(flag)
        {
            cout<<"\n\tArray Updated...";
        }
        cout<<endl;
        cout<<"\n\t1.Delete Last item\n";
        cout<<"\t2.Delete First item\n";
        cout<<"\t3.Delete specific item\n";
        cout<<"\n\t0.Back To Menu\n";
        cout<<"\t___________________\n";
        int n;
        cout<<"\n\tChoice: ";
        cin>>n;
        if(n==1)
        {
            if(i==1)
            {
                system("cls");
                cout<<"\n\t!!!No Element to delete!!!\n";
                cin.ignore();
                cin.get();
                continue;
            }
            i--;
            flag=1;
        }
        else if(n==2)
        {
            if(i==1)
            {
                system("cls");
                cout<<"\n\t!!!No Element to delete!!!\n";
                cin.ignore();
                cin.get();
                continue;
            }
            flag=1;
            int j=k;
            while(j+1!=i)
            {
                arr[j]=arr[j+1];
                j++;
            }
            i--;
        }
        else if(n==3)
        {
            if(i==1)
            {
                system("cls");
                cout<<"\n\t!!!No Element to delete!!!\n";
                cin.ignore();
                cin.get();
                continue;
            }
            sort_(k,i);
            flag=1;
            system("cls");
            int j=k;
            cout<<"\n\tArray: ";
            for(; j<i; j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<"\n\tEnter Index of an Element to delete(1 Based index): ";
            cin>>n;
            if(n==0)
            {
                system("cls");
                cout<<"\n\tIt\'s an Array of one Based index. \n";
                cout<<"\n\t Press Enter to continue...";
                cin.ignore();
                cin.get();
                continue;
            }
            if(n>=i)
            {
                system("cls");
                cout<<"\n\tOut of INDEX.\n";
                cout<<"\n\t Press Enter to continue...";
                cin.ignore();
                cin.get();
                continue;
            }
            while(n+1!=i)
            {
                arr[n]=arr[n+1];
                n++;
            }
            i--;
        }
        else if(n==0)
        {
            break;
        }
        else
        {
            cout<<"\n\t!!!INVALID Input!!!\n";
            cout<<"\n\t Press Enter to continue...";
            cin.ignore();
            cin.get();
        }

    }
}

void ex()
{
    system("cls");
    cout<<"\n\n\n\tYou Want to Quit ?\n";
    cout<<"\tY : YES\tN: NO\n\n\t...";
    char c;
    cin>>c;
    if(c=='y' || c=='Y')
    {
        system("cls");
        cout<<"\n\n\tALLAH HAFEZ\n";
        cout<<"\n\tpress Enter to Exit. . .";
        Sleep(3000);
        exit(0);
    }
}

void sear()
{
    system("cls");
    while(1)
    {
        system("cls");
        cout<<"\n\t1.Search by Index\n";
        cout<<"\t2.Search by element\n";
        cout<<"\n\t0.Back To Menu\n";
        cout<<"\t__________________\n";
        int n;
        cout<<"\n\tChoice: ";
        cin>>n;
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            system("cls");
            cout<<"\n\tEnter The index Your Want to search: ";
            cin>>n;
            if(n==0)
            {
                system("cls");
                cout<<"\n\tIt\'s an Array of one based index\n";
                cout<<"\n\t Press Enter to continue...";
                cin.ignore();
                cin.get();
                continue;
            }
            if(n>=i)
            {
                system("cls");
                cout<<"\n\tOut of Index.";
                cin.ignore();
                cin.get();
            }
            else
            {
                system("cls");
                cout<<"\n\tIndex "<<n<<" contains this Element: "<<arr[n]<<endl;
                cin.ignore();
                cin.get();
            }
        }
        else if(n==2)
        {
            system("cls");
            cout<<"\n\tEnter Element to search: ";
            cin>>n;
            int j=k;
            int ans;
            int flag=0;
            for(; j<i; j++)
            {
                if(n==arr[j])
                {
                    flag=1;
                    ans=j;
                    break;
                }
            }
            if(flag)
            {
                system("cls");
                cout<<"\n\t!!!FOUND!!!";
                cout<<"\n\tElement Found At index: "<<ans<<endl;
                cin.ignore();
                cin.get();
            }
            else
            {
                system("cls");
                cout<<"\n\t!!!No such Element Found!!!";
                cin.ignore();
                cin.get();
            }

        }
        else
        {
            cout<<"\n\t!!!INVALID Input!!!\n";
            cout<<"\n\t Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
    }
}

int main()
{
    for( ; i<=100; i++)
    {
        arr[i]=rand()%100;
    }
    system("color F9");
    intro();
    int n;
    while(1)
    {
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

