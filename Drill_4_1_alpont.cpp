#include <iostream>
#include <vector>
using namespace std;
int main()
{
	char exit = 'a';
	int n_1=0, n_2=0;
	cout<<"Type in two number. To exit type '|'.\n";
	while(exit!='|')
	{
		cout<<"Enter number one: ";
		cin>>n_1;
		cout<<"\nEnter number two: ";
		cin>>n_2;
		cout<<"\nNumber one: "<<n_1<<"\nNumber two: "<<n_2;
		cout<<"\nIf you want to exit type '|' otherwise enter somthing else: ";
		cin>>exit;
	}
	return 0;
}
