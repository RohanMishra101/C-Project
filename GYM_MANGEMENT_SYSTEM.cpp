#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<unistd.h>
#include<windows.h>
using namespace std;
/******************************************************FunctionDeclaration************************************************/
void adminlogin();
void mainmenu();
void editmenu();
/******************************************************ClassCreationForAdmin**************************************************/
class Member
{
	public:
		int ch;
		void input(); 
		void add_members();
		void show_members();
		void find_members();
		void update_member();
		void del_members();
};
/******************************************************MemberFunctionDefinition**************************************************/
void Member::input()
{
	system("cls");
	cout << "\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     *** Welcome To Members's DataBase ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1> Add New Member's 			               " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2> Detail OF ALL The Members In The GYM      " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3> Find Member(del/update) 			       " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t<4> Go Back                                   " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t  Choice : ";
}
void Member::add_members()
{
	label0:
	system("cls");
	cout<<"\n\t\t\t\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
	cout<<"\n\t\t\t\t\t\t\t      ________                                        ________";		
	cout<<"\n\t\t\t\t\t\t\t     |        |                                      |        |";	
  	cout<<"\n\t\t\t\t\t\t\t   __||||||||||                                      ||||||||||__";	
    cout<<"\n\t\t\t\t\t\t\t _|  ||||||||||______________________________________||||||||||  |_";
    cout<<"\n\t\t\t\t\t\t\t|_|  ||||||||||______________________________________||||||||||  |_|";
  	cout<<"\n\t\t\t\t\t\t\t  |__||||||||||                                      ||||||||||__|";
  	cout<<"\n\t\t\t\t\t\t\t     ||||||||||                                      ||||||||||";
  	cout<<"\n\t\t\t\t\t\t\t     |________|                                      |________|";
	cout<<"\n\n\t\t\t\t\t\t\t\t      ******Adding new member to the gym****** "<<endl;
	fstream file_obj0;
	fstream file_obj1;
	string Mage,Mheight,Mweight,Mid,MFname,MLname,temp;
	int package,total,month;
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tName : "<<endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\tFirst Name : ";
	getline(cin, MFname);
	fflush(stdin);
	cout << "\n\t\t\t\t\t\t\t\t\t\tLast Name  : ";
	getline(cin, MLname);
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tId  : ";
	getline(cin,Mid);
	fflush(stdin);
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tAge  : ";
	getline(cin,Mage);
	fflush(stdin);
	cout << endl;
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\t\t\tHeight  : ";
	getline(cin,Mheight);
	fflush(stdin);
	cout << endl;
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\t\t\tWeight  : ";
	getline(cin, Mweight);
	fflush(stdin);
	cout<<endl;
	fflush(stdin);
	flag1:
	cout << "\t\t\t\t\t\t\t\t\t\tSelect your Membership Package: \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t	1) SILVER	 	  2) GOLD\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t Choice: ";
	cin>>package;
	cout<< "\n\t\t\t\t\t\t\t\t\t\t Enter total month of Subscription : ";
	cin >> month;
	
	if(package == 1){
		total = month * 2000;
		file_obj1.open("D://Monetary.txt",ios::out|ios::app);
		file_obj1<<" "<<total<<"\n";
		file_obj1.close();
	}
	else if(package == 2){
		total = month * 3000;
		file_obj1.open("D://Monetary.txt",ios::out|ios::app);
		file_obj1<<" "<<package<<"\n";
		file_obj1.close();
	}
	else{
		goto flag1;
	}
	temp=".";
	
	file_obj0.open("D://Member2nd.txt",ios::out|ios::app);
	file_obj0<<" "<<MFname<<" "<<MLname;
	file_obj0<<" "<<Mid<<" "<<Mage<<" "<<Mheight<<" "<<Mweight<<" "<<temp<<"\n";
	file_obj0.close();	
	
	cout<<"\t\t\t\t\t\t\t\t ***** Member sucessfully Added into Database!! *****";
	getchar();
//	system("cls");
}	
void Member::show_members()
{
	label1:
	system("cls");
	string Mage,Mheight,Mweight;
	string Mid;
	string MFname,MLname,temp;	
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\tDetails Of All The Members In The GYM" << endl << endl;
    cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
    cout << endl << endl;
	fstream file_obj0;
	file_obj0.open("D://Member2nd.txt",ios::in);
	if(!file_obj0)
	cout<<"\n\n File Openning Error...";
	else
	{
		file_obj0>>MFname>>MLname;
		file_obj0>>Mid>>Mage>>Mheight>>Mweight>>temp;
		while(!file_obj0.eof())
		{
		    cout<<"\t\t\t\t\t\t\t\t\t\t Name     : "<<MFname<<" "<<MLname<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\t ID       : "<<Mid<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\t Age      : "<<Mage<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\t Height   : "<<Mheight<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\t Weight   : "<<Mweight<<endl;
		    cout<<endl<<endl;
			file_obj0>>MFname>>MLname>>Mid>>Mage>>Mheight>>Mweight>>temp;
		}
		file_obj0.close();
	}
}
void Member::find_members()
{
	label2:
//	system("cls");
	flag2:
	system("cls");
	fstream file_obj0;
	string Mage,Mheight,Mweight,Fid;
	string Mid;
	string MFname,MLname,temp;
	file_obj0.open("D://Member2nd.txt",ios::in);
	
	cout<<"\n******Finding Members******";
	if(!file_obj0)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t Member ID: : ";
		cin>>Fid;
		file_obj0>>MFname>>MLname;
		file_obj0>>Mid>>Mage>>Mheight>>Mweight>>temp;
		while(!file_obj0.eof())
		{
			if(Fid==Mid)
			{
				cout<<"\t\t\t\t\t\t\t\t\t\t Name     : "<<MFname<<" "<<MLname<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\t ID       : "<<Mid<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\t Age      : "<<Mage<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\t Height   : "<<Mheight<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\t Weight   : "<<Mweight<<endl;
		        cout<<endl<<endl;
		        break;
	 	    }
	 	    else{
	 	    	file_obj0.close();
	 	    	goto flag2;
			}
		    file_obj0>>MFname>>MLname>>Mid>>Mage>>Mheight>>Mweight>>temp;
	    }
	    file_obj0.close();
    }
    editmenu();
}
void Member::update_member()
{
	system("cls");
	fstream file_obj0,temp_file;
    string Mage,Mheight,Mweight,Fid;
	string Mid;
	string MFname,MLname,temp;
	cout<<"\n\n\t\t\t\t Update Member Record";
	file_obj0.open("D://Member2nd.txt",ios::in);
	temp_file.open("D://temp_file.txt",ios::app|ios::out);
	if(!file_obj0)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n Member ID: : ";
		cin>>Fid;
		fflush(stdin);
		file_obj0>>MFname>>MLname;
		file_obj0>>Mid>>Mage>>Mheight>>Mweight>>temp;
		while(!file_obj0.eof())
		{
			if(Fid==Mid)
			{
				cout << endl << endl;
               	cout << "\t\t\t\t\t\t\t\t Name                      ";
             	cout << "\n\t\t\t\t\t\t\t\t First Name :";
            	getline(cin, MFname);
            	fflush(stdin);
             	cout << "\t\t\t\t\t\t\t\t Last Name  :";
            	getline(cin, MLname);
             	fflush(stdin);
                cout << endl << endl;
                cout << "\t\t\t\t\t\t\t\t Id                        : ";
                getline(cin,Mid);
                fflush(stdin);
                cout << endl << endl;
                cout << "\t\t\t\t\t\t\t\t Age                       : ";
                getline(cin,Mage);
                fflush(stdin);
                cout << endl << endl;
	            fflush(stdin);
                cout << "\t\t\t\t\t\t\t\t Height                    : ";
                getline(cin,Mheight);
                fflush(stdin);
                cout << endl << endl;
       	        fflush(stdin);
                cout << "\t\t\t\t\t\t\t\t Weight                    : ";
                getline(cin, Mweight);
                fflush(stdin);
                temp=".";
                temp_file<<" "<<MFname<<" "<<MLname<<" "<<Mid<<" "<<Mage<<" "<<Mheight<<" "<<Mweight<<" "<<temp<<"\n";
	 	    }
	 	    else
	 	    temp_file<<" "<<MFname<<" "<<MLname<<" "<<Mid<<" "<<Mage<<" "<<Mheight<<" "<<Mweight<<" "<<temp<<"\n";
			file_obj0>>MFname>>MLname>>Mid>>Mage>>Mheight>>Mweight>>temp;
	    }
	    file_obj0.close();
	    temp_file.close();
        remove("D://Member2nd.txt");
        rename("D://temp_file.txt","D://Member2nd.txt");	
    }
}
void Member::del_members()
{
	system("cls");
	fstream file_obj0,temp_file;
    string Mage,Mheight,Mweight,Fid;
	string Mid;
	string MFname,MLname,temp;
	cout<<"\n\n\t\t\t\t Delete Member Record";
	file_obj0.open("D://Member2nd.txt",ios::in);
	temp_file.open("D://temp_file.txt",ios::app|ios::out);
	if(!file_obj0)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n Member ID: : ";
		cin>>Fid;
		fflush(stdin);
		file_obj0>>MFname>>MLname;
		file_obj0>>Mid>>Mage>>Mheight>>Mweight>>temp;
		while(!file_obj0.eof())
		{
			if(Fid==Mid)
			{
				system("cls");
				cout<<"\n\n\t\t\t\t Deleted Member Record";
				cout<<"\n\n One Member is Deleted Successfully...";
	 	    }
	 	    else
	 	    temp_file<<" "<<MFname<<" "<<MLname<<" "<<Mid<<" "<<Mage<<" "<<Mheight<<" "<<Mweight<<" "<<temp<<"\n";
			file_obj0>>MFname>>MLname>>Mid>>Mage>>Mheight>>Mweight>>temp;
	    }
	    file_obj0.close();
	    temp_file.close();
        remove("D://Member2nd.txt");
        rename("D://temp_file.txt","E://Member2nd.txt");
    }
}
int main()
{
	adminlogin();
}	
void adminlogin()
{
//   	system("cls");
   	Member member;
   	int choice,mchoice;
   	char x;
   	string pass ="";
   	char ch;
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                        WELCOME TO                                     |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                   GYM MANAGEMENT SYSTEM                               |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
   cout<<"\n\t\t\t\t\t\t\t\t\t\xdb|     Admin Login     |\xdb";	
   cout<<"\n\n\t\t\t\t\t\t\t\t         Enter the password:";
   ch = getch();
   while(ch != 13)
   {
      pass.push_back(ch);
      cout << '*';
      ch = getch();
   }
   if(pass == "admin" || pass =="ADMIN" || pass == "Admin")
   {
      cout << "\n\n\n\t\t\t\t\t\t\t\t\t\xdb|     Access Granted!     |\xdb\n";
      label:
      mainmenu();
	  cin>>choice;
	  fflush(stdin);
	  switch(choice)
	  {
	  	case 1:
	  		system("cls");
	  		member.input();
	  		cin>>mchoice;
	  		fflush(stdin);
	  		switch(mchoice)
	  		{
	  			case 1:
	  				member.add_members();
	  				break;
	  			case 2:
	  				member.show_members();
	  				break;
	  			case 3:
	  				member.find_members();
	  				break;
	  			default:
		            cout<<"Wrong Choice!!";	
			}
	  		break;
		case 2:
			exit(0);
		default:
		    cout<<"Wrong Choice!!";		
	  }
	  getch();
	  goto label;
   }
   else
   {
      cout <<"\n\n\t\t\t\t\t\t\t\t\xdb Access Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n\xdb";
      Sleep(2000);
      exit(0);
   } 
}
void mainmenu()
{
	system("cls");
	cout<<endl<<endl<<endl<<endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the GYM Management System ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1> Membership Details" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2> Employee Details" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3> Exit" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
}
void editmenu()
{
	int choiceED;
	Member m1;
	cout <<"\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t1)Edit  ";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t2)Delete  ";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t3)Back ";
	cout <<"\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
	cout<<"\t\t\t\t\t\t\t\t\t  Choice:";
	cin>>choiceED;
	fflush(stdin);
	switch(choiceED)
	{
		case 1:
            m1.update_member();
            break;
        case 2:
           	m1.del_members();
            break;
        case 3:
            break;
        default:
			break;	
 	}
}

