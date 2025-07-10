#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;		// data members
		float cgpa;
		
		btech(){}	// do nothing constructor
		
		btech(int r, float f): roll(r), cgpa(f) {}	// parameterized constructor
		
		btech( btech &obj ){
			
			this->roll = 256; 
			this->cgpa = 8.9;
		}
};

int main(){
	
	btech s1, s2(44, 8.9);
	
	cout<< "Roll: "<<s2.roll <<endl;
	cout<< "CGPA: "<<s2.cgpa <<endl<<endl;
	
//	btech s3(s2);
//	btech s3 = {s2};
	btech s3 = s2;
	
	cout<< "Roll: "<<s3.roll <<endl;
	cout<< "CGPA: "<<s3.cgpa <<endl; 
	
	
	return 0;
}
