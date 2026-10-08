#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    short int ch,pos,dpos;
    char id[10][7], name[10][25],grade[10][3];
    float per[10];
    int n;
    string nid;



    cout<<"*******************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"*******************************************\n";
    cout<<endl;

    cout<<"Enter Number of Students : ";
    cin>>n;


//input student information
    for(int i=0; i<n; i++)
    {
        cout<<"enter id : ";
        cin>>id[i];
        cout<<"enter name : ";
        cin.ignore();
        cin.getline(name[i],sizeof(name[i]));
        cout<<"enter per : ";
        cin>>per[i];
        if(per[i]>90)
        {
            strcpy(grade[i],"0");
        }
        else if(per[i]>80)
        {
            strcpy(grade[i],"A+");
        }
        else if(per[i]>70)
        {
            strcpy(grade[i],"A");
        }
        else if(per[i]>60)
        {
            strcpy(grade[i],"B+");
        }
        else if(per[i]>50)
        {
            strcpy(grade[i],"B");
        }
        else if(per[i]>45)
        {
            strcpy(grade[i],"C");
        }
        else
        {
            strcpy(grade[i],"F");
        }

    }
    cout<<"-------------------------------------------------------------\n";

    //diplay student information
    cout<<"Enter Student Details";
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<left<<setw(8)<<id[i]<<left<<setw(20)<<name[i]<<left<<setw(5)<<per[i]<<grade[i]<<endl;
    }

    cout<<"-------------------------------------------------------------\n";

    cout<<"Current Student Details";
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<left<<setw(8)<<id[i]<<left<<setw(20)<<name[i]<<left<<setw(5)<<per[i]<<endl;
    }
    cout<<"-------------------------------------------------------------\n";

M:
    cout<<"1.Insert New Student\n";
    cout<<"2.Update Student Records\n";
    cout<<"3.Delete Student Record\n";
    cout<<"4.Exit\n";

    cout<<"Enter choice : ";
    cin>>ch;


    switch(ch)
    {
    case(1):

        //insert information
        cout<<"Insert New Student\n";

        cout<<"Enter Position : ";
        cin>>pos;
        pos--;
        for(int i=n+1; i>pos; i--)
        {

            strcpy(id[i],id[i-1]);
            strcpy(name[i],name[i-1]);
            per[i]=per[i-1];
            strcpy(grade[i],grade[i-1]);
        }
        if(pos<0)
        {
            cout<<"error : INVALID POSITION \n";
        }
        else
        {
            cout<<"Enter Enrollment Number:";
            cin>>id[pos];
            cout<<"Enter Student Name:";
            cin.ignore();
            cin.getline(name[pos],sizeof(name[pos]));
            cout<<"Enter Per:";
            cin>>per[pos];
            if(per[pos]>90)
            {
                strcpy(grade[pos],"0");
            }
            else if(per[pos]>80)
            {
                strcpy(grade[pos],"A+");
            }
            else if(per[pos]>70)
            {
                strcpy(grade[pos],"A");
            }
            else if(per[pos]>60)
            {
                strcpy(grade[pos],"B+");
            }
            else if(per[pos]>50)
            {
                strcpy(grade[pos],"B");
            }
            else if(per[pos]>45)
            {
                strcpy(grade[pos],"C");
            }
            else
            {
                strcpy(grade[pos],"F");
            }



        }

        for(int i=0; i<n+1; i++)
        {
            cout<<left<<setw(8)<<id[i]<<left<<setw(20)<<name[i]<<left<<setw(5)<<per[i]<<grade[i]<<endl;

        }
        cout<<"Record Inserted Successfully\n";
        cout<<"-------------------------------------------------------------\n";
        goto M;

    case 2:

        //Upadated information
        cout<<"Enter Enrollment No:";
        cin>>nid;
        for(int i=0; i<n; i++)
        {
            if(id[i]==nid)
            {
                cout<<"Enter New Percentage:";
                cin>>per[i];
            }
            if(per[i]>90)
            {
                strcpy(grade[i],"0");
            }
            else if(per[i]>80)
            {
                strcpy(grade[i],"A+");
            }
            else if(per[i]>70)
            {
                strcpy(grade[i],"A");
            }
            else if(per[i]>60)
            {
                strcpy(grade[i],"B+");
            }
            else if(per[i]>50)
            {
                strcpy(grade[i],"B");
            }
            else if(per[i]>45)
            {
                strcpy(grade[i],"C");
            }
            else
            {
                strcpy(grade[i],"F");
            }



        }

        cout<<"Updated Student Record"<<endl;
        for(int i=0; i<n+1; i++)
        {
            cout<<left<<setw(8)<<id[i]<<left<<setw(20)<<name[i]<<left<<setw(5)<<per[i]<<grade[i]<<endl;

        }
        cout<<"Record Updated Successfully\n";
        cout<<"-------------------------------------------------------------\n";
        goto M;


    case 3:

        // removing information
        cout<<"Delete Student Record\n";
        cout<<"Enter Position:";
        cin>>dpos;
        dpos--;
        if(dpos<=0)
        {
            cout<<"INVAILDE POS";
        }
        else
        {
            for(int i=dpos; i<n-1; i++)
            {

                strcpy(id[i],id[i+1]);
                strcpy(name[i],name[i+1]);
                per[i]=per[i+1];
                strcpy(grade[i],grade[i+1]);
            }
        }
        cout<<"Deleted Student Record"<<endl;
        for(int i=0; i<n-1; i++)
        {
            cout<<left<<setw(8)<<id[i]<<left<<setw(20)<<name[i]<<left<<setw(5)<<per[i]<<grade[i]<<endl;

        }
        cout<<"Record Deleted Successfully\n";
        cout<<"-------------------------------------------------------------\n";
        goto M;


    }
    return 0;
}


