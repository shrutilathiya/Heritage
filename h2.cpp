#include<iostream>
using namespace std;

class animal {
	public:
	char  name[100];
	char  age[100];
	void setA() {
	cout<<"Enter animal name :";
	cin>> name;
	cout<<"Enter animal  age :";
	cin>> age;
	cout<<endl;
	}
};
class  Zebra : public animal {
		public:
			void get1() {				
				cout<<"name="<<name<<endl;
				cout<<"age="<<age<<endl;
			}
};
class Dolphin : public animal {
		public:
			void get2() {
				cout<<"name="<<name<<endl;
				cout<<"age="<<age<<endl;
			}
			
};

main() {
 	Zebra Z;
	Dolphin D;
	Z.setA();
	D.setA();
	Z.get1();
	D.get2();

}
