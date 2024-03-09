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
