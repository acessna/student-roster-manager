## Class Roster Manager Project

### Author Information
* **Name:** Robert Cessna
* **Student ID:** 012549454
* **Email:** rcessn1@wgu.edu

### Application Version
* **Version:** 1.0

### IDE & Compiler Info
* **IDE Used:** Microsoft Visual Studio
* **Compiler:** MSVC (Microsoft Visual C++)
* **OS:** Windows

### File Manifest
This project includes the following source files:
1.  `main.cpp` - The entry point of the application; handles the main program flow, parses student data, and runs test cases.
2.  `student.h` - Header file defining the Student class structure.
3.  `student.cpp` - Implementation file for the Student class logic.
4.  `roster.h` - Header file defining the Roster class structure.
5.  `roster.cpp` - Implementation file for the Roster class logic.
6.  `degree.h` - Header file defining the DegreeProgram enumerated data type.
7.  `README.md` - This file.

### Project Description
This program is a C++ console application that manages a roster of students. It was created to demonstrate the migration of a legacy student system to a new C++ platform. The application reads a comma-delimited list of student data, parses it into objects, and performs various operations such as:
* Adding students to the roster.
* Removing students by ID.
* Printing student details.
* Validating email addresses.
* Calculating average days in courses.

### How to Run
1.  Open the project file (`.sln`) in Visual Studio.
2.  Ensure all source files are linked in the Solution Explorer.
3.  Build the solution (Ctrl+Shift+B).
4.  Run the application (Ctrl+F5).
5.  The console window will appear and display the output of the required test cases.

### Assumptions / Additional Notes
* **Data Parsing:** The program assumes input data is strictly formatted as comma-separated values in the specific order defined in the requirements.
* **Memory Management:** The `Roster` destructor is implemented to manually release the memory allocated for `Student` objects to prevent memory leaks.

* **Remove Function:** When a student is removed, the pointer in the array is set to `nullptr` to mark the slot as empty, ensuring subsequent traversals skip the deleted record.
