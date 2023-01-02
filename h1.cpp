#include<iostream>
using namespace std;


class A{
	public:
		char id[20],name[50],role[10],salary[50],experience[100];
		char comp_name[100],address[100],email[20],contact[20];
		
		void setter1() {
			cout<<"Enter your id :";
			cin>>id;
			cout<<"Enter your Name :";
			cin>>name;
			cout<<"Enter your Role num :";
			cin>>role;
		}
};
class B : public A {
	public:
		void setter2() {
			cout<<"Enter your salary :";
			cin>>salary;
			cout<<"Enter your Experience :";
			cin>>experience;
		}
};
class C : public B {
	public:
		void setter3() {
		cout<<"Enter your comp_name :";
		cin>>comp_name;
		cout<<"Enter your address : ";
		cin>>address;
		}
		void getter1() {
			cout<<endl;
			cout<<"id="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"role="<<role<<endl;
		}
};
class D : public C {
	public:
		void setter4() {
			cout<<"Enter  your Email :";
			cin>>email;
			cout<<"Enter your contact:";
			cin>>contact;
	}
	void getter2() {
		cout<<"salary="<<salary<<endl;
		cout<<"experience="<<experience<<endl;
	 	cout<<"comp_name="<<comp_name<<endl;
		cout<<"address="<<address<<endl;
		cout<<"Email="<<email<<endl;
		cout<<"contact="<<contact<<endl;
		
	}		

	
};
main() {
	D d;
	d.setter1();
	d.setter2();
	d.setter3();
	d.setter4();
	d.getter1();
	d.getter2();

}
