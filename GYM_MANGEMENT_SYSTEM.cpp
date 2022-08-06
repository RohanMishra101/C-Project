#include<iostream>
#include<iomanip>
#include<ctime>
#include<windows.h>
#include<fstream>
using namespace std;
class SanoGraphics
{
	public:
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
};
class Member
{
	public:
		void Title_menu();
		void menu();
		void Add_Member();
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
void Member::Add_Member()
{
	string Mname,Mcontact_no;
	float Mid,Mage,Mheight,Mweight;
	int year,month,day,membership;
	int year1, month1, day1;
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
	getline(cin,Mname);
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
	cout<<endl<<"\t\t\t\t\t\t\t\t\t     Current Date:"<<__DATE__<<endl;
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
	}
}
int main(){
	int choice;
	SanoGraphics dumbbell;
	//dumbbell.thankyou();
	Member member;
	top:
	dumbbell.graphics();
	member.Title_menu();
	member.menu();
	cin>>choice;
	fflush(stdin);
	switch(choice)
	{
	    case 1:
	    	{
	    		AddNewMember:
	    		system("cls");
	    		int YesNo;	
	        	fstream file_obj;
                file_obj.open("E:\\Member.txt",ios::out);
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
	    	{
	    		system("cls");
		        cout<<"Hii";
		        goto top;
		        break;	
			}
	    case 3:
	    	{
	    		system("cls");
		        cout<<"YoYo";
		        break;
			}
	    case 4:
	    	{
	    		system("cls");		
		        cout<<"Nameste";
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
		cout<<"Hoho";
    	break;
			}
	    default:
	    	{
	    		cout<<"\t\t\t\t\t\t Invalid Choice!!!"<<endl;
				Sleep(1000);
				system("cls");
				
			}
	}
return 0;
}

