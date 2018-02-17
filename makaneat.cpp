#include <iostream>

using namespace std;

int main()
{
	string happy, lagi;
	int feel;
	string answer;
	cout<<"Welcome To MakanEat!"<<endl;
	system("pause");
	cout<<"Hungry? But don't know where to eat? (Yes/No)"<<endl;
	cin>> answer;
	
	if(answer == "Yes")
	{
		
		cout<<"Alright. But first tell me what's your mood righ now: "<<endl;
		cout<<"1. Happy "<<endl;
		cout<<"2. Sad "<<endl;
		cout<<"3. Angry "<<endl;
		cout<<"4. Balance "<<endl;
		
	    cin>>feel;
		system("cls");
		if( feel == 1)
		{
			int Happy;
			cout<<"Aha, so you are happy"<<endl;
			system("pause");
			system("cls");
			cout<<"--------------------------------------------------------------------------------"<<endl;
			cout<<"Type of happiness you are feeling right now: "<<endl;
			cout<<"1. Happy gile"<<endl;
			cout<<"2. Happy biase "<<endl;
			cout<<"3. Happy sikit je"<<endl;
			
			cout<<"Your asnwer: ";
			cin>>Happy;
			system("cls");
			
			if(Happy == 1)
			{
				cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
				cout<<"McDonald";
			}
			
			else if(Happy == 2)
			{
				cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
				cout<<"Baskin Robins";
			}
			
			else if(Happy == 3)
			{
				cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
				cout<<"Chicken Rice Shop";
			}
			
			else {
				cout<<"Invalid ";
			}
		}
		
		 else if (feel == 2)
		{
			int Sad;
			cout<<"Oh no! Why did you sad?  :( "<<endl;
			system("pause");
			system("cls");
			cout<<"--------------------------------------------------------------------------------"<<endl;
			cout<<"What type of sadness are you feeling right now :"<<endl;
			cout<<"1. Sad because break up"<<endl;
			cout<<"2. Sad about bad result"<<endl;
			cout<<"3. Sad just because you got scold by someone else"<<endl;  
			
			cout<<"Fill your answer here: ";
			cin>>Sad;
			system("cls");
			
			if(Sad == 1)
			{
				cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
				cout<<" Chaiwalla cafe"<<endl;
			}
			
			else if(Sad == 2)
			{
				cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
				cout<<" Souled Out"<<endl;
			}
			
			else if(Sad == 3)
			{
				cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
				cout<<" Starbucks"<<endl;
			}       
			
			else{
				cout<<"Invalid answer";
			}
		}
		
		 else if( feel == 3)
		{
			int Angry;
			cout<<"There's no need to get angry ok."<<endl;
			system("pause");
			system("cls");
			cout<<"How angry are you?"<<endl;
			cout<<"1. Really angry "<<endl;
			cout<<"2. Feel like to punch somebody"<<endl;
			cout<<"3. A lil bit"<<endl;
			
			cout<<"Please leave your answer here: ";
			cin>>Angry;
			system("cls");
			
			if(Angry == 1)
			{
				cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
				cout<<"Kentucky Fried Chicken (KFC)";
			}
			
			else if(Angry == 2)
			{
				cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
				cout<<"Tony Romas";
			}
			
			else if(Angry == 3)
			{
				cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
				cout<<"Nasi Kandar Pelita";
			}
			
			else{
				cout<<"Jawab betul betullah";
			}
		}
		
		else if( feel == 4)
		{
			cout<<"That is so good !"<<endl;
			cout<<"There's no need to describe your balance feel"<<endl;
			system("pause");
			system("cls");
			cout<<"Here are the suggestion restaurant/cafe:-"<<endl;
			cout<<"Victoria Station"<<endl;
			cout<<"Mickey's Pizza"<<endl;
			cout<<"Kfry";
			
			
		}
		
		
	}
	 
	else if(answer == "No")
	{
		return 0;
	}
	
	else 
	{
		cout<<"invalid";
	}

	
	
}

