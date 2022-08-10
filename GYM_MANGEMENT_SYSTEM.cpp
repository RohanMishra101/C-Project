#include<iostream>
#include<iomanip>
#include<ctime>
#include<windows.h>
#include<fstream>
using namespace std;


//Graphics in class


void graphics()
{
	cout<<"\n\t\t\t\t\t\t\t      ________                                        ________";
    cout<<"\n\t\t\t\t\t\t\t     |        |                                      |        |";
  	cout<<"\n\t\t\t\t\t\t\t   __||||||||||                                      ||||||||||__";
  	cout<<"\n\t\t\t\t\t\t\t _|  ||||||||||______________________________________||||||||||  |_";
    cout<<"\n\t\t\t\t\t\t\t|_|  ||||||||||______________________________________||||||||||  |_|";
  	cout<<"\n\t\t\t\t\t\t\t  |__||||||||||                                      ||||||||||__|";
  	cout<<"\n\t\t\t\t\t\t\t     ||||||||||                                      ||||||||||";
  	cout<<"\n\t\t\t\t\t\t\t     |________|                                      |________|";
}
   /*void thankyou()
    {
    	cout<<"\n\t\t\t\t\t\t\t        _________    ___     ___     __     ___   ____   ___     ___";
        cout<<"\n\t\t\t\t\t\t\t       |         |  |   |   |   |   /  \   |   | /    | |   |   /   |";
        cout<<"\n\t\t\t\t\t\t\t       |__     __|  |   |___|   |  /    \  |   |/     | |   |  /   /";
        cout<<"\n\t\t\t\t\t\t\t          |   |     |    ___    | /  /\  \ |      /|  | |   | /   /"
	}*/


//Graphics ends

//Member class starts

class Member
{
	public:

		string Mname,Mcontact_no;
		int year,month,day,membership,Mid;
	public:
		void Title_menu();
		void menu();
		void Add_Member();
//		void list_member();
};

void Member::Title_menu()
{
	cout<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t       GYM MANAGEMENT SYSTEM"<<endl;
	cout<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
}
void Member::menu()
{
	cout<<endl<<"\t\t\t\t\t\t\t\t            1) Add Members...............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            2) List Members..............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            3) Find Members..............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            4) Workout Sheet.............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            5) Trainers Information......";
	cout<<endl<<"\t\t\t\t\t\t\t\t            6) Equipment Information.....";
	cout<<endl<<"\t\t\t\t\t\t\t\t            7) Exit......................";
	cout<<endl<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t      Choice : ";
}


//Add Members

void Member::Add_Member()
{
	
	int Mage,Mheight,Mweight;
	
	int year1, month1, day1;

		char Mname[50];//Mcontact_no[50];
	    int Mid,Mage,Mheight,Mweight;
	    int year,month,day,membership;
	    int year1, month1, day1;
		void Add_Member();
		void Show_Member();
		int getID()
	    {    
		    return Mid;
	    }
};
void Member::Add_Member()
{

	time_t now = time(0);
	tm *gettime = gmtime(&now);
	year1 = gettime->tm_year+1900;
	month1 = gettime->tm_mon+1;
	day1 = gettime->tm_mday;
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n"; 
   	cout<<"\n\t\t\t\t\t\t\t\t\t(|--|)Add Member details down bellow(|--|)";
   	cout<<"\n\t\t\t\t\t\t\t\t\t******************************************";
	cout<<"\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t     Name:";
	getchar();
    cin.getline(Mname,50);
	fflush(stdin);
	cout<<"\t\t\t\t\t\t\t\t\t     Id:";
	cin>>Mid;
	fflush(stdin); 
	cout<<"\t\t\t\t\t\t\t\t\t     Age:";
	cin>>Mage;
	fflush(stdin);
	cout<<"\t\t\t\t\t\t\t\t\t     Height(in foot):";
	cin>>Mheight;
	fflush(stdin);
	cout<<"\t\t\t\t\t\t\t\t\t     Weight(in kg):";
	cin>>Mweight;
	fflush(stdin);
	/*cout<<endl<<"\t\t\t\t\t\t\t\t\t     Current Date:"<<__DATE__<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t     Membership starting date:";
	yearwrong:
	cout<<"\n\t\t\t\t\t\t\t\t\t     Year:";
	cin>>year;
	fflush(stdin);
	if(year<year1||year>2024)
	{
		cout<<"\t\t\t\t\t\t\t\t\t     Wrong Entry!!!!";
		cout<<"\n";
		goto yearwrong;
	}
	else{
		monthwrong:
		cout<<"\t\t\t\t\t\t\t\t\t     Month:";
		cin>>month;
		fflush(stdin);
		if(month>12||month<month1)
		{
			cout<<"\t\t\t\t\t\t\t\t\t     Wrong Entry!!!!";
			cout<<"\n";
		    goto monthwrong;
		}
		else{
			daywrong: 
			cout<<"\t\t\t\t\t\t\t\t\t     Day:";
			cin>>day;
			fflush(stdin);
			if(month==month1 && (day >= 30 || day < day1)){
				cout<<"\t\t\t\t\t\t\t\t\t     Wrong Entry!!";
				cout<<"\n";
				goto daywrong;
			}
						
		}	 

	}
	cout<<"\t\t\t\t\t\t\t\t\t  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	membershipwrong:	  
	cout<<"\t\t\t\t\t\t\t\t\t Choose a membership plan:";
	cout<<"\n\t\t\t\t\t\t\t\t\t     3months";
	cout<<"\n\t\t\t\t\t\t\t\t\t     6months";
	cout<<"\n\t\t\t\t\t\t\t\t\t     9months";
	cout<<"\n\t\t\t\t\t\t\t\t\t     12months";
	cout<<"\n\t\t\t\t\t\t\t\t\t     Enter the membership plan(months):";
	cin>>membership;
	if(membership==3||membership==6||membership==9||membership==12)
	{ 
		int eyear,emonth,tempmonth;
		tempmonth=month+membership;
	    cout<<"\n\t\t\t\t\t\t\t\t\tYour package will end after "; 
		cout<<membership;
		cout<<"\t\t\t\t\t\t\t\t\tmonths prior to this date.";
		Sleep(500);
	    if(tempmonth>12)
	    {
	        eyear=year+1;
	        emonth=tempmonth-12;
	        cout<<"\n\t\t\t\t\t\t\t\t\tMembership Ending Date:";
	        cout<<"\n\t\t\t\t\t\t\t\t\tYear";
			cout<<eyear;
	        cout<<"\n\t\t\t\t\t\t\t\t\tMonth:";
			cout<<emonth;
	        cout<<"\n\t\t\t\t\t\t\t\t\tDay:";
			cout<<day;
			Sleep(2000);
		}
		else
		{
			cout<<"\n\t\t\t\t\t\t\t\t\tMembership Ending Date:";
	        cout<<"\n\t\t\t\t\t\t\t\t\tYear:";
			cout<<year;
	        cout<<"\n\t\t\t\t\t\t\t\t\tMonth:",
			cout<<month+membership;
	        cout<<"\n\t\t\t\t\t\t\t\t\tDay:";
			cout<<day;
			Sleep(2000);
		}		 
	}
	else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\tThis package doesnot exist!!";
		Sleep(2000);
		goto membershipwrong;
	}*/
}
<<<<<<< HEAD

//Add members End

//Main Function
int main(){
	int choice;
	SanoGraphics dumbbell;
	top:
//	dumbbell.graphics();
	//dumbbell.thankyou();
	Member member;
	graphics();
	member.Title_menu();
	member.menu();
=======
void Member::Show_Member()
{
	cout<<"\n\t\t\t\t\t\t\t\t\tName:"<<Mname;
	cout<<"\n\t\t\t\t\t\t\t\t\tId:"<<Mid;
	cout<<"\n\t\t\t\t\t\t\t\t\tAge:"<<Mage;
	cout<<"\n\t\t\t\t\t\t\t\t\tHeight(in foot):"<<Mheight;
	cout<<"\n\t\t\t\t\t\t\t\t\tWeight(in kg:)"<<Mweight;
}
fstream file_obj;
Member member;
void add_new()
{
	system("cls");	
    file_obj.open("E:\\Member.txt",ios::app);
    member.Add_Member();
	file_obj.write((char*)&member,sizeof(member));
	system("cls");
    //SanoGraphics TY;
	// TY.thankyou();
	file_obj.close();
}
void show_all()
{
	system("cls");
	file_obj.open("E:\\Member.txt",ios::in);
	if(!file_obj)
	{
        cout<<"Error in opening file..";
    }
	while(file_obj.read((char*)&member,sizeof(member)));
	{
	    member.Show_Member();
	    getchar();
	}
	file_obj.close();
}
void find_one(int Fid)
{
	system("cls");
	file_obj.open("E:\\Member.txt",ios::in);
	if(!file_obj)
	{
        cout<<"Error in opening file..";
    }
    file_obj.seekg(0);
	while(file_obj.read((char*)&member,sizeof(member)));
	{
		if(member.getID()==Fid)
		{
			system("cls");
			member.Show_Member();
		}
		else
		{
			cout<<"NO DATA";
		}
	}
	getchar();
	file_obj.close();
}
void edit_one(int Eid)
{
    int num;
    system("cls");
    file_obj.open("E:\\Member.dat",ios::in|ios::out);
    if(!file_obj)
	{
        cout<<"Error in opening file..";
    }
    while(file_obj.read((char*)&member,sizeof(member)))
    {
    	if(member.getID()==Eid)
    	{
    		member.Show_Member();
    		cout<<"\nPlease Enter The New details of the member: "<<endl;
    		member.Add_Member();
    		int pos=1*sizeof(member);
    		file_obj.seekp(pos,ios::cur);
    		file_obj.write((char*)&member,sizeof(member));
    		cout<<endl<<endl<<"\t Record Successfully Updated...";
    	}
    	else
    	{
    		cout<<"Not Found";
		}
    }
    file_obj.close();
    getchar();
}
void menu()
{
	top:
	int choice;
	cout<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t       GYM MANAGEMENT SYSTEM"<<endl;
	cout<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<endl<<"\t\t\t\t\t\t\t\t            1) Add Members...............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            2) List Members..............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            3) Find Members..............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            4) Trainers Information......";
	cout<<endl<<"\t\t\t\t\t\t\t\t            5) Equipment Information.....";
	cout<<endl<<"\t\t\t\t\t\t\t\t            6) Exit......................";
	cout<<endl<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t      Choice : ";

	cin>>choice;
	fflush(stdin);
	
	//Switch Cases Starts
	
	switch(choice)
	{

	    case 1:	
	    {
	    	AddNewMember:
	    	system("cls");
	    	int YesNo;	
	        fstream file_obj;
            file_obj.open("D:/Member.txt",ios::out);
            if(file_obj==NULL)
   	    	{
   	     		file_obj.open("D:/Member.txt",ios::out);
   	     		if(file_obj==NULL)
   	     		{
   	     	    	printf("File not opened!!!");
   	     	    	exit(0);
   	     	   		return 0;
   	        	}
	   		}
        	member.Add_Member();
		    file_obj.write((char*)&member,sizeof(member));
		    YesNoChoice:
		    system("cls");
	        SanoGraphics TY;
		       // TY.thankyou();
			cout<<"\n\t\t\t\t\t\t\t\t\tDo you want to add another member:";
		    cout<<"\n\t\t\t\t\t\t\t\t\t1)Yes                        2)No"<<endl;
		    cout<<"\t\t\t\t\t\t\t\t\tChoice:";
	        cin>>YesNo;
		    if(YesNo==1)
		    {
		        system("cls");
		        goto AddNewMember;

	    case 1:
	    	{
	    		AddNewMember:
	    		int YesNo;
	    		add_new();
	    		cout<<"\n\t\t\t\t\t\t\t\t\tDo you want to add another member:";
		        cout<<"\n\t\t\t\t\t\t\t\t\t1)Yes                        2)No"<<endl;
		        YesNoChoice:
		        cout<<"\t\t\t\t\t\t\t\t\tChoice:";
		        cin>>YesNo;
		        if(YesNo==1)
		        {
		        	system("cls");
		        	goto AddNewMember;
				}
				if(YesNo==2)
				{
					system("cls");
					goto top;
				}
				else
				{
					cout<<"\n\t\t\t\t\t\t\t\t\tWrong Entry!!";
					goto YesNoChoice;
					system("cls");
				}
		        break;

			}
	    case 2:


			system("cls");
//		    member.list_member();
			goto top;
		    break;		

	    	{
	    		show_all();
		        break;	
			}

	    case 3:
	    	{
	    		int findid;
	    		system("cls");
	    		cout<<"\n\t\t\t\t\t\t\t\t\tEnter num:";
	    		cin>>findid;
		        find_one(findid);
	            int datachoice;
			    cout<<"\n\t\t\t\t\t\t\t\t\tWhat do you want to do with this data:";
			    datachoicewrong:
	            cout<<"\n\t\t\t\t\t\t\t\t\t1.Modify";
			    cout<<"\n\t\t\t\t\t\t\t\t\t2.Delete";
		        cout<<"\n\t\t\t\t\t\t\t\t\t3.Exit";
	            cout<<"\n\t\t\t\t\t\t\t\t\tInput your choice:";
	            cin>>datachoice;
		        fflush(stdin);
		        system("cls"); 
		        switch(datachoice)
		        {
		        	case 1:
		        		{
		        			edit_one(findid);
		        			break;
						}
					case 2:
						{
							cout<<"Hi";
							break;
						}
					default:
					    {
					    	cout<<"\t\t\t\t\t\t Invalid Choice!!!"<<endl;
				            Sleep(1000);
			             	system("cls");
						}	
				}
		        break;
			}
	    case 4:
	    	{
				int editid;
	    		system("cls");
	    		cout<<"\n\t\t\t\t\t\t\t\t\tEnter num:";
	    		cin>>editid;		
		        edit_one(editid);
		        break;	
			}
    	case 5:
    		{
    			system("cls");
		cout<<"hehe";
		break;
			}
    	case 6:
    		{
    			system("cls");
    			exit(0);
    	        break;
			}
	    default:

	    {
	    	cout<<"\n\t\t\t\t\t\t\t Invalid Choice!!!"<<endl;
			Sleep(1000);
			system("cls");	
//			goto top;
		}
	}
	
	//Switch cases Ends

	    	{
	    		cout<<"\t\t\t\t\t\t Invalid Choice!!!"<<endl;
				Sleep(1000);
				system("cls");
				
			}
	}
}
int main()
{
	SanoGraphics dumbbell;
	dumbbell.graphics();
	//dumbbell.thankyou();
	dumbbell.graphics();
	menu();

return 0;
}

//End of the program

