#pragma once
#include "student.h"
#include <string>

class Roster {

public:
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2,
		int daysInCourse3, DegreeProgram degreeProgram);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);

	Roster();
	
	~Roster();

private:
	Student* classRosterArray[5];
	int lastIndex = -1;
	
};