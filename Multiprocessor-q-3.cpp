#include<iostream>
#include<string.h>

using namespace std;

class Me
{
	public :
		void info()
		{
			cout<<"I have 1000 rs."<<endl;
		}
};

class You : public Me
{
	public :
		void info()
		{
			cout<<"You have 2500 rs."<<endl;
		}
}; 

main()
{
	You y;
	
	y.info();
	y.Me::info();
}
