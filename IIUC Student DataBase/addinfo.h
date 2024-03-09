void addinfo()
{
    system("cls");
    student s;
    ofstream file;
    file.open("student_info.txt",ios::binary|ios::app);
    s.addinfo();
    file.write(reinterpret_cast<char*>(&s),sizeof(student));
    file.close();
    cout<<"     Infomation Updated...";
    cin.get();
}
