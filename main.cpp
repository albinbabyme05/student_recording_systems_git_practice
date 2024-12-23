
#include<iostream>
#include<cstdlib>
#include<fstream>
#include <vector>

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

	string addTextFile(){
        return "ID: " + to_string(id) + ", Name: " + name + ", Grade: " + to_string(grade);
    }

};


int main(){

	// to store the informatiuon
   vector<Student> storeDetails;

   int id;
   string studentName;
   float stduentGrade;
   string choice;


   do
   {
	//input from user
	cout<<"Enter student name : "<<endl;
	cin>>studentName;
	cout<<"Enter grade: "<<endl;
	cin>>stduentGrade;
	cout<<"Enter id: "<<endl;
	cin>>id;

	// create objects
	Student newStudent(id, studentName, stduentGrade);
	storeDetails.push_back(newStudent);

	cout<<"Do you wnat to continue ? press 'y/Y' to continue... ";
	cin>>choice;

   } while (choice=="y" || choice =="Y");

   // display store details
   cout<<"\n Saved Details \n";
   for (auto details : storeDetails)
   {
	details.display();
   }

   // write the details to a text file
   ofstream dataFile ("studentLog.txt");
   for (auto addDetails : storeDetails)
   {
	dataFile<< addDetails.addTextFile()<<endl;
   }

   
	return 0;
}