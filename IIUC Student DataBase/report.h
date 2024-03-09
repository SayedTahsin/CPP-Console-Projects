void report(){
    system("cls");
    student s;
    cout<<"\n\n\n\n";
    cout<<"ID             Name           CGPA      Completed Credit\n";
    ifstream file;
    file.open("student_info.txt",ios::binary);
    while(file.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
            s.report();
    }
    cin.get();
    file.close();
}
