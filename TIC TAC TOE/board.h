int board()
{
    if(n){
        arr[1]= '1';
        arr[2]= '2';
        arr[3]= '3';
        arr[4]= '4';
        arr[5]= '5';
        arr[6]= '6';
        arr[7]= '7';
        arr[8]= '8';
        arr[9]= '9';
        n=0;
    }
    system("cls");
    cout<<"\n\tPlayer 1:(X)     Player 2:(O)"<<endl;
    cout<<"\n\n";
    cout<<"\t\t"<<arr[1]<<" | "<<arr[2]<<" | "<<arr[3]<<endl;
    cout<<"\t\t"<<"--"<<"--"<<"--"<<"--"<<"--"<<endl;
    cout<<"\t\t"<<arr[4]<<" | "<<arr[5]<<" | "<<arr[6]<<endl;
    cout<<"\t\t"<<"--"<<"--"<<"--"<<"--"<<"--"<<endl;
    cout<<"\t\t"<<arr[7]<<" | "<<arr[8]<<" | "<<arr[9]<<endl;
    cout<<"\nTurn of Player "<<p<<": ";
    int c;
    cin>>c;
    return c;
}

