*******************************************************
*  Name      :  Stefani Moore        
*  Student ID:  106789878  
*  Class     :  CSCI 2421           
*  HW#       :  5               
*  Due Date  :  Sept. 28, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

Specify and implement an ADT character string by using a 
linked chain of characters.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that will 
	perform examples to test the functions in the 
	string class.

Name:  StringOfNodes.h
   Contains the definition for the StringOfNodes class.  

Name: StringOfNodes.cpp
   Defines and implements the StringOfNodes class.

Name: Node.h  
   Contains the definition for the Node struct.
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on Microsoft Visual
   Studios Community 2015.  It was compiled, run, and tested 
   on the csegrid.ucdenver.pvt.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [MooreHW5]

   Now you should see a directory named homework with the files:
        main.cpp
        StringOfNodes.h
        StringOfNodes.cpp
	Node.h
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [MooreHW5] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[String]

4. Delete the obj files, executables, and core dump by
   %./make clean
