#include<iostream>
#include<string.h>

using namespace std;

int main()
{

	char s1[20],s2[10];
	
	cout<<"\n Enter First String : "<<endl;
	cin>>s1;
	
	cout<<"\n Enter second String : "<<endl;
	cin>>s2;
	
	strcpy(s1,s2);
	
	cout<<"\n copied string is : "<<s1<<endl;
	

}
