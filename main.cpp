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
struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    double distanceTraveled;
    
    struct Foot
    {
        void stepForward();
        double stepSize(double length = 0.9, double hurry = 1.0);
    };
    
    Foot leftFoot;
    Foot rightFoot;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::Foot::stepForward()
{

}

double Person::Foot::stepSize(double length, double hurry)
{
    double currentStepSize = length * hurry;
    return currentStepSize;
}

void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
    howFast = 1;
}

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */


struct DrumSet
{
    int numToms = 3;
    int numCrashs = 2;
    int numFX = 1;
    float ageHeads = 0.74f;
    int numBdPedals = 2;
    void makeLoudSounds(float velocity);
    void defineTheRhythm(int bpm);
    void overpowerOtherInstruments(bool hardHitter);
};
void DrumSet::makeLoudSounds(float velocity)
{
    if(velocity > 95.8f)
    {
        std::cout << "LOUD";
    }
    else
    {
        std::cout << "quiet";
    }
}
void DrumSet::defineTheRhythm(int bpm)
{
    std::string beat;
    if(bpm > 220)
    {
        beat = "blastbeat";
    }
    else
    {
        beat = "four on the floor";
    }
}
void DrumSet::overpowerOtherInstruments(bool hardHitter)
{
    if(hardHitter)
    {
        std::cout << "Turn your amp up, dude";
    }
}


struct CoffeeMachine
{
    float waterLevel = 70.13f;
    std::string coffeeBeans = "Arabica";
    float beansLevel = 30.64f;
    int cupsPerRun = 2;
    float timeSinceCleaning = 33.333f;

    struct Coffee
    {
        bool isEspresso = false;
        std::string servingSize = "double";
        std::string intensity = "strong";        
        int waterPerServing = 210;
        int temperature = 85;
        void requireBeans(int weightPerServing = 15);  
        void makeAwake(float caffeineConcentration = 7.23458796f);
        void burnTongue(std::string smell = "good", bool tooHot = true);
    };

    void makeCoffee(Coffee coffee);
    void grindBeans(Coffee coffee);
    void selfClean(int numberOfCupsServed);
};
void CoffeeMachine::Coffee::requireBeans(int weightPerServing)
{
    if(weightPerServing == 15)
    {
        std::cout << "gimme 15g";
    }
    else
    {
        std::cout << "let's see";
    }
}
void CoffeeMachine::Coffee::makeAwake(float caffeineConcentration)
{
    if(caffeineConcentration > 7)
    {
        std::cout << "good morning";
    }
    else
    {
        std::cout << "ughhh";
    }
}
void CoffeeMachine::Coffee::burnTongue(std::string smell, bool tooHot)
{
    if(smell == "good")
    {
        if(tooHot)
        {
            std::cout << "ouch";
        }
        else
        {
            std::cout << "nice";
        }
    }
    else
    {
        std::cout << "hmpf";
    }
}
void CoffeeMachine::makeCoffee(CoffeeMachine::Coffee coffee)
{
    if(coffee.isEspresso == false)
    {
        std::cout << "making coffee";
    }
}
void CoffeeMachine::grindBeans(CoffeeMachine::Coffee coffee)
{
    if(coffee.servingSize == "double")
    {
        std::cout << "grinding a lot of beans";
    }
}
void CoffeeMachine::selfClean(int numberOfCupsServed)
{
    if(numberOfCupsServed < 25)
    {
        std::cout << "not yet";
    }
    else
    {
        std::cout << "gotta clean";
    }
}


struct AppleTree
{
    float height = 2.3f;
    float age = 23.65f;
    double numBranches = 15.5;
    double numApples = 55.8;
    double leaflessness = 95.5;
    void growApples(int soilQuality = 7, bool sunny = true);
    void provideShade(double leaflessness = 95.5, bool sunny = true);
    void dropApples(int appleRipeness = 75);
};
void AppleTree::growApples(int soilQuality, bool sunny)
{
    if(sunny)
    {
        if(soilQuality > 5)
        {
            std::cout << "growing a lot";
        }
        else
        {
            std::cout << "growing slowly";
        }
    }
}
void AppleTree::provideShade(double leaflessnes, bool sunny)
{
    if(sunny)
    {
        if(leaflessnes < 15)
        {
            std::cout << "lots of shade";
        }
        else
        {
            std::cout << "little shade";
        }
    }
}
void AppleTree::dropApples(int appleRipeness)
{
    if(appleRipeness > 80)
    {
        std::cout << "drop it like it'S hot";
    }
}

struct Computer
{
    int amountRAM = 16;
    int amountSsdStorage = 1000;
    float clockspeedCPU = 3995.7f;
    int numCaseFans = 4;
    int numUsbPorts = 8;
    void storeFiles(float fileSize = 3456543);
    void runPrograms(bool asAdmin = false);
    void connectToInternet(bool wifiEnabled = false);
};
void Computer::storeFiles(float fileSize)
{
    std::cout << "File saved with size";
    std::cout << fileSize;
}
void Computer::runPrograms(bool asAdmin)
{
    if(asAdmin)
    {
        std::cout << "running the program as admin";
    }
    else
    {
        std::cout << "admin privileges required";
    }
}
void Computer::connectToInternet(bool wifiEnabled)
{
    if(wifiEnabled)
    {
        std::cout << "wireless connection established";
    }
    else
    {
        std::cout << "please connect a LAN cable";
    }
}

struct Dishwasher
{
    int capacityPlates = 15;
    int capacityCupsGlasses = 18;
    int capacityCutlery = 30;
    int timePerRun = 135;
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

    void cleanDishes(Dishes dishes);
    void dryDishes(bool shouldDryDishes = true, int temp = 55);
    void selfClean(int afterRun = 45);
};
void Dishwasher::Dishes::clogDrain(std::string residues)
{
    if(residues == "too much")
    {
        std::cout << "clogged";
    }
}
void Dishwasher::Dishes::tarnish(bool isSensitive)
{
    if(isSensitive)
    {
        std::cout << "cutlery successfully tarnished";
    }
}
void Dishwasher::Dishes::shatter(bool isPiledBadly)
{
    if(isPiledBadly)
    {
        std::cout << "let's break some stuff";
    }
}
void Dishwasher::cleanDishes(Dishwasher::Dishes dishes)
{
    std::cout << "cleaning dishes...";
    dishes.oilyness = 0.f;
}
void Dishwasher::dryDishes(bool shouldDryDishes, int temp)
{
    if(shouldDryDishes)
    {
        if(temp < 55)
        {
            std::cout << "raising temperature to 55";
        }
    }
}
void Dishwasher::selfClean(int afterRun)
{
    if(afterRun >= 45)
    {
        std::cout << "let's clean";
    }
    else
    {
        std::cout << "not yet";
    }
}

struct Oven
{
    int numberBakingSheets = 3;
    double highestTemp = 300;
    double currentTemp = 220;
    int numberPrograms = 5;
    std::string currentProgram = "top heat";
    void bakeCake(std::string typeOfCake = "apple", int preHeat = 180);
    void bakePizza(std::string typeOfPizza = "margherita", int preHeat = 220);
    void makeRoast(std::string typeOfRoast = "beef", int setTemp = 230);
};
void Oven::bakeCake(std::string typeOfCake, int preHeat)
{
    std::cout << "baking an " << typeOfCake << " pie, preheating to " << preHeat;
}
void Oven::bakePizza(std::string typeOfPizza, int preHeat)
{
    std::cout << "baking a pizza " << typeOfPizza << ", preheating to " << preHeat;
}
void Oven::makeRoast(std::string typeOfRoast, int setTemp)
{
    std::cout << "making a " << typeOfRoast << " roast, setting Temperature to " << setTemp;
}

struct Stove
{
    std::string typeStove = "induction";
    int numberHotplates = 4;
    double largestDiam = 28.5;
    double smallestDiam = 14.5;
    int hotplatesInUse = 1;
    void boilWater(int setLevel = 9);
    void frySteaks(int setLevel = 7);
    void makeSoup(int setLevel = 5);
};
void Stove::boilWater(int setLevel)
{
    std::cout << "boiling water, setting level to " << setLevel;
}
void Stove::frySteaks(int setLevel)
{
    std::cout << "frying steaks, setting level to " << setLevel;
}
void Stove::makeSoup(int setLevel)
{
    std::cout << "making soup, setting level to " << setLevel;
}

struct Microwave
{
    int numberPrograms = 3;
    int highestWattage = 900;
    int lowestWattage = 400;
    double height = 20.5;
    double diameter = 18.5;
    void heatLunch(float setTimer = 2.57f);
    void meltButter(float setTimer = 0.875f);
    void makePopcorn(float setTimer = 1.78564f);
};
void Microwave::heatLunch(float setTimer)
{
    std::cout << "heating lunch, setting timer to " << setTimer;
}
void Microwave::meltButter(float setTimer)
{
    std::cout << "melting butter, setting timer to " << setTimer;
}
void Microwave::makePopcorn(float setTimer)
{
    std::cout << "making popcorn, setting timer to " << setTimer;
}

struct Fridge
{
    int numTrays = 5;
    double totalVolume = 150.6;
    double lowestTemp = 0.1;
    double currentTemp = 0.5;
    double currentUtilization = 35.0;
    void keepThingsCold(bool activatedSteadyModule = true);
    void chillDrinks(bool activateQuickCool = true);
    void keepPerishablesFresh(bool regulateHumidity = true);
};
void Fridge::keepThingsCold(bool activatedSteadyModule)
{
    if(activatedSteadyModule)
    {
        std::cout << "keeping it cool";
    }
}
void Fridge::chillDrinks(bool activateQuickCool)
{
    if(activateQuickCool)
    {
        std::cout << "let's get those drinks cool";
    }
}
void Fridge::keepPerishablesFresh(bool regulateHumidity)
{
    if(regulateHumidity)
    {
        std::cout << "activating humidity controller";
    }
}

struct Kitchen
{
    Dishwasher dishwasher;
    Oven oven;
    Stove stove;
    Microwave microwave;
    Fridge fridge;
    void cookMeal(int numberPotsNeeded = 3, int numberPansNeeded = 1);
    void coolGroceries(bool tooHot = false);
    void cleanDishes(bool dishwasherTabPresent = true);
};
void Kitchen::cookMeal(int numberPotsNeeded, int numberPansNeeded)
{
    std::cout << "we need " << numberPotsNeeded << " pot(s) and " << numberPansNeeded << " pan(s)";
}
void Kitchen::coolGroceries(bool tooHot)
{
    if(tooHot)
    {
        std::cout << "let's not put them in the fridge yet";
    }
}
void Kitchen::cleanDishes(bool dishwasherTabPresent)
{
    if(dishwasherTabPresent)
    {
        std::cout << "start the washing machine";
    }
}

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
    Person p;
    p.run(2, true);

    std::cout << "good to go!" << std::endl;
}
