*******************************************************
*  Name      : Derek Gunnels
*  Student ID: X
*  Class     :  CSC 2312
*  HW#       :  3
*  Due Date  :  Feb. 26, 2019
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program takes in data from the user in order to
determine if two rectangles have intersecting lines on
an X-axis and Y-axis coordinate plane. The program
outputs an answer based on intersection as well as the
data for the coordinate points for both rectangles.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This outputs the data to the user, and
   takes inputs from the user. Primarily used to take some
   data in and pass into functions.

Name:  grid.h
   Contains the definition for the class grid; Includes
   various function declarations to operate grids.

Name: grid.cpp
   Implements previously defined functions from grid.h.
   Includes necessary functions for grid class to work
   with all features.



*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.

    The program was developed on CLion, and tested utilizing
    CLion and CSEgrid (csegrid.ucdenver.pvt).

    Tests included MinGW Clion environment utilizing g++
    as the compiler.

    Tests on CSEgrid utilizing g++ successfully compiled.

*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.
   To uncompress it use the following commands
       % unzip [gunnels_HW3_2312]

   Now you should see a directory named homework with the files:
        main.cpp
        grid.h
        grid.cpp
	      makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [gunnels_HW3_2312]

    Compile the program by:
    % make

3. Run the program by:
   % ./[MyHW3.exe]

4. Delete the obj files, executables, and core dump by
   %./make clean
