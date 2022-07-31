#include<fstream>
#include<iostream>
#include<iomanip>
//#include<ctime>
#include<windows.h>
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
};
class Member
{
	protected:
		string Mname,Mcontact_no;
		int Mid,Mage,Mheight,Mweight;
	
	public:
		void Title_menu();
		int menu();
		void choice(char choice)
		{
	    switch(choice)
		{
		case '1':
			int year,month,day;
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
			cout<<"\n\t\t\t\t\t\t\t\t\tYear:";
			cin>>year;
			fflush(stdin);
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
			   /*daywrong: 
			   printf("\t\t\t\t\t\t\t\t\tDay:");
			   scanf("%d",&dataM.time.day);
			   fflush(stdin);
			   if(dataM.time.day>31||dataM.time.day<1)
			     {
			     	printf("Wrong Entry!!");
			     	printf("\n");
			     	goto daywrong;
			     }
			   membershipwrong:	  
			   printf("\t\t\t\t\t\t\t\t\tChoose a membership plan:");
			   printf("\n\t\t\t\t\t\t\t\t\t3months");
			   printf("\n\t\t\t\t\t\t\t\t\t6months");
			   printf("\n\t\t\t\t\t\t\t\t\t9months");
			   printf("\n\t\t\t\t\t\t\t\t\t12months");
			   printf("\n\t\t\t\t\t\t\t\t\tEnter the membership plan(months):");
			   scanf("%d",&dataM.choicemembership);
			   if(dataM.choicemembership==3||dataM.choicemembership==6||dataM.choicemembership==9||dataM.choicemembership==12)
			   { 
			      int eyear,emonth,tempmonth;
			      tempmonth=dataM.time.month+dataM.choicemembership;
	              printf("\n\t\t\t\t\t\t\t\t\tYour package will end after %dmonths prior to this date.",dataM.choicemembership);
	              if(tempmonth>12)
	                 {
	                 	eyear=dataM.time.year+1;
	                 	emonth=tempmonth-12;
	                 	printf("\n\t\t\t\t\t\t\t\t\tMembership Ending Date:");
	                 	printf("\n\t\t\t\t\t\t\t\t\tYear:%d",eyear);
	                 	printf("\n\t\t\t\t\t\t\t\t\tMonth:%d",emonth);
	                 	printf("\n\t\t\t\t\t\t\t\t\tDay:%d",dataM.time.day);
					 }
			      else
				     {
				     	printf("\n\t\t\t\t\t\t\t\t\tMembership Ending Date:");
	                 	printf("\n\t\t\t\t\t\t\t\t\tYear:%d",dataM.time.year);
	                 	printf("\n\t\t\t\t\t\t\t\t\tMonth:%d",dataM.time.month+dataM.choicemembership);
	                 	printf("\n\t\t\t\t\t\t\t\t\tDay:%d",dataM.time.day);
				     }		 
			   }
			   else
			   {
			   	 printf("\n\t\t\t\t\t\t\t\t\tThis package doesnot exist!!");
			   	 goto membershipwrong;
			   }*/
		break;
		case '2':
			system("cls");
			cout<<"Hii";
		break;
		case '3':
			system("cls");
			cout<<"YoYo";
		break;
		case '4':
			system("cls");		
			cout<<"Nameste";
		break;
		case '5':
			system("cls");
			cout<<"hehe";
		break;
		case '6':
			system("cls");
			cout<<"Hoho";
		break;
		default:
			cout<<"\t\t\t\t\t\t Invalid Choice!!!"<<endl;
			cout<<"\t\t\t\t\t\t Enter Valid Choice";
			Sleep(2000);
			system("cls");
			Title_menu();
			menu();
	}
}
};
class membership_time: public Member
{
	int day,month,year;
	public:
		void getMembership();
};
void Member::Title_menu()
{
	cout<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t       GYM MANAGEMENT SYSTEM"<<endl;
	cout<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
}
int Member::menu(){
	char ch;
	cout<<endl<<"\t\t\t\t\t\t\t\t            1) Add Members...............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            2) List Members..............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            3) Find Members..............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            4) Workout Sheet.............";
	cout<<endl<<"\t\t\t\t\t\t\t\t            5) Trainers Information......";
	cout<<endl<<"\t\t\t\t\t\t\t\t            6) Equipment Information.....";
	cout<<endl<<"\t\t\t\t\t\t\t\t            7) Exit......................";
	cout<<endl<<"\t\t\t\t\t\t\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t      Choice : ";
	cin>>ch;
	fflush(stdin);
	return ch;
}
int main(){
	char c;
	SanoGraphics dumbbell;
	dumbbell.graphics();
	Member member;
	member.Title_menu();
	c = member.menu();
	member.choice(c);
	return 0;
} 
