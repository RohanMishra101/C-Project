#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<unistd.h>
#include<windows.h>
#include<ctime>
using namespace std;
/******************************************************FunctionDeclaration************************************************/
void adminlogin();
void mainmenu();
/******************************************************ClassCreationForAdmin**************************************************/
class Member
{
	public:
		int ch;
		void input(); 
		void add_members();
		void show_members();
		void find_members();
		void update_bikes();
		void del_bikes();
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
	string Mage,Mheight,Mweight,Mid,Mname,temp;
	
	//				Time
	
	string year,month,day,membership;
	int year2,month2,day2;
	int year1, month1, day1;
	time_t now = time(0);
	tm *gettime = gmtime(&now);
	year1 = gettime->tm_year+1900;
	month1 = gettime->tm_mon+1;
	day1 = gettime->tm_mday;
	
	//				Time  
	  
	fflush(stdin);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tName                      : ";
	getline(cin, Mname);
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
	cout<< "\n\t\t\t\t\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=";
	//			Time
	
	cout<<endl<<"\t\t\t\t\t\t\t\tCurrent Date:"<<__DATE__<<endl;
	cout<<"\n\t\t\t\t\t\t\t\tMembership starting date:";
	yearwrong:
	cout<<"\n\t\t\t\t\t\t\t\tYear: ";
	cin>>year2;
	fflush(stdin);
	if(year2<year1||year2>2022)
	{
		cout<<"\t\t\t\t\t\t\t\t Wrong Entry!!!!";
		cout<<"\n";
		goto yearwrong;
	}
	else{
		monthwrong:
		cout<<"\t\t\t\t\t\t\t\t Month: ";
		cin>>month2;
		fflush(stdin);
		if(month2>12||month2<month1)
		{
			cout<<"\t\t\t\t\t\t\t\tWrong Entry!!!!";
			cout<<"\n";
		    goto monthwrong;
		}
		else{
			daywrong: 
			cout<<"\t\t\t\t\t\t\t\t Day: ";
			cin>>day2;
			fflush(stdin);
			if(month2==month1 && (day2 >= 30 || day2 < day1)){
				cout<<"\t\t\t\t\t\t\t\tWrong Entry!!";
				cout<<"\n";
				goto daywrong;
			}
						
		}	 
	}
	year = year2;
	month = month2;
	day = day2;
	//			Time
	temp=" ";
	file_obj0.open("D://Member2nd.txt",ios::out|ios::app);
	file_obj0<<" "<<Mname<<" "<<Mid<<" "<<Mage<<" "<<Mheight<<" "<<Mweight<<" "<<temp<<" "<<year<<" "<<month<<" "<<day<<"\n";
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
	string Mname,temp;
	string year,month,day;	
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
		file_obj0>>Mname>>Mid>>Mage>>Mheight>>Mweight>>temp>>year>>month>>day;
		while(!file_obj0.eof())
		{
		    cout<<"\t\t\t\t\t\t\t\t\t\tName:    "<<Mname<<" "<<Mid<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tID:      "<<Mage<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tHeight:  "<<Mweight<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\tWeight:  "<<temp<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\t\t Membership Date:  "<<year<<"/"<<month<<"/"<<day<<endl;

		    cout<<endl<<endl;
			file_obj0>>Mname>>Mid>>Mage>>Mheight>>Mweight>>temp>>year>>month>>day;
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
	fstream file_obj0,temp_file;
	int choiceED;
	string Mage,Mheight,Mweight,Fid;
	string Mid;
	string Mname,temp;
	temp_file.open("D://temp.txt",ios::app|ios::out);
	file_obj0.open("D://Member2nd.txt",ios::in);
	if(!file_obj0)
	cout<<"\n\n File Openning Error...";
	else
	{
		cout<<"\n\n Member ID: : ";
		cin>>Fid;
		file_obj0>>Mname>>Mid>>Mage>>Mheight>>Mweight>>temp;
		while(!file_obj0.eof())
		{
			if(Fid==Mage)
			{
				cout<<"\t\t\t\t\t\t\t\t\t\tName:    "<<Mname<<" "<<Mid<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tID:      "<<Mage<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tHeight:  "<<Mweight<<endl;
		        cout<<"\t\t\t\t\t\t\t\t\t\tWeight:  "<<temp<<endl;
		        cout<<endl<<endl;
		    	file_obj0>>Mname>>Mid>>Mage>>Mheight>>Mweight>>temp;
		    	cout <<"\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
		    	cout<<"\nt\t\t\t\t\t\t\t\t1)Edit  ";
		    	cout<<"\nt\t\t\t\t\t\t\t\t2)Delete  ";
		    	cout<<"\nt\t\t\t\t\t\t\t\t3)Back ";
		    	cout <<"\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
		    	cout<<"t\t\t\t\t\t\t\t\t  Choice:";
		    	cin>>choiceED;
		    	fflush(stdin);
		    	switch(choiceED)
		    	{
		    		case 1:
                     	cout << endl << endl;
                    	cout << "\t\t\t\t\t\t\t\tName                      : ";
                    	getline(cin, Mname);
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
                    	temp=" ";
                     	temp_file<<" "<<Mname<<" "<<Mid<<" "<<Mage<<" "<<Mheight<<" "<<Mweight<<" "<<temp<<"\n";
                     	break;
                	case 2:
                		cout<<"Hi";
                		break;
                	case 3:
                		cout<<"Hello";
                		break;
                	default:
					    break;	
 				}
			}
			else
			{
				temp_file<<" "<<Mname<<" "<<Mid<<" "<<Mage<<" "<<Mheight<<" "<<Mweight<<temp<<"\n";
				file_obj0>>Mname>>Mid>>Mage>>Mheight>>Mweight>>temp;
			}
		}
		file_obj0.close();
	    temp_file.close();
        remove("D://Member2nd.txt");
        rename("D://temp.txt","E://Member2nd.txt");		
	}
}
//	else if( ch ==2)
//	{ 
//		system("cls");
//		fstream file2;
//		int year2,max_power2,range2,count2=0;
//		string name2,namee2;
//		file2.open("D://electricBike.txt",ios::in);
//		if(!file2)
//		cout<<"\n\n File Openning Error...";
//		else
//		{
//			cout<<"\n\n Bike Name: : ";
//			cin>>namee2;
//			file2>>name2>>year2>>range2;
//			while(!file2.eof())
//			{
//				if(namee2 == name2)
//				{
//					system("cls");
//					cout<<"\n\n\t\t\tBike Name : "<<name2;
//					cout<<"\n\n\t\t\tYear : "<<year2;
//					cout<<"\n\n\t\t\tRange : "<<range2;
//					count2++;
//					break;	
//				}
//				file2>>name2>>year2>>range2;
//			}
//			file2.close();
//			if(count2 == 0)
//			cout<<"\n\n Bike name Not Found...";
//		}
//	}
//	else 
//	{
//		cout<<"\n!!!Invalid Input!!!";
//		sleep(2);
//		goto label2;
//	}
//}	
//void bbike::update_bikes()
//{
//	label3:
//	system("cls");
//	cout<<"\n******Updating Bike******"<<endl;
//	cout<<"\nChoose which bike would you like to update........";
//	cout<<"\n\n1.Petrol Bike"<<endl;
//	cout<<"\n2.Electric Bike"<<endl;
//	cout<<"\nEnter your choice :";
//	cin>>ch;
//	if(ch==1)
//	{
//		system("cls");
//		fstream file1,temp1;
//		int year1,yr1,max_power1,mp1,max_torque1,mt1,count1=0;
//		string name1,namee1;
//		cout<<"\n\n\t\t\t\tUpdate Bike Record";
//		temp1.open("D://petrolBike1.txt",ios::app|ios::out);
//		file1.open("D://petrolBike.txt",ios::in);
//		if(!file1)
//		cout<<"\n\n File Openning Error...";
//		else
//		{
//			cout<<"\n\n Bike Name : ";
//			cin>>name1;
//			file1>>namee1>>year1>>max_power1>>max_torque1;
//			while(!file1.eof())
//			{
//				if(name1 == namee1)
//				{
//					system("cls");
//					cout<<"\n\n\t\t\t\tUpdate Bikes Record";
//					cout<<"\n\n\t\t\tYear : ";
//					cin>>yr1;
//					cout<<"\n\n\t\t\tMax_power: ";
//					cin>>mp1;
//					cout<<"\n\n\t\t\tMax_torque: ";
//					cin>>mt1;
//					temp1<<" "<<name1<<" "<<yr1<<" "<<mp1<<" "<<mt1<<"\n";
//					count1++;
//				}
//				else
//				temp1<<" "<<namee1<<" "<<year1<<" "<<max_power1<<" "<<max_torque1<<"\n";
//				file1>>namee1>>year1>>max_power1>>max_torque1;
//			}
//			if(count1 == 0)
//			cout<<"\n\n Bike ID Not Found...";
//		}
//		file1.close();
//		temp1.close();
//		remove("D://petrolBike.txt");
//		rename("D://petrolBike1.txt","D://book.txt");
//	}
//	else if ( ch == 2)
//	{
//		system("cls");
//		fstream file2,temp2;
//		int year2,yr2,range2,r2,count2=0;
//		string name2,namee2;
//		cout<<"\n\n\t\t\t\tUpdate Bike Record";
//		temp2.open("D://electricBike1.txt",ios::app|ios::out);
//		file2.open("D://electricBike.txt",ios::in);
//		if(!file2)
//		cout<<"\n\n File Openning Error...";
//		else
//		{
//			cout<<"\n\n Bike Name : ";
//			cin>>name2;
//			file2>>namee2>>year2>>range2;
//			while(!file2.eof())
//			{
//				if(name2 == namee2)
//				{
//					system("cls");
//					cout<<"\n\n\t\t\t\tUpdate Bikes Record";
//					cout<<"\n\n\t\t\tYear : ";
//					cin>>yr2;
//					cout<<"\n\n\t\t\tRange: ";
//					cin>>r2;
//					temp2<<" "<<name2<<" "<<yr2<<" "<<r2<<"\n";
//					count2++;
//				}
//				else
//				temp2<<" "<<namee2<<" "<<year2<<" "<<range2<<"\n";
//				file2>>namee2>>year2>>range2;
//			}
//			if(count2 == 0)
//			cout<<"\n\n Bike ID Not Found...";
//		}
//		file2.close();
//		temp2.close();
//		remove("D://electricBike.txt");
//		rename("D://electricBike1.txt","D://book.txt");
//	}
//	else 
//	{
//		cout<<"\n!!!Invalid Choice!!!";
//		sleep(2);
//		goto label3;
//	}
//}
//	
//void bbike::del_bikes()
//{
//	label4:
//	system("cls");
//	cout<<"******Delete Bike******"<<endl;
//	cout<<"\nChoose which bike would you like to delete........";
//	cout<<"\n\n1.Petrol Bike"<<endl;
//	cout<<"\n2.Electric Bike"<<endl;
//	cout<<"\nEnter your choice :";
//	cin>>ch;
//	if( ch==1)
//	{
//		fstream file1,temp1;
//		int year1,max_power1,max_torque1,count1=0;
//		string name1,namee1;
//		temp1.open("D://petrolBike1.txt",ios::app|ios::out);
//		file1.open("D://petrolBike.txt",ios::in);
//		if(!file1)
//		cout<<"\n\n File Openning Error...";
//		else
//		{
//			cout<<"\n\n Bike Name : ";
//			cin>>namee1;
//			file1>>namee1>>year1>>max_power1>>max_torque1;
//			while(!file1.eof())
//			{
//				if(name1 == namee1)
//				{
//					system("cls");
//					cout<<"\n\n\t\t\t\tDelete Bike Record";
//					cout<<"\n\n One Bike is Deleted Successfully...";
//					count1++;
//				}
//				else
//				temp1<<" "<<namee1<<" "<<year1<<" "<<max_power1<<" "<<max_torque1<<"\n";
//				file1>>namee1>>year1>>max_power1>>max_torque1;
//			}
//			if(count1 == 0)
//			cout<<"\n\n Bike Name Not Found...";
//		}
//		file1.close();
//		temp1.close();
//		remove("D://petrolBike.txt");
//		rename("D://petrolBike1.txt","D://book.txt");
//	}
//	else if (ch == 2)
//	{
//		system("cls");
//		fstream file2,temp2;
//		int year2,range2,count2=0;
//		string name2,namee2;
//		temp2.open("D://electricBike1.txt",ios::app|ios::out);
//		file2.open("D://electricBike.txt",ios::in);
//		if(!file2)
//		cout<<"\n\n File Openning Error...";
//		else
//		{
//		cout<<"\n\n Bike Name : ";
//		cin>>namee2;
//		file2>>namee2>>year2>>range2;
//		while(!file2.eof())
//		{
//			if(name2 == namee2)
//			{
//				system("cls");
//				cout<<"\n\n\t\t\t\tDelete Bike Record";
//				cout<<"\n\n One Bike is Deleted Successfully...";
//				count2++;
//			}
//			else
//			temp2<<" "<<namee2<<" "<<year2<<" "<<range2<<"\n";
//			file2>>namee2>>year2>>range2;
//		}
//		if(count2 == 0)
//		cout<<"\n\n Bike Name Not Found...";
//	}
//	file2.close();
//	temp2.close();
//	remove("D://petrolBike.txt");
//	rename("D://petrolBike1.txt","D://book.txt");
//	}
//	else
//	{
//		cout<<"\n!!!Invalid Input!!!";
//		sleep(2);
//		goto label4;
//	}
//}
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
