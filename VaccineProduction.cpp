#include <iostream>
using namespace std;

int main(){
	int p;
	int D1,D2;
	int V1,V2; //V1 = second input   V2 = 4th input
	int bogus1,bogus2;
	int sum;
	int lastIn;
	int answer;

	cout <<" Enter 5 Numbers"<<endl;
		cin >>bogus1;
		cin >>V1;
		cin >>bogus2;
		cin >>V2;
		cin >>lastIn;
	
	//D1=D2=1//
	D1=D2=1;
	
	sum=V1+V2;
	//Parameter check//	
	if(sum >=100 || sum <=1)
	
	cout <<"Over Paramaters, try a number between 1 and 100"<<endl;
	
	else
		answer =(lastIn / (sum)+1);
		cout << answer << endl;


		//Now for Day 0
		cout << " Now for day 0"<<endl;
		cout <<" Enter 5 Numbers"<<endl;
		cin >>V1;
		cin >>V2;
		cin >>bogus2;
		cin >>bogus1;
		cin >>lastIn;


	//Parameter check//	
	if(sum >=100 || sum <=1)
	
	cout <<"Over Paramaters, try a number between 1 and 100"<<endl;
	
	else
		answer =V1+V2;
		cout << answer << endl;
}
