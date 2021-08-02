/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************
0) move 5-9 to between your Thing 4 and Thing 10.

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
2) write the name of the primitive type you'll be using after each property:
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)
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
Thing 5) Dishwasher
5 properties:
    1) holding capacity for plates (int)
    2) holding capacity for cups and glasses (int)
    3) holding capacity for cutlery (int)
    4) time per run in min (int)
    5) water consumption per run in l (double)
3 things it can do:
    1) clean dishes
    2) dry dishes
    3) self-clean
 */

/*
Thing 6) Oven
5 properties:
    1) number of baking sheets (int)
    2) highest possible temperature in degree celsius (double)
    3) current temperature in degree celsius (double)
    4) number of programs (int)
    5) current program (std::string)
3 things it can do:
    1) bake a cake
    2) bake a pizza
    3) make a roast
 */

/*
Thing 7) Stove
5 properties:
    1) type of stove (std::string)
    2) number of hotplates (int)
    3) diameter of largest hotplate in cm (double)
    4) diameter of smallest hotplate in cm (double)
    5) number of hotplates in use (int)
3 things it can do:
    1) boil water
    2) fry steaks
    3) make soup
 */

/*
Thing 8) Microwave
5 properties:
    1) number of programs (int)
    2) highest possible wattage (int)
    3) lowest possible wattage (int)
    4) height (inside) in cm (double)
    5) diameter of plate in cm (double)
3 things it can do:
    1) heat lunch
    2) melt butter
    3) make popcorn
 */

/*
Thing 9) fridge
5 properties:
    1) number of trays (int)
    2) total volume (double)
    3) lowest possible temperature in degree celsius (double)
    4) current temperature in degree celsius (double)
    5) current (space) utilization in percent (double)
3 things it can do:
    1) keep things cold
    2) chill drinks
    3) keep perishables fresh
 */

/*
Thing 10) Kitchen
5 properties:
    1) Dishwasher
    2) Oven
    3) Stove
    4) Microwave
    5) Fridge
3 things it can do:
    1) cook a meal
    2) cool groceries
    3) clean dishes
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
