void result()
{
    if(arr[1]==arr[2] && arr[2]==arr[3])
    {
        flag=1;
        if(arr[1]=='X')
            ans=1;
        else
            ans=2;
    }
    else if(arr[4]==arr[5]&& arr[5]==arr[6])
    {
        flag=1;
        if(arr[4]=='X')
            ans=1;
        else
            ans=2;
    }
    else if(arr[7]==arr[8]&& arr[8]==arr[9])
    {
        flag=1;
        if(arr[7]=='X')
            ans=1;
        else
            ans=2;
    }
    else if(arr[1]==arr[4]&& arr[4]==arr[7])
    {
        flag=1;
        if(arr[1]=='X')
            ans=1;
        else
            ans=2;
    }
    else if(arr[2]==arr[5]&& arr[5]==arr[8])
    {
        flag=1;
        if(arr[2]=='X')
            ans=1;
        else
            ans=2;
    }
    else if(arr[3]==arr[6]&& arr[6]==arr[9])
    {
        flag=1;
        if(arr[3]=='X')
            ans=1;
        else
            ans=2;
    }
    else if(arr[1]==arr[5]&& arr[5]==arr[9])
    {
        flag=1;
        if(arr[1]=='X')
            ans=1;
        else
            ans=2;
    }
    else if(arr[3]==arr[5]&& arr[5]==arr[7])
    {
        flag=1;
        if(arr[3]=='X')
            ans=1;
        else
            ans=2;
    }

}
