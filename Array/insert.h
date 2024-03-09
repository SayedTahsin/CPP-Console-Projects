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
