/*
Project 3 - Part 1b / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1)  Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or properties and 3 things it can do
        b) remember: these properties will eventually become primitives
*/

/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has eco-friendly cleaning supplies" as one of the properties
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you can use 'std::string' to represent strings in this project.
 */

/*
Thing 1) drum set
5 properties:
    1) number of toms (int)
    2) number of crash cymbals (int)
    3) number of effect cymbals (int)
    4) age of drum heads (float)
    5) number of bass drum pedals (int)
3 things it can do:
    1) make loud sounds
    2) define the rhythm
    3) overpower other instruments
 */

/*
Thing 2) coffee machine
5 properties:
    1) water level (float)
    2) type of coffee beans (std::string)
    3) level of coffee beans (float)
    4) number of cups per run (int)
    5) time since last cleaning (float)
3 things it can do:
    1) make coffee
    2) grind beans
    3) self-clean
 */

/*
Thing 3) apple tree
5 properties:
    1) height (float)
    2) age (float)
    3) number of branches (double)
    4) number of apples (double)
    5) leaflessness (double)
3 things it can do:
    1) grow apples
    2) provide shade
    3) drop apples
 */

/*
Thing 4) computer
5 properties:
    1) amount of RAM (int)
    2) amount of SSD storage (int)
    3) clockspeed of CPU (float)
    4) number of case fans (int)
    5) number of USB ports (int)
3 things it can do:
    1) store files
    2) run programs
    3) connect to the internet
 */



/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
