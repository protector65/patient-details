# patient-details
#include <iostream>
#include <fstream>
using namespace std;
class patient{
	public:
	string name,pname,address;
	int age,no;
	};
	int main()
	{
	char ans='y';
		ofstream saad;
		saad.open("git.txt",ios::app);
		patient arr[20];
		for(int i=1;i<=20;i++){
		while(ans=='y' || ans=='y')
		{
		cout<<"parient "<<i;
		cout<<"\nenter name : ";
		cin>>arr[i].name;
		cout<<"\nenter the age :";
		cin>>arr[i].age;
		cout<<"\nenter parents name :";
		cin>>arr[i].pname;
		cout<<"\nenter eddress :";
		cin>>arr[i].address;
		cout<<"\nenter number :";
		cin>>arr[i].no;
		saad<<"patient"<<i<<"\n"<<"name : "<<arr[i].name<<"\n"<<"age : "<<arr[i].age<<"\n"<<"parents name :"<<arr[i].pname<<"\n"<<"address : "<<arr[i].address<<"\n"<<"phone number : "<<arr[i].no;
			
		cout<<"enter more details y\n";
		cin>>ans;
			}
		}
			cout<<endl;
			saad.close();
		return 0;
		}
		
