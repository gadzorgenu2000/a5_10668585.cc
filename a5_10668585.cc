#include<iostream>
#include<string>
using namespace std;

struct Student {
	string firstname;
	double score;
	int age;
	string gender;
	string id;
	string grade;
	
};



int main() {
	double average;
	int sum_of_scores = 0;
	int male_count=0, female_count=0;
	int stud_len = 5;
	Student ug_students[stud_len];
	
	//inputs
	for(int i=0; i<stud_len; i++) {
		cout << "Enter name\n";
		cin >> ug_students[i].firstname;
		
		cout << "Enter gender\n";
		cin >> ug_students[i].gender;
		
		cout << "Enter age\n";
		cin >> ug_students[i].age;
		
		cout << "Enter id\n";
		cin >> ug_students[i].id;
		
		cout << "Enter score\n";
		cin >> ug_students[i].score;
		
		if(ug_students[i].score >= 90 ) {
			ug_students[i].grade = "A";
		} else if(ug_students[i].score >=80 && ug_students[i].score < 90) {
			ug_students[i].grade = "B";
		} else if(ug_students[i].score >=70 && ug_students[i].score < 80) {
			ug_students[i].grade = "C";
		} else if(ug_students[i].score >=60 && ug_students[i].score < 70) {
			ug_students[i].grade = "D";
		} else if(ug_students[i].score >=50 && ug_students[i].score < 60) {
			ug_students[i].grade = "E";
		} else {
			ug_students[i].grade = "F";
		}
		
		//determining number of males and females
		if(ug_students[i].gender == "m") {
			male_count +=1;
		} else {
			female_count +=1;
		}
		
		//Add scores
		sum_of_scores += ug_students[i].score;
	}
	
	//process
	average = sum_of_scores / stud_len;
	
	//Outputs
	cout << "\n\n Displaying Struct data\n\n";
	for(int i=0; i<stud_len; i++) {
		cout <<" Student name " << ug_students[i].firstname <<" ";
		cout <<" Gender " << ug_students[i].gender <<" ";
		cout <<" Age " << ug_students[i].age <<" ";
		cout <<" Student ID " << ug_students[i].id <<" ";
		cout <<" Score " << ug_students[i].score <<" ";
		cout <<" Grade " << ug_students[i].grade <<" ";
		cout << "\n\n";	
	}
	
	cout << "\n\n\n";
	cout << "Average score = " << average << "\n";
	cout << "Number of males = " << male_count << "\n";
	cout << "Number of females = " << female_count << "\n";
	cout << "\n\n";
	
	return 0;
}
