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
		if(n_1<n_2)
		{	
			cout<<"\nThe smaller value is: "<<n_1;
			cout<<"\nThe higher value is: "<<n_2;
		}
		if(n_1==n_2) cout<<"\nThe numbers are equal.";
		cout<<"\nIf you want to exit type '|' otherwise enter something else: ";
		cin>>exit;
	}
	return 0;
}
