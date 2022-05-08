The Goal: the goal of this project To read students information from a file, and store it into an array of student instances as sake of practicing getting familiar with the heap.

The input: This program does not receive anything from the terminal.
This program opens a file named "students.dat" which includes information of each student per line.
The format of the information is as follows:
lName,fName,Address1,Address2,City,State,Zip,Birthday,Graduation,GPA,Credit Hours completed.

The output: The program outputs full information of students in a formatted manner in the file "fullReport.txt"
It stores list of students names in the format "lastname, firstname" in the file "shortReport.txt".

The steps: this project need 3 class address, date, and student (this contain both date and address) there gonna 3 header files 
student.h(for class public and private member), address.h(class public and private member), and date.h(class public and private member)
4 cpp files address.cpp(contain setter and getter), student.cpp(contain setter and getter both address and date class as well as the gpa and credit hour) 
date.cpp(contain setter and getter), and main.cpp(Open the input file "students.dat" in "in" and output it in 2 files "fullReport.txt" and "shortReport" 

For each line in the input file do as follows:
  1. Make a student instance on the heap with "new".
  2. Initialize the student instance with the line string.
  3. Store the pointer to the array of students

For each student in the students array:
  1. generate the full report string
  2. store the string in "fullReport.txt"

For each student in the students array:
  1. obtain the full name
  2. store the full name in "shortReport.txt"
