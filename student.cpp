#include "student.h"

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[3], DegreeProgram degreeProgram) {

	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->degreeProgram = degreeProgram;

	for (int i = 0; i < 3; i++) {
		this->daysInCourse[i] = daysInCourse[i];
	}
}

Student::~Student() {
}

	void Student::setDaysInCourse(int daysInCourse[]) {
		for (int i = 0; i < 3; i++) {
			this->daysInCourse[i] = daysInCourse[i];
		}
	}

	void Student::setStudentID(string studentID) {
		this->studentID = studentID;
	}

	void Student::setFirstName(string firstName) {
		this->firstName = firstName;
	}

	void Student::setLastName(string lastName) {
		this->lastName = lastName;
	}

	void Student::setEmailAddress(string emailAddress) {
		this->emailAddress = emailAddress;
	}

	void Student::setAge(int age) {
		this->age = age;
	}

	void Student::setDegreeProgram(DegreeProgram degreeProgram) {
		this->degreeProgram = degreeProgram;
	}

	string Student::getStudentID() {
		return this->studentID;
	}

	string Student::getFirstName() {
		return this->firstName;
	}

	string Student::getLastName() {
		return this->lastName;
	}

	string Student::getEmailAddress() {
		return this->emailAddress;
	}

	int Student::getAge() {
		return this->age;
	}

	int* Student::getDaysInCourse() {
		return this->daysInCourse;
	}

	DegreeProgram Student::getDegreeProgram() {
		return this->degreeProgram;
	}

	void Student::print() {
		cout << studentID << "\t"
			<< "First Name: " << firstName << "\t"
			<< "Last Name: " << lastName << "\t"
			<< "Email: " << emailAddress << "\t"
			<< "Age: " << age << "\t"
			<< "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << '}' << "\t"
			<< "Degree Program: " << degreeProgramStrings[degreeProgram] << endl;
	}

	


