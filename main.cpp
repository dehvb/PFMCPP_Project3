/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};



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
    5) current program name (std::string)
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
