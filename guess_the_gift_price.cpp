#include<iostream>
using namespace std;

int main()
{
	string gift_item,player_name;
	float cost;
	int count = 0;
	cout<<"Welcome to the game:Item and its cost\n";
	getline(cin,gift_item);
	cin>>cost;
	
	cout<<"Lets start\n";
	cout<<"\nWho is playing today:";
	cin>>player_name;
	cout<<"\nWelcome "<<player_name<<",";
	cout<<"You need to guess the cost of "<<gift_item;
	
    while(true){
		float guess;
		cout<< "\nYour guess ->";
		cin>>guess;
		count++;
		if (guess == cost)
		{
			cout << "Yay!" << player_name << " you guessed it right! \n in " << count << " guesses.";
			cout << endl << " !! You WIN !! ";
			break;
		} 
		else{
			cout << "Wrong guess!\n";
		if (guess > cost){
			cout << " Woh!! slow down you guessed more than the price!";
		} else if ( guess < cost){
			cout << " You guessed less than the price!";
		}
		if (count > 5){
		cout<<"You lost";
		break;
	}
	}
	
}

	return 0;
}