#include "roster.h"

int main()
{
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Adam,Cessna,rcessn1@wgu.edu,30,50,90,10,SOFTWARE"
    };

    cout << "Scripting and Programming - Applications - C867 - C++ - 012549454 - Robert Cessna" << endl;

    Roster* classRoster = new Roster();

    for (int i = 0; i < 5; i++)
    {
        string data = studentData[i];

        int pos = 0;
        int nextComma = data.find(',', pos);
        string studentID = data.substr(pos, nextComma - pos);
        pos = nextComma + 1;

        nextComma = data.find(',', pos);
        string firstName = data.substr(pos, nextComma - pos);
        pos = nextComma + 1;

        nextComma = data.find(',', pos);
        string lastName = data.substr(pos, nextComma - pos);
        pos = nextComma + 1;

        nextComma = data.find(',', pos);
        string emailAddress = data.substr(pos, nextComma - pos);
        pos = nextComma + 1;

        nextComma = data.find(',', pos);
        int age = stoi(data.substr(pos, nextComma - pos));
        pos = nextComma + 1;

        nextComma = data.find(',', pos);
        int daysInCourse1 = stoi(data.substr(pos, nextComma - pos));
        pos = nextComma + 1;

        nextComma = data.find(',', pos);
        int daysInCourse2 = stoi(data.substr(pos, nextComma - pos));
        pos = nextComma + 1;

        nextComma = data.find(',', pos);
        int daysInCourse3 = stoi(data.substr(pos, nextComma - pos));
        pos = nextComma + 1;

        string degreeString = data.substr(pos);

        DegreeProgram dp;
        if (degreeString == "SECURITY") dp = SECURITY;
        else if (degreeString == "NETWORK") dp = NETWORK;
        else dp = SOFTWARE;

        classRoster->add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, dp);
    }

    classRoster->printAll();
    classRoster->printInvalidEmails();

    string studentIDs[] = { "A1", "A2", "A3", "A4", "A5" };
    for (int i = 0; i < 5; i++) {
        classRoster->printAverageDaysInCourse(studentIDs[i]);
    }

    classRoster->printByDegreeProgram(SOFTWARE);
    classRoster->remove("A3");
    classRoster->printAll();
    classRoster->remove("A3");
    
    
    delete classRoster;
    
    
    return 0;
}




