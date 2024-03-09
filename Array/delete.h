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
