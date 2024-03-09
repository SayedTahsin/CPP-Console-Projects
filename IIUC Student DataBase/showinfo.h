void showinfo()
{
    system("cls");
    student s;
    int id;
    cout<<"\n\n\n\n";
    cout<<"     Students\'s ID: ";
    cin>>id;
    cin.ignore();
    ifstream file;
    file.open("student_info.txt",ios::binary);
    while(file.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
        if(s.returnid()==id)
        {
            s.showinfo();
            break;
        }
    }
    file.close();
}
