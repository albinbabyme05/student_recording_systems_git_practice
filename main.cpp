
#include<iostream>
#include<cstdlib>

using namespace std;

class Student{
private:
	int id;
	float grade;
	string name;

public:
	Student(int studId, string studName, float studGrade){
		id = studId;
		name = studName;
		grade = studGrade;
	}

	int getId(){
		return id;
	}
	string getName(){
		return name;
	}
	float getGrade(){
		return grade;
	}

	string setName(string newName){
		return name += newName;
	}

	int setId(int newId){
		return id += newId;
	}

	float setGrade(float newGrade){
		return grade += newGrade;
	}

	void display(){
		cout<<"ID : "<<id<<" ";
		cout<<"Stu. Name: "<<name<<" ";
		cout<<"grade : "<<grade<<endl;
		
	}

	

};




int main(){

   int id;
   string studentName;
   float stduentGrade;

   cout<<"Enter student name : "<<endl;
   cin>>studentName;
   cout<<"Enter grade: "<<endl;
   cin>>stduentGrade;
   cout<<"Enter id: "<<endl;
   cin>>id;


	Student s1(id, studentName, stduentGrade);
	s1.display();
	



	return 0;
}