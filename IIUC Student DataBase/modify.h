void modify()
{
    system("cls");
    student s;
    int id;
    cout<<"Student\'s ID: ";
    cin>>id;
    cin.ignore();
    fstream file;
    file.open("student_info.txt",ios::binary|ios::in|ios::out);
    while(file.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
        if(s.returnid()==id)
        s.modify();
        int pos=(-1)*static_cast<int>(sizeof(student));
        file.seekp(pos,ios::cur);
        file.write(reinterpret_cast<char *> (&s), sizeof(student));
    }
    file.close();
    cout<<"Record Update...";
}
