#include "roster.h"

Roster::Roster() {
	for (int i = 0; i < 5; i++) {
		classRosterArray[i] = nullptr;
	}
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2,
	int daysInCourse3, DegreeProgram degreeProgram) 
{
	lastIndex++;

	int daysArray[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	
	classRosterArray[lastIndex] = new Student(studentID, firstName, lastName,
		emailAddress, age, daysArray, degreeProgram);
}

void Roster::remove(string studentID)
{
	bool found = false;

	for (int i = 0; i <= lastIndex; i++) {
		if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID) {
			found = true;
			delete classRosterArray[i];
			classRosterArray[i] = nullptr;
			break;
		} 

	}
		if (!found) {
			cout << "Student not found." << endl;
		}
}

void Roster::printAll()
{
	for (int i = 0; i <= lastIndex; i++) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->print();
		}
	}
}

void Roster::printAverageDaysInCourse(string studentID)
{
	for (int i = 0; i <= lastIndex; i++) {
		if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID) {
			int* days = classRosterArray[i]->getDaysInCourse();

			double avg = (days[0] + days[1] + days[2]) / 3.0;

			cout << "Student ID: " << studentID << ", average days in course is: " << avg << endl;
		}
	}
}


void Roster::printInvalidEmails()
{
	for (int i = 0; i <= lastIndex; i++) {
		if (classRosterArray[i] != nullptr 
			&& (classRosterArray[i]->getEmailAddress().find('@') == string::npos 
			|| classRosterArray[i]->getEmailAddress().find('.') == string::npos
			|| classRosterArray[i]->getEmailAddress().find(' ') != string::npos)) 
		{
			cout << classRosterArray[i]->getEmailAddress() << endl;
		}
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
	for (int i = 0; i <= lastIndex; i++) {
		if (classRosterArray[i] != nullptr && classRosterArray[i]->getDegreeProgram() == degreeProgram) {
			classRosterArray[i]->print();
		}
	}
}

Roster::~Roster()
{
	for (int i = 0; i <= lastIndex; i++) {
		if (classRosterArray[i] != nullptr) {
			delete classRosterArray[i];
			classRosterArray[i] = nullptr;
		}
	}
}

