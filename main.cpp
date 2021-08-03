 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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

struct DrumSet
{
    //number of toms (int)
    int numToms = 3;
    //number of crash cymbals (int)
    int numCrashs = 2;
    //number of effect cymbals (int)
    int numFX = 1;
    //age of drum heads (float)
    float ageHeads = 0.74f;
    //number of bass drum pedals (int)
    int numBdPedals = 2;
    //make loud sounds
    void makeLoudSounds(float velocity);
    //define the rhythm
    void defineTheRhythm(int bpm);
    //overpower other instruments
    void overpowerOtherInstruments(bool hardHitter);
};

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
struct CoffeeMachine
{
    //water level (float)
    float waterLevel = 70.13f;
    //type of coffee beans (std::string)
    std::string coffeeBeans = "Arabica";
    //level of coffee beans (float)
    float beansLevel = 30.64f;
    //number of cups per run (int)
    int cupsPerRun = 2;
    //time since last cleaning (float)
    float timeSinceCleaning = 33.333f;

    struct Coffee
    {
        bool isEspresso = false;
        std::string servingSize = "double";
        std::string intensity = "strong";        
        int waterPerServing = 210;
        int temperature = 85;
        void requireBeans(double weightPerServing = 15);  
        void makeAwake(float caffeineConcentration = 7.23458796f);
        void burnTongue(std::string smell = "good", bool tooHot = true);
    };

    //make coffee
    void makeCoffee(Coffee coffee);
    //grind beans
    void grindBeans(Coffee coffee);
    //self-clean
    void selfClean(int numberOfCupsServed);
};

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
struct AppleTree
{
    //height (float)
    float height = 2.3f;
    //age (float)
    float age = 23.65f;
    //number of branches (double)
    double numBranches = 15.5;
    //number of apples (double)
    double numApples = 55.8;
    //leaflessness (double)
    double leaflessness = 95.5;
    //grow apples
    void growApples(int soilQuality = 7, bool sunny = true);
    //provide shade
    void provideShade(double leaflessness = 95.5, bool sunny = true);
    //drop apples
    void dropApples(int appleRipeness = 75);
};
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
struct Computer
{
    //amount of RAM (int)
    int amountRAM = 16;
    //amount of SSD storage (int)
    int amountSsdStorage = 1000;
    //clockspeed of CPU (float)
    float clockspeedCPU = 3995.7f;
    //number of case fans (int)
    int numCaseFans = 4;
    //number of USB ports (int)
    int numUsbPorts = 8;
    //store files
    void storeFiles(float fileSize = 3456543);
    //run programs
    void runPrograms(bool asAdmin = false);
    //connect to the internet
    void connectToInternet(bool wifiEnabled = false);
};
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
struct Dishwasher
{
    //holding capacity for plates (int)
    int capacityPlates = 15;
    //holding capacity for cups and glasses (int)
    int capacityCupsGlasses = 18;
    //holding capacity for cutlery (int)
    int capacityCutlery = 30;
    //time per run in min (int)
    int timePerRun = 135;
    //water consumption per run in l (double)
    double waterConsumption = 30.5;

    struct Dishes
    {
        float oilyness = 25.76f;
        int soupBowls = 4;
        int regularPlates = 12;
        int cups = 8;
        int glasses = 5;
        void clogDrain(std::string residues = "too much");
        void tarnish(bool isSensitive = false);
        void shatter(bool isPiledBadly = false);
    };

    //clean dishes
    void cleanDishes(Dishes dishes);
    //dry dishes
    void dryDishes(bool shouldDryDishes = true, int temp = 55);
    //self-clean
    void selfClean(int afterRun = 45);
};
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
struct Oven
{
    //number of baking sheets (int)
    int numberBakingSheets = 3;
    //highest possible temperature in degree celsius (double)
    double highestTemp = 300;
    //current temperature in degree celsius (double)
    double currentTemp = 220;
    //number of programs (int)
    int numberPrograms = 5;
    //current program name (std::string)
    std::string currentProgram = "top heat";
    //bake a cake
    void bakeCake(std::string typeOfCake = "apple", int preHeat = 180);
    //bake a pizza
    void bakePizza(std::string typeOfPizza = "margherita", int preHeat = 220);
    //make a roast
    void makeRoast(std::string typeOfRoast = "beef", int setTemp = 230);
};
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
struct Stove
{
    //type of stove (std::string)
    std::string typeStove = "induction";
    //number of hotplates (int)
    int numberHotplates = 4;
    //diameter of largest hotplate in cm (double)
    double largestDiam = 28.5;
    //diameter of smallest hotplate in cm (double)
    double smallestDiam = 14.5;
    //number of hotplates in use (int)
    int hotplatesInUse = 1;
    //boil water
    void boilWater(int setLevel = 9);
    //fry steaks
    void frySteaks(int setLevel = 7);
    //make soup
    void makeSoup(int setLevel = 5);
};
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
struct Microwave
{
    //number of programs (int)
    int numberPrograms = 3;
    //highest possible wattage (int)
    int highestWattage = 900;
    //lowest possible wattage (int)
    int lowestWattage = 400;
    //height (inside) in cm (double)
    double height = 20.5;
    //diameter of plate in cm (double)
    double diameter = 18.5;
    //heat lunch
    void heatLunch(float setTimer = 2.57f);
    //melt butter
    void meltButter(float setTimer = 0.875f);
    //make popcorn
    void makePopcorn(float setTimer = 1.78564f);
};
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
struct Fridge
{
    //number of trays (int)
    int numTrays = 5;
    //total volume (double)
    double totalVolume = 150.6;
    //lowest possible temperature in degree celsius (double)
    double lowestTemp = 0.1;
    //current temperature in degree celsius (double)
    double currentTemp = 0.5;
    //current (space) utilization in percent (double)
    double currentUtilization = 35.0;
    //keep things cold
    void keepThingsCold(bool activatedSteadyModule = true);
    //chill drinks
    void chillDrinks(bool activateQuickCool = true);
    //keep perishables fresh
    void keepPerishablesFresh(bool regulateHumidity = true);
};
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
struct Kitchen
{
    //Dishwasher
    Dishwasher dishwasher;
    //Oven
    Oven oven;
    //Stove
    Stove stove;
    //Microwave
    Microwave microwave;
    //Fridge
    Fridge fridge;
    //cook a meal
    void cookMeal(int numberPotsNeeded = 3, int numberPansNeeded = 1);
    //cool groceries
    void coolGroceries(bool tooHot = false);
    //clean dishes
    void cleanDishes(bool dishwasherTabPresent = true);
};
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
