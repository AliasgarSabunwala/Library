void display_alls()
{
    clrscr();
         fp.open("student.dat",ios::in);
         if(!fp)
         {
               cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
               getch();
               return;
         }

    cout<<"\n\n\t\tSTUDENT LIST\n\n";
    cout<<"==================================================================\n";
    cout<<"\tAdmission No."<<setw(10)<<"Name"<<setw(20)<<"Book Issued\n";
    cout<<"==================================================================\n";

    while(fp.read((char*)&st,sizeof(student)))
    {
        st.report();
    }
         
    fp.close();
    getch();
}
