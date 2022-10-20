#include<iostream>
#include<conio.h>
#include<String.h>
using namespace std;
int main()
{
	char name[30], pizza1[]="tandoori Paneer Pizza" ,pizza2[]="Chicken Bar BQ" ,pizza3[]="Simply Cheesey" ,pizza4[]="Thai delight", roll1[]="Chicken Swarma Roll", roll2[]="Veg Swarma Mayo Roll", roll3[]="Egg chicken Roll",bur1[]="Paneer Cheese Burger",bur2[]="Chicken Burger with fries",bur3[]="Veg Burger";
	char pas1[]="Masala Pasta", pas2[]="Puff Pasta", pas3[]="Extream Cheese Pasta";
	char bir1[]="Chicken Biryani", bir2[]="Veg Biryani", bir3[]="Egg Biryani";
 	char bev1[]="Coke", bev2[]="Coffee", bev3[]="Iced Tea", bev4[]="Soda", gotostart ;

	int choice=0,pchoice,pchoice1, quantity;// time=30;
	beginning:
	system("CLS");
		cout<<"\t\t\t----------Food Junction-----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin.getline(name, 50);
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t----------MENU----------\n\n";

	cout<<"1) Pizza\n";
	cout<<"2) Burger\n";
	cout<<"3) Pasta\n";
	cout<<"4) Rolls\n";
	cout<<"5) Biryani\n\n";
    cout<<"6) Beverage\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2)  "<<pizza2<<"\n";
		cout<<"3)  "<<pizza3<<"\n";
		cout<<"4)  "<<pizza4<<"\n";
		cout<<"\nPlease Enter which pizza would you like to order?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n1) Small Rs.150\n"<<"2) Regular Rs.350\n"<<"3) Large Rs.600\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			break;

			case 2: choice = 350*quantity;
			break;

			case 3: choice = 600*quantity;
			break;


			      }
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\n\nThank you For Ordering From Food Junction\n";
			 break;
			 
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pizza2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			 
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			 
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;

			}
			cout<<"Would you like to order anything else? Yes / No:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

	}

	 }


	 else if(choice==2)
	 {
		cout<<"\n1 "<<bur1<<" Rs.150"<<"\n";
		cout<<"2 "<<bur2<<" Rs.100"<<"\n";
		cout<<"3 "<<bur3<<" Rs.130"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Burger you would like to order?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 130*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bur2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			  
			}
			cout<<"\nWould you like to order anything else? Yes / No:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n1  "<<pas1<<" Rs.240"<<"\n";
		cout<<"2  "<<pas2<<" Rs.160"<<"\n";
		cout<<"3  "<<pas3<<" Rs.100"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Pasta you would like to order?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 240*quantity;
			break;

			case 2: choice = 160*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pas1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pas2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pas2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;

			}
			cout<<"Would you like to order anything else? Yes / No:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


	 else if(choice==4)
	 {
		cout<<"\n1 "<<roll1<<" Rs.120"<<"\n";
		cout<<"2 "<<roll2<<" Rs.60"<<"\n";
		cout<<"3 "<<roll3<<" Rs.80"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which you would like to order?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 120*quantity;
			break;

			case 2: choice = 60*quantity;
			break;

			case 3: choice = 80*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<roll1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<roll2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction \n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<roll3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;


			}
 }

}
	else if(choice==5)
	 {
		cout<<"\n1 "<<bir1<<" Rs.180"<<"\n";
		cout<<"2 "<<bir2<<" Rs.120"<<"\n";
		cout<<"3 "<<bir3<<" Rs.220"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Biryani you would like to order?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 180*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 140*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bir1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bir2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bir3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;

			}
			cout<<"Would you like to order anything else? Yes / No:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}

// Cold drink
else if(choice==6)
	 {
		cout<<"\n1  "<<bev1<<" Rs.50"<<"\n";
		cout<<"2  "<<bev2<<" Rs.60"<<"\n";
		cout<<"3  "<<bev3<<" Rs.30"<<"\n";
		cout<<"4  "<<bev4<<" Rs.20"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Bevarage you would like to order?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 50*quantity;
			break;

			case 2: choice = 60*quantity;
			break;

			case 3: choice = 30*quantity;
			break;
	        
			case 4: choice = 20*quantity;
			break;
			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bev1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bev2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bev3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			 break;
			 
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bev4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Food Junction\n";
			  cout<<"ENJOY YOUR MEAL!\n\n\n";
			 break;
}

			cout<<"Would you like to order anything else? Yes / No:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}

			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to order again? Yes / No: " ;
		cout<<"\n\n\t-----------------------\n";
  cout<<"\t-----------------------\n";
 
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			}

     getch();
}
