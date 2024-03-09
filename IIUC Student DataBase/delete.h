void dele()
{
    system("cls");
    ofstream f;
    ifstream file;
    int id;
    student s;
    cout<<"\n\n\n\n";
    cout<<"     Student\'s ID: ";
    cin>>id;
    cin.ignore();
    file.open("student_info.txt",ios::binary);
    f.open("temp.txt",ios::binary|ios::app);
    file.seekg(0,ios::beg);
    while(file.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
        if(s.returnid()!=id)
            f.write(reinterpret_cast<char *> (&s), sizeof(student));

    }
    file.close();
    f.close();
    remove("student_info.txt");
    rename("temp.txt","student_info.txt");
    cout<<"     Information Deleted...\n\n";
    cout<<"     Press Enter to continue...";
    cin.get();
}
