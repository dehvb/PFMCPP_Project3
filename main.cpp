/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function.

 4) For each instantiated UDT: 
        call some of those amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




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
    Example::main();

    std::cout << "good to go!" << std::endl;
}
