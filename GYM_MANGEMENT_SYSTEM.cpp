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
/******************************************************ClassCreationForMonetary**************************************************/
class Transaction
{
	public:
		void Minput();
		void show_Total();
		void find_Transaction();
};
/******************************************************MemberFunctionDefinition**************************************************/
void Member::input()
{
	system("cls");
	cout << "\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     *** Welcome To Members's DataBase ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t  <1> Add New Member's 			               " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t  <2> Detail OF ALL The Members In The GYM      " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t  <3> Find Member(del/update) 			      	           " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t  <4> Go Back                                   " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
	cout<<"\t\t\t\t\t\t\t\t      Choice : ";
}
void Member::add_members()
{
	label0:
	int package,month,total;
	system("cls");
	cout<<endl<<endl;
	cout<<"\n\t\t\t\t\t\t\t      ________                                        ________";		
	cout<<"\n\t\t\t\t\t\t\t     |        |                                      |        |";	
  	cout<<"\n\t\t\t\t\t\t\t   __||||||||||                                      ||||||||||__";	
    cout<<"\n\t\t\t\t\t\t\t _|  ||||||||||______________________________________||||||||||  |_";
    cout<<"\n\t\t\t\t\t\t\t|_|  ||||||||||______________________________________||||||||||  |_|";
  	cout<<"\n\t\t\t\t\t\t\t  |__||||||||||                                      ||||||||||__|";
  	cout<<"\n\t\t\t\t\t\t\t     ||||||||||                                      ||||||||||";
  	cout<<"\n\t\t\t\t\t\t\t     |________|                                      |________|";
  	cout<<"\n\t\t\t\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
	cout<<"\n\t\t\t\t\t\t\t\t      ******Adding new member to the gym****** "<<endl;
	cout<<"\n\t\t\t\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
	fstream file_obj0;
	fstream file_obj1;
	string MByear,MBmonth,MBday,Mphone,MFname,MLname,Membership;
	fflush(stdin);
	file_obj0.open("E://Member2nd.txt",ios::app|ios::in);
	cout << endl<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\tName                      ";
	cout << "\n\t\t\t\t\t\t\t\t\t\tFirst Name :";
	getline(cin, MFname);
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\t\t\tLast Name  :";
	getline(cin, MLname);
	fflush(stdin);
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tPhone No.  : ";
	getline(cin,Mphone);
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\t\t\tBirth Date"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\tYear   :";
	getline(cin,MByear);
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\t\t\tMonth  : ";
	getline(cin,MBmonth);
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\t\t\tDay    : ";
	getline(cin, MBday);
	fflush(stdin);
	flag1:
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
	cout<<endl;
	cout << "\t\t\t\t\t\t\t\t\tSelect your Membership Package: \n";
	cout << "\t\t\t\t\t\t\t\t\t1) SILVER	 	  2) GOLD\n";
	cout << "\n\t\t\t\t\t\t\t\t\t\t    Choice: ";
	cin>>package;
	cout<< "\n\t\t\t\t\t\t\t\t\tEnter total month of Subscription : ";
	cin >> month;
	if(package == 1)
	{
		Membership="SILVER";
		total = month * 2000;
		file_obj1.open("E://Monetary.txt",ios::out|ios::app);
		file_obj1<<" "<<Mphone<<" "<<total<<"\n";
		file_obj1.close();
	}
	else if(package == 2)
	{
		Membership="GOLD";
		total = month * 3000;
		file_obj1.open("E://Monetary.txt",ios::out|ios::app);
		file_obj1<<" "<<Mphone<<" "<<total<<"\n";
		file_obj1.close();
	}
	else
	{
		goto flag1;
	}
	file_obj0.close();
	file_obj0.open("E://Member2nd.txt",ios::out|ios::app);
	file_obj0<<" "<<MFname<<" "<<MLname;
	file_obj0<<" "<<Mphone<<" "<<MByear<<" "<<MBmonth<<" "<<MBday<<" "<<Membership<<"\n";
	file_obj0.close();
	cout<<"\n\t\t\t\t\t\t\t\t\tMember addded sucessfully!!!";
	system("cls");
}	
void Member::show_members()
{
	label1:
	system("cls");
	string MByear,MBmonth,MBday,Mphone,MFname,MLname,Membership;
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
		file_obj0>>Mphone>>MByear>>MBmonth>>MBday>>Membership;
		while(!file_obj0.eof())
		{
		    cout<<"\n\t\t\t\t\t\t||\t\t\t\tName      :"<<MFname<<" "<<MLname<<"\t\t\t\t||";
		    cout<<"\n\t\t\t\t\t\t||\t\t\t\tPhone No  :"<<Mphone<<"\t\t\t\t||";
		    cout<<"\n\t\t\t\t\t\t||\t\t\t\tBirth Date "<<"\t\t\t\t\t||";
		    cout<<"\n\t\t\t\t\t\t||\t\t\t\tYear      :"<<MByear<<"\t\t\t\t\t||";
		    cout<<"\n\t\t\t\t\t\t||\t\t\t\tMonth     :"<<MBmonth<<"\t\t\t\t\t||";
		    cout<<"\n\t\t\t\t\t\t||\t\t\t\tDay       :"<<MBday<<"\t\t\t\t\t||";
		    cout<<"\n\t\t\t\t\t\t||\t\t\t\tMembership:"<<Membership;
		    cout<<endl<<endl;
			file_obj0>>MFname>>MLname>>Mphone>>MByear>>MBmonth>>MBday>>Membership;
		}
		file_obj0.close();
	}
	getch();
}
void Member::find_members()
{
	label2:
	system("cls");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
	cout<<endl<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\tFinding Members" << endl << endl;
    cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
	fstream file_obj0;
	string MByear,MBmonth,MBday,Mphone,MFname,MLname,Membership,FID;
	file_obj0.open("E://Member2nd.txt",ios::app|ios::in);
	if(!file_obj0)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tPhone NO: : ";
		cin>>FID;
		cout << "\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl;
		cout<<endl;
		file_obj0>>MFname>>MLname;
		file_obj0>>Mphone>>MByear>>MBmonth>>MBday>>Membership;
		while(!file_obj0.eof())
		{
			if(FID==Mphone)
			{
				cout<<"\n\t\t\t\t\t\t||\t\t\t\tName      :"<<MFname<<" "<<MLname<<"\t\t\t\t||";
		        cout<<"\n\t\t\t\t\t\t||\t\t\t\tPhone No  :"<<Mphone<<"\t\t\t\t||";
		        cout<<"\n\t\t\t\t\t\t||\t\t\t\tBirth Date "<<"\t\t\t\t\t||";
		        cout<<"\n\t\t\t\t\t\t||\t\t\t\tYear      :"<<MByear<<"\t\t\t\t\t||";
		        cout<<"\n\t\t\t\t\t\t||\t\t\t\tMonth     :"<<MBmonth<<"\t\t\t\t\t||";
		        cout<<"\n\t\t\t\t\t\t||\t\t\t\tDay       :"<<MBday<<"\t\t\t\t\t||";
		        cout<<"\n\t\t\t\t\t\t||\t\t\t\tMembership:"<<Membership;
		        cout<<endl<<endl;
		        break;
	 	    }
		    file_obj0>>MFname>>MLname>>Mphone>>MByear>>MBmonth>>MBday>>Membership;	
	    }
	    file_obj0.close();
    }
    editmenu();
}
void Member::update_member()
{
	system("cls");
	int package,month,total;
	fstream file_obj0,file_obj1,temp_file;
    string MByear,MBmonth,MBday,Mphone,MFname,MLname,Membership,FID;
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\tUpdate Member Record";
	file_obj0.open("E://Member2nd.txt",ios::in);
	temp_file.open("E://temp_file.txt",ios::app|ios::out);
	if(!file_obj0)
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t File Openning Error...";
	else
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t Phone NO: : ";
		cin>>FID;
		fflush(stdin);
		file_obj0>>MFname>>MLname;
		file_obj0>>Mphone>>MByear>>MBmonth>>MBday>>Membership;
		while(!file_obj0.eof())
		{
			if(FID==Mphone)
			{
					cout << "\t\t\t\t\t\t\t\t\t\tName                      ";
	                cout << "\n\t\t\t\t\t\t\t\t\t\tFirst Name :";
	                getline(cin, MFname);
                   	fflush(stdin);
	                cout << "\t\t\t\t\t\t\t\t\t\tLast Name  :";
	                getline(cin, MLname);
	                fflush(stdin);
	                cout << endl;
	                cout << "\t\t\t\t\t\t\t\t\t\tPhone No.  : ";
	                getline(cin,Mphone);
	                fflush(stdin);
	                cout << "\t\t\t\t\t\t\t\t\t\tBirth Date"<<endl;
	                cout << "\t\t\t\t\t\t\t\t\t\tYear   :";
	                getline(cin,MByear);
	                fflush(stdin);
	                cout << "\t\t\t\t\t\t\t\t\t\tMonth  : ";
	                getline(cin,MBmonth);
	                fflush(stdin);
	                cout << "\t\t\t\t\t\t\t\t\t\tDay    : ";
	                getline(cin, MBday);
	                fflush(stdin);
	                flag1:
	                cout<<endl;
	                cout<<"\n\t\t\t\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
	                cout<<endl;
	                cout << "\t\t\t\t\t\t\t\t\tSelect your Membership Package: \n";
	                cout << "\t\t\t\t\t\t\t\t\t1) SILVER	 	  2) GOLD\n";
                   	cout << "\n\t\t\t\t\t\t\t\t\t\t    Choice: ";
                   	cin>>package;
                	cout<< "\n\t\t\t\t\t\t\t\t\tEnter total month of Subscription : ";
                	cin >> month;
                 	if(package == 1)
                  	{
                  		Membership="SILVER";
                   		total = month * 2000;
                   		file_obj1.open("E://Monetary.txt",ios::out|ios::app);
                   		file_obj1<<" "<<Mphone<<" "<<total<<"\n";
                   		file_obj1.close();
                  	}
                	else if(package == 2)
                   	{
                  		Membership="GOLD";
                  		total = month * 3000;
                		file_obj1.open("E://Monetary.txt",ios::out|ios::app);
                		file_obj1<<" "<<Mphone<<" "<<total<<"\n";
                		file_obj1.close();
                 	}
                   	else
                   	{
                 		goto flag1;
                    }
                    temp_file<<" "<<MFname<<" "<<MLname<<" "<<Mphone<<" "<<MByear<<" "<<MBmonth<<" "<<MBday<<" "<<Membership<<"\n";
	 	    }
	 	    else
	 	    temp_file<<" "<<MFname<<" "<<MLname<<" "<<Mphone<<" "<<MByear<<" "<<MBmonth<<" "<<MBday<<" "<<Membership<<"\n";
			file_obj0>>MFname>>MLname>>Mphone>>MByear>>MBmonth>>MBday>>Membership;	
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
    string MByear,MBmonth,MBday,Mphone,MFname,MLname,Membership,FID;
	cout<<"\n\n\t\t\t\tDelete Member Record";
	file_obj0.open("E://Member2nd.txt",ios::in);
	temp_file.open("E://temp_file.txt",ios::app|ios::out);
	if(!file_obj0)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n Member ID: : ";
		cin>>FID;
		fflush(stdin);
		file_obj0>>MFname>>MLname;
		file_obj0>>Mphone>>MByear>>MBmonth>>MBday>>Membership;
		while(!file_obj0.eof())
		{
			if(FID==Mphone)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tDeleted Member Record";
				cout<<"\n\n One Member is Deleted Successfully...";
				getchar();
	 	    }
	 	    else
	 	    temp_file<<" "<<MFname<<" "<<MLname<<" "<<Mphone<<" "<<MByear<<" "<<MBmonth<<" "<<MBday<<" "<<Membership<<"\n";
			file_obj0>>MFname>>MLname>>Mphone>>MByear>>MBmonth>>MBday>>Membership;	
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
	string Tsalary,Tphone,TFname,TLname,temp,Stime,Etime;
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tName                      ";
	cout << "\n\t\t\t\t\t\t\t\tFirst Name :";
	getline(cin, TFname);
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\tLast Name    :";
	getline(cin, TLname);
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tPhone NO     : ";
	getline(cin,Tphone);
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tSalary        : ";
	getline(cin,Tsalary);
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tOpening Hours(5AM to 8PM)                     ";
	cout << "\t\t\t\t\t\t\t\tWorking Time                      ";
	cout << "\n\t\t\t\t\t\t\t\tStarting Time :";
	getline(cin, Stime);
	fflush(stdin);
	cout << "\t\t\t\t\t\t\t\tEnding Time   :";
	getline(cin, Etime);
	fflush(stdin);
	cout << endl << endl;
	temp=".";
	file_obj1.open("E://Trainer2nd.txt",ios::out|ios::app);
	file_obj1<<" "<<TFname<<" "<<TLname<<" "<<Tphone<<" "<<Tsalary<<" "<<Stime<<" "<<Etime<<"\n";
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
	string Tsalary,Tphone,TFname,TLname,temp,Stime,Etime;
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
		file_obj1>>Tphone>>Tsalary>>Stime>>Etime;
		while(!file_obj1.eof())
		{
		    cout<<"\t\t\t\t\t\t\t\t\t\tName            :"<<TFname<<" "<<TLname<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tPhone NO        :"<<Tphone<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tSalary          :"<<Tsalary<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tWorking Time"<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tStarting Time   :"<<Stime<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tEnding Time     :"<<Etime<<endl;
		    cout<<endl<<endl;
			file_obj1>>TFname>>TLname;
		    file_obj1>>Tphone>>Tsalary>>Stime>>Etime;
		}
		file_obj1.close();
	}
	getchar();
}
void Trainer::find_Trainer()
{
	label2:
	system("cls");
	cout<<"\n******Finding Trainer******";
	system("cls");
	fstream file_obj1;
	string TFid;
	string Tsalary,Tphone,TFname,TLname,temp,Stime,Etime;
	file_obj1.open("E://Trainer2nd.txt",ios::in);
	if(!file_obj1)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tPhone NO: : ";
		cin>>TFid;
		file_obj1>>TFname>>TLname;
		file_obj1>>Tphone>>Tsalary>>Stime>>Etime;
		while(!file_obj1.eof())
		{
			if(TFid==Tphone)
			{
				cout<<"\t\t\t\t\t\t\t\t\t\tName            :"<<TFname<<" "<<TLname<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tPhone NO        :"<<Tphone<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tSalary          :"<<Tsalary<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tWorking Time"<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tStarting Time   :"<<Stime<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tEnding Time     :"<<Etime<<endl;
		        cout<<endl<<endl;
		        break;
	 	    }
		    file_obj1>>TFname>>TLname;
		    file_obj1>>Tphone>>Tsalary>>Stime>>Etime;
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
	string Tsalary,Tphone,TFname,TLname,temp,Stime,Etime;
	cout<<"\n\n\t\t\t\tUpdate Trainer Record";
	file_obj1.open("E://Trainer2nd.txt",ios::in);
	temp_file1.open("E://temp_file2nd.txt",ios::app|ios::out);
	if(!file_obj1)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n Phone NO: : ";
		cin>>TFid;
		fflush(stdin);
		file_obj1>>TFname>>TLname;
		file_obj1>>Tphone>>Tsalary>>Stime>>Etime;
		while(!file_obj1.eof())
		{
			if(TFid==Tphone)
			{
				cout << "\t\t\t\t\t\t\t\tName                      ";
                cout << "\n\t\t\t\t\t\t\t\tFirst Name :";
	            getline(cin, TFname);
	            fflush(stdin);
	            cout << "\t\t\t\t\t\t\t\tLast Name  :";
                getline(cin, TLname);
	            fflush(stdin);
                cout << endl << endl;
	            cout << "\t\t\t\t\t\t\t\tPhone NO                        : ";
	            getline(cin,Tphone);
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
			    temp_file1<<" "<<TFname<<" "<<TLname<<" "<<Tphone<<" "<<Tsalary<<" "<<Stime<<" "<<Etime<<"\n";
	 	    }
	 	    else
	 	    temp_file1<<" "<<TFname<<" "<<TLname<<" "<<Tphone<<" "<<Tsalary<<" "<<Stime<<" "<<Etime<<"\n";
			file_obj1>>TFname>>TLname;
		    file_obj1>>Tphone>>Tsalary>>Stime>>Etime;
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
	string Tsalary,Tphone,TFname,TLname,temp,Stime,Etime;
	cout<<"\n\n\t\t\t\tDelete Member Record";
	file_obj1.open("E://Trainer2nd.txt",ios::in);
	temp_file1.open("E://temp_file2nd.txt",ios::app|ios::out);
	if(!file_obj1)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n Phone NO: : ";
		cin>>TFid;
		fflush(stdin);
		file_obj1>>TFname>>TLname;
		file_obj1>>Tphone>>Tsalary>>Stime>>Etime;
		while(!file_obj1.eof())
		{
			if(TFid==Tphone)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tDeleted Member Record";
				cout<<"\n\n One Member is Deleted Successfully...";
	 	    }
	 	    else
	 	    temp_file1<<" "<<TFname<<" "<<TLname<<" "<<Tphone<<" "<<Tsalary<<" "<<Stime<<" "<<Etime<<"\n";
			file_obj1>>TFname>>TLname;
		    file_obj1>>Tphone>>Tsalary>>Stime>>Etime;
	    }
	    file_obj1.close();
	    temp_file1.close();
        remove("E://Trainer2nd.txt");
        rename("E://temp_file2nd.txt","E://Trainer2nd.txt");
    }
}
void Transaction::Minput()
{
	system("cls");
	cout << "\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome To Monetary DataBase ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1> Total Money In Gym      " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2> Detail OF ALL The Monetary Transaction(ALL time)      " << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3> Find Specific Transaction 			      	           " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t<4> Go Back                                   " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
	cout<<"\t\t\t\t\t\t\t\t\t      Choice : ";
}
void Transaction::show_Total()
{
	fstream file_obj1,temp_money,main_money;
	int total;
	string Mphone;
	int grand_total=0;
	file_obj1.open("E://Monetary.txt",ios::in);
	main_money.open("E://total.txt",ios::app|ios::in);
	temp_money.open("E://temp_money.txt",ios::app|ios::out);
	if(!file_obj1)
	cout<<"\n\n File Openning Error...";
	else
	{
		file_obj1>>Mphone>>total;
		while(!file_obj1.eof())
		{
			grand_total=grand_total+total;
			file_obj1>>Mphone>>total;
	    }
	    cout<<"\n\t\t\t\t\t\t\t\t\tTotal Money of Gym:"<<grand_total;
	    temp_money<<" "<<grand_total;
	    file_obj1.close();
    }
    main_money.close();
	temp_money.close();
    remove("E://total.txt");
    rename("E://temp_money.txt","E://total.txt");
    getchar();
}
void Transaction::find_Transaction()
{
	fstream file_obj1,temp_money,main_money;
	int total;
	string Mphone,phno;
	file_obj1.open("E://Monetary.txt",ios::in);
	if(!file_obj1)
	cout<<"\n\n File Openning Error...";
	else
	{
		file_obj1>>Mphone>>total;
		cout<<"\n\n Phone NO: : ";
		cin>>phno;
		while(!file_obj1.eof())
		{
			if(phno==Mphone)
			{
				cout<<total<<endl;
			}
			file_obj1>>Mphone>>total;
	    }
	    file_obj1.close();
    }
    getchar();
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
   	Transaction tran;
   	char choice,mchoice,tchoice,money;
   	char x,YN;
   	int grand_total;
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
   cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter the password:";
   ch = getch();
   while(ch != 13)
   {
      pass.push_back(ch);
      cout << '*';
      ch = getch();
   }
   if(pass == "admin" || pass =="ADMIN" || pass == "Admin")
   {
      cout << "\n\n\n\t\t\t\t\t\t\t\t\t\xdb|    Access Granted!   |\xdb\n";
      Sleep(1000);
      label:
      mainmenu();
	  cin>>choice;
	  fflush(stdin);
	  switch(choice)
	  {
	  	case '1':
	  		flag9:
	  		system("cls");
	  		member.input();
	  		cin>>mchoice;
	  		fflush(stdin);
	  		switch(mchoice)
	  		{
	  			case '1':
	  				do
	  				{
	  					member.add_members();
	  					cout<<"\n\t\t\t\t\t\t\t\t\tADD another member(Y/N):";
                        cin>>YN;
                        fflush(stdin);
					}while(YN=='y'||YN=='Y');
	  			    break;
	  			case '2':
	  				member.show_members();
	  				break;
	  			case '3':
	  				member.find_members();
	  				break;
	  			default:
		            cout<<"Wrong Choice!!";	
		            goto flag9;
		            break;
			}
	  		break;
		case '2':
			flag8:
			system("cls");
			trainer.Tinput();
	  		cin>>tchoice;
	  		fflush(stdin);
	  		switch(tchoice)
	  		{
	  			case '1':
	  				do
	  				{
	  					trainer.add_Trainer();
	  					cout<<"\n\t\t\t\t\t\t\t\t\tADD another member(Y/N):";
                        cin>>YN;
                        fflush(stdin);
					}while(YN=='y'||YN=='Y');
	  				break;
	  			case '2':
	  				trainer.show_Trainer();
	  				break;
	  			case '3':
	  				trainer.find_Trainer();
	  				break;
	  			default:
		            cout<<"Wrong Choice!!";	
		            goto flag8;
			}
	  		break;
	  	case '3':
		    tran.Minput();
		    cin>>money;
	  		fflush(stdin);
	  		switch(money)
	  		{
	  			case '1':
	  				tran.show_Total();
	  				break;
	  			case '2':
	  				trainer.show_Trainer();
	  				break;
	  			case '3':
	  				tran.find_Transaction();
	  				break;
	  			default:
		            cout<<"Wrong Choice!!";	
		            goto flag8;
			}
			break;	
	  	case '4':
		    system("cls");
			exit(0);
			break;	
		default:
		    cout<<"Wrong Choice!!";	
			break;	
	  }
//	  getch();
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
    cout << "\t\t\t\t\t\t\t\t<3> Monetary Details" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<4> Exit" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tEnter Your Choice: ";
}
void editmenu()
{
	int choiceED;
	Member m1;
	cout <<endl<<endl;		
	cout <<"\t\t\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t1)Edit  ";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t2)Delete  ";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t3)Back ";
	cout<<endl<<endl<<"\t\t\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	cout<<"\t\t\t\t\t\t\t\t\t\tChoice:";
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
