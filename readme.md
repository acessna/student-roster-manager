# Student Roster Manager

A C++ console application that manages a student roster system, built to demonstrate object-oriented programming principles, dynamic memory management, and structured data parsing.

## Overview

This project simulates the migration of a legacy student record system to a modern C++ platform. The application ingests comma-delimited student data, parses it into objects, and provides a suite of roster management operations. It was developed as part of my Computer Science coursework at Western Governors University.

## Key Concepts Demonstrated

- **Object-Oriented Design** — Modeled real-world entities using classes with clear separation of concerns across multiple files
- **Dynamic Memory Management** — Manually allocated and deallocated heap memory; implemented a custom destructor to prevent memory leaks
- **Data Parsing** — Parsed raw comma-delimited strings into structured Student objects at runtime
- **Pointer Management** — Used pointer arrays to manage student records; handled deletion safely by setting freed pointers to `nullptr`
- **Enumerated Types** — Defined a `DegreeProgram` enum to represent student degree classifications in a type-safe way

## Features

- Add students to the roster
- Remove students by ID
- Print full roster or individual student details
- Validate student email address formatting
- Calculate and display average days to course completion
- Filter and display students by degree program

## Project Structure

| File | Description |
|---|---|
| `main.cpp` | Entry point; handles program flow, data parsing, and test cases |
| `student.h` / `student.cpp` | Student class definition and implementation |
| `roster.h` / `roster.cpp` | Roster class definition and implementation |
| `degree.h` | DegreeProgram enumerated type |

## How to Run

1. Open the `.sln` file in Visual Studio
2. Ensure all source files are included in the Solution Explorer
3. Build the solution (`Ctrl+Shift+B`)
4. Run without debugging (`Ctrl+F5`)
5. Output will display in the console window

## Language & Tools

- **Language:** C++
- **IDE:** Microsoft Visual Studio
- **Compiler:** MSVC

