# C++ Modules

Welcome to C++ modules. A series of 35 exercises designed to introduce Object-Oriented Programming in C++. Each module delves into different aspects of C++ programming, offering a comprehensive understanding of the language. The content ranges from basic topics like C++ syntax to more complex and challenging concepts such as containers

## Content

- [Installation](#installation)
- [Module List](#modulelist)

## Installation 

Firts clone this repository in your current working directory.
```bash
  git clone https://github.com/jestebanpelaez18/42Course-Cpp_Modules.git
```

Then go to the folder of the desire module and then to the desire folder exercise. For example:

```bash
  cd cpp00
  cd ex00
```

Each exercise has a Makefile, which you can use to compile the exercise. Use this command for compiling the exercise:

```bash
  make
```
And finally run the executable:

```bash
  ./executable_name
```

Depend of the exercise and the goal of it, each has a main with different Tests. 


## Module list

### [C++ Module 00](https://github.com/jestebanpelaez18/42Course-Cpp_Modules/tree/47799c8d2772011bba47aa1ce209a37d9804f5f9/cpp0)

This module is an Introduction to C++ (Namespaces, Classes, Member Functions, Stdio Streams, Initalization Lists, Static and Const)

[Ex00:Megaphone](https://github.com/jestebanpelaez18/42Course-Cpp_Modules/tree/47799c8d2772011bba47aa1ce209a37d9804f5f9/cpp0/ex00)

This exercise is basically write a program that giving string as an argument we have to return, that string in upper case.

```bash
>$./Megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
```

[Ex01:My Awesome Phonebook](https://github.com/jestebanpelaez18/42Course-Cpp_Modules/tree/47799c8d2772011bba47aa1ce209a37d9804f5f9/cpp0/ex01)

This exercise is about to Write a program that behaves like a crappy awesome phonebook software.
We have to implement two classes:

#### PhoneBook
- It has an array of contacts.
- It can store a maximum of 8 contacts. If the user tries to add a 9th contact, replace the oldest one by the new one.
- Please note that dynamic allocation is forbidden.

#### Contact
- Stands for a phonebook contact.

In the code, the phonebook must be instantiated as an instance of the PhoneBook class. Same thing for the contacts. Each one of them must be instantiated as an instance of the Contact class.

### C++ Module 01

This module is about memory Allocation, Pointers To Members, References and Switch Statement

### C++ Module 02

This module is about Ad-Hoc Polymorphism, Operator Overloading and Orthodox Canonical Class Form. 

### C++ Module 03

This module is about inheritance

### C++ Module 04

This module is about subtype Polymorphism, Abstract Classes and Interfaces.

### C++ Module 05

This module is about repetition an exception handling. 

### C++ Module 06 

This module is about C++ Cast.

### C++ Module 07

This module is about C++ templates.

### C++ Module 08

This module is about templated containers, iterators, and algorithms.

### C++ Module 09

This module is about more containers and his usage.
