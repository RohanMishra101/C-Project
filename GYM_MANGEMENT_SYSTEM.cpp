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
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n"; 
   	cout<<"\n\t\t\t\t\t\t\t\t\t(|--|)Add Member details down bellow(|--|)";
   	cout<<"\n\t\t\t\t\t\t\t\t\t******************************************";
	cout<<"\n";
	cout<<"\n\t\t\t\t\t\t\t\t\tName:";
	getline(cin,Mname);
	fflush(stdin);
	cout<<"\t\t\t\t\t\t\t\t\tId:";
	cin>>Mid;
	fflush(stdin); 
	cout<<"\t\t\t\t\t\t\t\t\tAge:";
	cin>>Mage;
	fflush(stdin);
	cout<<"\t\t\t\t\t\t\t\t\tHeight(in foot):";
	cin>>Mheight;
	fflush(stdin);
	cout<<"\t\t\t\t\t\t\t\t\tWeight(in kg):";
	cin>>Mweight;
	fflush(stdin);
	cout<<"\t\t\t\t\t\t\t\t\tMembership starting date:";
	yearwrong:
	cout<<"\n\t\t\t\t\t\t\t\t\tYear:";
	cin>>year;
	fflush(stdin);
	if(year>2022||month<2024)
	{
		cout<<"Wrong Entry!!!!";
		cout<<"\n";
		goto yearwrong;
	}	
	monthwrong:
	cout<<"\t\t\t\t\t\t\t\t\tMonth:";
	cin>>month;
	fflush(stdin);
	if(month>12||month<1)
	{
		cout<<"Wrong Entry!!!!";
		cout<<"\n";
	    goto monthwrong;
	}	 
	daywrong: 
	cout<<"\t\t\t\t\t\t\t\t\tDay:";
	cin>>day;
	fflush(stdin);
	if(day>31||day<1)
	{
		cout<<"Wrong Entry!!";
		cout<<"\n";
		goto daywrong;
	}
	membershipwrong:	  
	cout<<"\t\t\t\t\t\t\t\t\tChoose a membership plan:";
	cout<<"\n\t\t\t\t\t\t\t\t\t3months";
	cout<<"\n\t\t\t\t\t\t\t\t\t6months";
	cout<<"\n\t\t\t\t\t\t\t\t\t9months";
	cout<<"\n\t\t\t\t\t\t\t\t\t12months";
	cout<<"\n\t\t\t\t\t\t\t\t\tEnter the membership plan(months):";
	cin>>membership;
	if(membership==3||membership==6||membership==9||membership==12)
	{ 
		int eyear,emonth,tempmonth;
		tempmonth=month+membership;
	    cout<<"\n\t\t\t\t\t\t\t\t\tYour package will end after "; 
		cout<<membership;
		cout<<"months prior to this date.";
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
		}		 
	}
	else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\tThis package doesnot exist!!";
		goto membershipwrong;
	}
}
int main(){
	int choice;
	SanoGraphics dumbbell;
	dumbbell.graphics();
	//dumbbell.thankyou();
	Member member;
	top:
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
		        SanoGraphics TY;
		        system("cls");
		       // TY.thankyou();
		        cout<<"\n\t\t\t\t\t\t\t\t\tDo you want to add another member:";
		        cout<<"\n\t\t\t\t\t\t\t\t\t1)Yes                        2)No";
		        cout<<"Choice:";
		        cin>>YesNo;
		        if(YesNo==1)
		        {
		        	goto AddNewMember;
				}
				if(YesNo==2)
				{
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
		system("cls");
			}
	}
	return 0;
} 
