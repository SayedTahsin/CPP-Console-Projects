using namespace std;
class student
{
    int id;
    char name[50];
    double cg,cc;
public:
    void addinfo()
    {
        cout<<"\n\n\n\n";
        cout<<"     Student\'s Id: ";
        cin>>id;
        cout<<endl;
        cin.ignore();
        cout<<"     Student\'s Name: ";
        cin.getline(name,50);
        cout<<endl;
        cout<<"     Student Cgpa: ";
        cin>>cg;
        cout<<endl;
        cout<<"     Students Completed Credit: ";
        cin>>cc;
        cout<<endl;
        cin.ignore();
    }
    int returnid()
    {
        return id;
    }
    void showinfo() const
    {
        system("cls");
        cout<<"\n\n\n\n";
        cout<<"     Student\'s Name: "<<name<<endl;
        cout<<"     Students\'s ID: "<<id<<endl;
        cout<<"     Students\'s Completed Credit: "<<cc<<endl;
        cout<<"     Students\'s Earned CGPA: "<<cg<<endl;
        cout<<"\n\nPress Enter to Continue...";
        cin.get();
    }
    void report() const
    {
        cout<<id<<setw(15)<<name<<setw(15)<<cg<<setw(10)<<cc<<endl;
    }
    void modify()
    {
        system("cls");
        cout<<"Student\'s ID: "<<id<<endl;
        cout<<"Confirm ID: ";
        cin>>id;
        cin.ignore();
        cout<<"Modify Name: ";
        cin.getline(name,50);
        cout<<"Student Cgpa: ";
        cin>>cg;
        cin.ignore();
        cout<<"Students Completed Credit: ";
        cin>>cc;
        cin.ignore();
        cout<<"\nPress Enter to continue...";
        cin.get();
    }

};

