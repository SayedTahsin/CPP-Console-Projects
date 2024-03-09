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
