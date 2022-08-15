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
void edittrainermenu();
/******************************************************ClassCreationForMember**************************************************/
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
/******************************************************ClassCreationForMTrainer**************************************************/
class Trainer
{
	public:
		void Tinput();
		void add_Trainer();
		void show_Trainer();
		void find_Trainer();
		void update_tainer();
		void del_trainer();
};
/******************************************************MemberFunctionDefinition**************************************************/
void Member::input()
{
	system("cls");
	cout << "\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome To Members's DataBase ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1> Add New Member's 			               " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2> Detail OF ALL The Members In The GYM      " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3> Find Member(del/update) 			      	           " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t<4> Go Back                                   " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
	cout<<"\t\t\t\t\t\t\t\t\t      Choice : ";
}
void Member::add_members()
{
	label0:
	system("cls");
	cout<<"\n\t\t\t\t\t\t ******Adding new member to the gym****** "<<endl;
	fstream file_obj0;
	string Mage,Mheight,Mweight,Mid,MFname,MLname,temp;
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tName                      ";
	cout << "\n\t\t\t\t\t\t\t\tFirst Name :";
	getline(cin, MFname);
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\tLast Name  :";
	getline(cin, MLname);
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tId                        : ";
	getline(cin,Mid);
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tAge                       : ";
	getline(cin,Mage);
	fflush(stdin);
	cout << endl << endl;
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\tHeight                    : ";
	getline(cin,Mheight);
	fflush(stdin);
	cout << endl << endl;
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\tWeight                    : ";
	getline(cin, Mweight);
	fflush(stdin);
	temp=".";
	file_obj0.open("E://Member2nd.txt",ios::out|ios::app);
	file_obj0<<" "<<MFname<<" "<<MLname;
	file_obj0<<" "<<Mid<<" "<<Mage<<" "<<Mheight<<" "<<Mweight<<" "<<temp<<"\n";
	file_obj0.close();
	cout<<"File Saved!!!";
	getchar();
	system("cls");
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
	file_obj0.open("E://Member2nd.txt",ios::in);
	if(!file_obj0)
	cout<<"\n\n File Openning Error...";
	else
	{
		file_obj0>>MFname>>MLname;
		file_obj0>>Mid>>Mage>>Mheight>>Mweight>>temp;
		while(!file_obj0.eof())
		{
		    cout<<"\t\t\t\t\t\t\t\t\t\tName     :"<<MFname<<" "<<MLname<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tID       :"<<Mid<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tAge      :"<<Mage<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tHeight   :"<<Mheight<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tWeight   :"<<Mweight<<endl;
		    cout<<endl<<endl;
			file_obj0>>MFname>>MLname>>Mid>>Mage>>Mheight>>Mweight>>temp;
		}
		file_obj0.close();
	}
}
void Member::find_members()
{
	label2:
	system("cls");
	cout<<"\n******Finding Members******";
	system("cls");
	fstream file_obj0;
	string Mage,Mheight,Mweight,Fid;
	string Mid;
	string MFname,MLname,temp;
	file_obj0.open("E://Member2nd.txt",ios::in);
	if(!file_obj0)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tMember ID: : ";
		cin>>Fid;
		file_obj0>>MFname>>MLname;
		file_obj0>>Mid>>Mage>>Mheight>>Mweight>>temp;
		while(!file_obj0.eof())
		{
			if(Fid==Mid)
			{
				cout<<"\t\t\t\t\t\t\t\t\t\tName     :"<<MFname<<" "<<MLname<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tID       :"<<Mid<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tAge      :"<<Mage<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tHeight   :"<<Mheight<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tWeight   :"<<Mweight<<endl;
		        cout<<endl<<endl;
		        break;
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
	cout<<"\n\n\t\t\t\tUpdate Member Record";
	file_obj0.open("E://Member2nd.txt",ios::in);
	temp_file.open("E://temp_file.txt",ios::app|ios::out);
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
               	cout << "\t\t\t\t\t\t\t\tName                      ";
             	cout << "\n\t\t\t\t\t\t\t\tFirst Name :";
            	getline(cin, MFname);
            	fflush(stdin);
             	cout << "\t\t\t\t\t\t\t\tLast Name  :";
            	getline(cin, MLname);
             	fflush(stdin);
                cout << endl << endl;
                cout << "\t\t\t\t\t\t\t\tId                        : ";
                getline(cin,Mid);
                fflush(stdin);
                cout << endl << endl;
                cout << "\t\t\t\t\t\t\t\tAge                       : ";
                getline(cin,Mage);
                fflush(stdin);
                cout << endl << endl;
	            fflush(stdin);
                cout << "\t\t\t\t\t\t\t\tHeight                    : ";
                getline(cin,Mheight);
                fflush(stdin);
                cout << endl << endl;
       	        fflush(stdin);
                cout << "\t\t\t\t\t\t\t\tWeight                    : ";
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
        remove("E://Member2nd.txt");
        rename("E://temp_file.txt","E://Member2nd.txt");	
    }
}
void Member::del_members()
{
	system("cls");
	fstream file_obj0,temp_file;
    string Mage,Mheight,Mweight,Fid;
	string Mid;
	string MFname,MLname,temp;
	cout<<"\n\n\t\t\t\tDelete Member Record";
	file_obj0.open("E://Member2nd.txt",ios::in);
	temp_file.open("E://temp_file.txt",ios::app|ios::out);
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
				cout<<"\n\n\t\t\t\tDeleted Member Record";
				cout<<"\n\n One Member is Deleted Successfully...";
	 	    }
	 	    else
	 	    temp_file<<" "<<MFname<<" "<<MLname<<" "<<Mid<<" "<<Mage<<" "<<Mheight<<" "<<Mweight<<" "<<temp<<"\n";
			file_obj0>>MFname>>MLname>>Mid>>Mage>>Mheight>>Mweight>>temp;
	    }
	    file_obj0.close();
	    temp_file.close();
        remove("E://Member2nd.txt");
        rename("E://temp_file.txt","E://Member2nd.txt");
    }
}
void Trainer::Tinput()
{
	system("cls");
	cout << "\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome To Trainers's DataBase ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1> Add New Trainer 			               " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2> Detail OF ALL The Trainers In The GYM      " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3> Find Trainer(del/update) 			      	           " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t<4> Go Back                                   " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
	cout<<"\t\t\t\t\t\t\t\t\t      Choice : ";
}
void Trainer::add_Trainer()
{
	label0:
	system("cls");
	cout<<"\n\t\t\t\t\t\t ******Adding new trainer to the gym****** "<<endl;
	fstream file_obj1;
	string Tsalary,Tid,TFname,TLname,temp,Stime,Etime;
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tName                      ";
	cout << "\n\t\t\t\t\t\t\t\tFirst Name :";
	getline(cin, TFname);
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\tLast Name  :";
	getline(cin, TLname);
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tId                        : ";
	getline(cin,Tid);
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tSalary                       : ";
	getline(cin,Tsalary);
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tWorking Time                      ";
	cout << "\n\t\t\t\t\t\t\t\tStarting Time :";
	getline(cin, Stime);
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\tEnding Time  :";
	getline(cin, Etime);
	fflush(stdin);
	cout << endl << endl;
	temp=".";
	file_obj1.open("E://Trainer2nd.txt",ios::out|ios::app);
	file_obj1<<" "<<TFname<<" "<<TLname<<" "<<Tid<<" "<<Tsalary<<" "<<Stime<<" "<<Etime<<"\n";
	file_obj1.close();
	cout<<"\t\t\t\t\t\t\t\tFile Saved!!!";
	getchar();
	system("cls");
}
void Trainer::show_Trainer()
{
	label1:
	system("cls");
	fstream file_obj1;
	string Tsalary,Tid,TFname,TLname,temp,Stime,Etime;
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\tDetails Of All The Trainers In The GYM" << endl << endl;
    cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
    cout << endl << endl;
	file_obj1.open("E://Trainer2nd.txt",ios::in);
	if(!file_obj1)
	cout<<"\n\n File Openning Error...";
	else
	{
		file_obj1>>TFname>>TLname;
		file_obj1>>Tid>>Tsalary>>Stime>>Etime;
		while(!file_obj1.eof())
		{
		    cout<<"\t\t\t\t\t\t\t\t\t\tName            :"<<TFname<<" "<<TLname<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tID              :"<<Tid<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tSalary          :"<<Tsalary<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tWorking Time"<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tStarting Time   :"<<Stime<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tEnding Time     :"<<Etime<<endl;
		    cout<<endl<<endl;
			file_obj1>>TFname>>TLname;
		    file_obj1>>Tid>>Tsalary>>Stime>>Etime;
		}
		file_obj1.close();
	}
}
void Trainer::find_Trainer()
{
	label2:
	system("cls");
	cout<<"\n******Finding Trainer******";
	system("cls");
	fstream file_obj1;
	string TFid;
	string Tsalary,Tid,TFname,TLname,temp,Stime,Etime;
	file_obj1.open("E://Trainer2nd.txt",ios::in);
	if(!file_obj1)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tTrainer ID: : ";
		cin>>TFid;
		file_obj1>>TFname>>TLname;
		file_obj1>>Tid>>Tsalary>>Stime>>Etime;
		while(!file_obj1.eof())
		{
			if(TFid==Tid)
			{
				cout<<"\t\t\t\t\t\t\t\t\t\tName            :"<<TFname<<" "<<TLname<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tID              :"<<Tid<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tSalary          :"<<Tsalary<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tWorking Time"<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tStarting Time   :"<<Stime<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tEnding Time     :"<<Etime<<endl;
		        cout<<endl<<endl;
		        break;
	 	    }
		    file_obj1>>TFname>>TLname;
		    file_obj1>>Tid>>Tsalary>>Stime>>Etime;
	    }
	    file_obj1.close();
    }
    edittrainermenu();
}
void Trainer::update_tainer()
{
	system("cls");
	fstream file_obj1,temp_file1;
    string TFid;
	string Tsalary,Tid,TFname,TLname,temp,Stime,Etime;
	cout<<"\n\n\t\t\t\tUpdate Trainer Record";
	file_obj1.open("E://Trainer2nd.txt",ios::in);
	temp_file1.open("E://temp_file2nd.txt",ios::app|ios::out);
	if(!file_obj1)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n Trainer ID: : ";
		cin>>TFid;
		fflush(stdin);
		file_obj1>>TFname>>TLname;
		file_obj1>>Tid>>Tsalary>>Stime>>Etime;
		while(!file_obj1.eof())
		{
			if(TFid==Tid)
			{
				cout << "\t\t\t\t\t\t\t\tName                      ";
                cout << "\n\t\t\t\t\t\t\t\tFirst Name :";
	            getline(cin, TFname);
	            fflush(stdin);
	            cout << "\t\t\t\t\t\t\t\tLast Name  :";
                getline(cin, TLname);
	            fflush(stdin);
                cout << endl << endl;
	            cout << "\t\t\t\t\t\t\t\tId                        : ";
	            getline(cin,Tid);
	            fflush(stdin);
	            cout << endl << endl;
	            cout << "\t\t\t\t\t\t\t\tSalary                       : ";
	            getline(cin,Tsalary);
	            fflush(stdin);
	            cout << endl << endl;
	            cout << "\t\t\t\t\t\t\t\tWorking Time                      ";
                cout << "\n\t\t\t\t\t\t\t\tStarting Time :";
                getline(cin, Stime);
                fflush(stdin);
	            cout << "\t\t\t\t\t\t\t\tEnding Time  :";
	            getline(cin, Etime);
	            fflush(stdin);
	            cout << endl << endl;
			    temp_file1<<" "<<TFname<<" "<<TLname<<" "<<Tid<<" "<<Tsalary<<" "<<Stime<<" "<<Etime<<"\n";
	 	    }
	 	    else
	 	    temp_file1<<" "<<TFname<<" "<<TLname<<" "<<Tid<<" "<<Tsalary<<" "<<Stime<<" "<<Etime<<"\n";
			file_obj1>>TFname>>TLname;
		    file_obj1>>Tid>>Tsalary>>Stime>>Etime;
	    }
	    file_obj1.close();
	    temp_file1.close();
        remove("E://Trainer2nd.txt");
        rename("E://temp_file2nd.txt","E://Trainer2nd.txt");	
    }
}
void Trainer::del_trainer()
{
	system("cls");
	fstream file_obj1,temp_file1;
    string TFid;
	string Tsalary,Tid,TFname,TLname,temp,Stime,Etime;
	cout<<"\n\n\t\t\t\tDelete Member Record";
	file_obj1.open("E://Trainer2nd.txt",ios::in);
	temp_file1.open("E://temp_file2nd.txt",ios::app|ios::out);
	if(!file_obj1)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n Trainer ID: : ";
		cin>>TFid;
		fflush(stdin);
		file_obj1>>TFname>>TLname;
		file_obj1>>Tid>>Tsalary>>Stime>>Etime;
		while(!file_obj1.eof())
		{
			if(TFid==Tid)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tDeleted Member Record";
				cout<<"\n\n One Member is Deleted Successfully...";
	 	    }
	 	    else
	 	    temp_file1<<" "<<TFname<<" "<<TLname<<" "<<Tid<<" "<<Tsalary<<" "<<Stime<<" "<<Etime<<"\n";
			file_obj1>>TFname>>TLname;
		    file_obj1>>Tid>>Tsalary>>Stime>>Etime;
	    }
	    file_obj1.close();
	    temp_file1.close();
        remove("E://Trainer2nd.txt");
        rename("E://temp_file2nd.txt","E://Trainer2nd.txt");
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
   	Trainer trainer;
   	int choice,mchoice,tchoice;
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
   cout<<"\n\n\t\t\t\t\t\t\t\t  Enter the password:";
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
			system("cls");
			trainer.Tinput();
	  		cin>>tchoice;
	  		fflush(stdin);
	  		switch(tchoice)
	  		{
	  			case 1:
	  				trainer.add_Trainer();
	  				break;
	  			case 2:
	  				trainer.show_Trainer();
	  				break;
	  			case 3:
	  				trainer.find_Trainer();
	  				break;
	  			default:
		            cout<<"Wrong Choice!!";	
			}
	  		break;
	  	case 3:
		    system("cls");
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
	cout<<"\n\t\t\t\t\t\t\t\t\t1)Edit  ";
	cout<<"\n\t\t\t\t\t\t\t\t\t2)Delete  ";
	cout<<"\n\t\t\t\t\t\t\t\t\t3)Back ";
	cout <<"\n\t\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
	cout<<"t\t\t\t\t\t\t\t\t  Choice:";
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
void edittrainermenu()
{
	int choiceTrainerED;
	Trainer t1;
	cout <<"\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t1)Edit  ";
	cout<<"\n\t\t\t\t\t\t\t\t\t2)Delete  ";
	cout<<"\n\t\t\t\t\t\t\t\t\t3)Back ";
	cout <<"\n\t\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
	cout<<"t\t\t\t\t\t\t\t\t  Choice:";
	cin>>choiceTrainerED;
	fflush(stdin);
	switch(choiceTrainerED)
	{
		case 1:
            t1.update_tainer();
            break;
        case 2:
           	t1.del_trainer();
            break;
        case 3:
            break;
        default:
			break;	
 	}
}
