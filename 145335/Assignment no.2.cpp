#include <iostream>
#include<string>
using namespace std;
int main(){
	string name;
	string course;
	int score;
	cout<<"Enter the full name of the student" <<endl;
	getline(cin ,name);
	cout<<"Enter the course of the student" <<endl;
	getline(cin ,course);
	cout<<"Enter the score of the student" <<endl;
	cin >>score;
	if(score>=70){
		cout<<"Grade:A";
}else if(score>=60 && score<=69){
	cout<<"Grade:B";
	}else if(score>=50 && score<=59){
		cout<<"Grade:C";
		}else if(score>=40 && score<=49){
			cout<<"Grade:D";
			}else if(score<40){
				cout<<"Grade:F";
				}else{
					cout<<"Invalid score";
				}
				return 0;
}
				