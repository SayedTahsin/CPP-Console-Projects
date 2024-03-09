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
            if(j%5==0)cout<<"\n\t\t";
        }
    }
    cout<<"\n\n\tPress Enter to continue...";
    cin.ignore();
    cin.get();
}
