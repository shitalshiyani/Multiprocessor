#include<iostream>
#include<string.h>

using namespace std;

class Student
{
	public :
		void set_value()
		{
			cout<<"Student Name is Parth"<<endl;
		}
		
		void set_value(int n)
		{
			cout<<"Parth's Id is "<< n <<endl;
		}
		
		void set_value(char s[],int b)
		{
			cout<<"Parth is Study in "<< s << " School and His Standard is "<< b <<endl;
		}
		
		void set_value(char a[],float p,int r)
		{
			cout<<"He is Brilliant in "<< a <<" Subject and His total Percentage is "<< p << "% and He achieve "<< r <<"nd rank in whole class."<<endl;
		}
};

main()
{
	Student s;
	
	s.set_value();
	s.set_value(5);
	s.set_value("Red & White",10);
	s.set_value("Maths",93.6f,2);
}
