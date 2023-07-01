#include <bits/stdc++.h>
using namespace std;
class BCOM
{
	public:
	int reg_number;
    int roll_number;
    string section;
    void insert(){
       cout<<"enter the reg_number:"<<endl;
       cin>>reg_number;
       cout<<"enter roll_number:"<<endl;
       cin>>roll_number;
       cout<<"enter the section:"<<endl;
       cin>>section;
    }
    void display(){
        cout<<"students registration number is:"<<reg_number<<endl;
        cout<<"students roll number is :"<<roll_number<<endl;
        cout<<"students section is:"<<section<<endl;
    }
};
int main() {
	BCOM obj;
    obj.insert();
    obj.display();
	cout<<"size of class:"<<sizeof(obj)<<endl;
}
