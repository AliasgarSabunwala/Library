header.h
void display_alls()
void display_allb()
void book_issue()
void book_deposit()
void intro()
void admin_menu()
    
// global declaration for stream object, object
fstream fp,fp1;
book bk;
student st;

void main()
{
    char ch;
    intro();
    do
    {
        clrscr();
        cout<<"\n\n\n\tMAIN MENU";
        cout<<"\n\n\t01. BOOK ISSUE";
        cout<<"\n\n\t02. BOOK DEPOSIT";
          cout<<"\n\n\t03. ADMINISTRATOR MENU";
          cout<<"\n\n\t04. EXIT";
          cout<<"\n\n\tPlease Select Your Option (1-4) ";
          ch=getche();
          switch(ch)
          {
            case '1':clrscr();
                 book_issue();
                    break;
              case '2':book_deposit();
                     break;
              case '3':admin_menu();
                 break;
              case '4':exit(0);
              default :cout<<"\a";
        }
        }while(ch!='4');
}
