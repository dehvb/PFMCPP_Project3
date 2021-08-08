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
    DrumSet();
    int numToms, numCrashs, numFX, numBdPedals;
    float ageHeads;
    void makeLoudSounds(float velocity);
    void defineTheRhythm(int bpm);
    void overpowerOtherInstruments(bool hardHitter);
};
DrumSet::DrumSet()
{
    numToms = 3;
    numCrashs = 2;
    numFX = 1;
    ageHeads = 0.74f;
    numBdPedals = 2;
}
void DrumSet::makeLoudSounds(float velocity)
{
    if(velocity > 95.8f)
    {
        std::cout << "LOUD" << std::endl;
    }
    else
    {
        std::cout << "quiet" << std::endl;
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
    std::cout << beat << std::endl;
}
void DrumSet::overpowerOtherInstruments(bool hardHitter)
{
    if(hardHitter)
    {
        std::cout << "Turn your amp up, dude" << std::endl;
    }
}


struct CoffeeMachine
{
    CoffeeMachine();
    float waterLevel, beansLevel, timeSinceCleaning;
    std::string coffeeBeans;
    int cupsPerRun;

    struct Coffee
    {
        Coffee();
        bool isEspresso;
        std::string servingSize, intensity;
        int waterPerServing, temperature;
        void requireBeans(int weightPerServing = 15);  
        void makeAwake(float caffeineConcentration = 7.23458796f);
        void burnTongue(std::string smell = "good", bool tooHot = true);
    };

    void makeCoffee(Coffee coffee);
    void grindBeans(Coffee coffee);
    void selfClean(int numberOfCupsServed);
};
CoffeeMachine::CoffeeMachine()
{
    waterLevel = 70.13f;
    coffeeBeans = "Arabica";
    beansLevel = 30.64f;
    cupsPerRun = 2;
    timeSinceCleaning = 33.333f;
}
CoffeeMachine::Coffee::Coffee()
{
    isEspresso = false;
    servingSize = "double";
    intensity = "strong";        
    waterPerServing = 210;
    temperature = 85;
}
void CoffeeMachine::Coffee::requireBeans(int weightPerServing)
{
    if(weightPerServing == 15)
    {
        std::cout << "gimme 15g" << std::endl;
    }
    else
    {
        std::cout << "let's see" << std::endl;
    }
}
void CoffeeMachine::Coffee::makeAwake(float caffeineConcentration)
{
    if(caffeineConcentration > 7)
    {
        std::cout << "good morning" << std::endl;
    }
    else
    {
        std::cout << "ughhh" << std::endl;
    }
}
void CoffeeMachine::Coffee::burnTongue(std::string smell, bool tooHot)
{
    if(smell == "good")
    {
        if(tooHot)
        {
            std::cout << "ouch" << std::endl;
        }
        else
        {
            std::cout << "nice" << std::endl;
        }
    }
    else
    {
        std::cout << "hmpf" << std::endl;
    }
}
void CoffeeMachine::makeCoffee(CoffeeMachine::Coffee coffee)
{
    if(coffee.isEspresso == false)
    {
        std::cout << "making coffee" << std::endl;
    }
}
void CoffeeMachine::grindBeans(CoffeeMachine::Coffee coffee)
{
    if(coffee.servingSize == "double")
    {
        std::cout << "grinding a lot of beans" << std::endl;
    }
}
void CoffeeMachine::selfClean(int numberOfCupsServed)
{
    if(numberOfCupsServed < 25)
    {
        std::cout << "not yet" << std::endl;
    }
    else
    {
        std::cout << "gotta clean" << std::endl;
    }
}


struct AppleTree
{
    AppleTree();
    float height, age;
    double numBranches, numApples, leaflessness;
    void growApples(int soilQuality = 7, bool sunny = true);
    void provideShade(double leaflessness = 95.5, bool sunny = true);
    void dropApples(int appleRipeness = 75);
};
AppleTree::AppleTree()
{
    height = 2.3f;
    age = 23.65f;
    numBranches = 15.5;
    numApples = 55.8;
    leaflessness = 95.5;
}
void AppleTree::growApples(int soilQuality, bool sunny)
{
    if(sunny)
    {
        if(soilQuality > 5)
        {
            std::cout << "growing a lot" << std::endl;
        }
        else
        {
            std::cout << "growing slowly" << std::endl;
        }
    }
}
void AppleTree::provideShade(double leaflessnes, bool sunny)
{
    if(sunny)
    {
        if(leaflessnes < 15)
        {
            std::cout << "lots of shade" << std::endl;
        }
        else
        {
            std::cout << "little shade" << std::endl;
        }
    }
}
void AppleTree::dropApples(int appleRipeness)
{
    if(appleRipeness > 80)
    {
        std::cout << "drop it like it's hot" << std::endl;
    }
}

struct Computer
{
    Computer();
    int amountRAM, amountSsdStorage, numCaseFans, numUsbPorts;
    float clockspeedCPU;
    void storeFiles(float fileSize = 3456543);
    void runPrograms(bool asAdmin = false);
    void connectToInternet(bool wifiEnabled = false);
};
Computer::Computer()
{
    amountRAM = 16;
    amountSsdStorage = 1000;
    clockspeedCPU = 3995.7f;
    numCaseFans = 4;
    numUsbPorts = 8;
}
void Computer::storeFiles(float fileSize)
{
    std::cout << "File saved with size: ";
    std::cout << fileSize << std::endl;
}
void Computer::runPrograms(bool asAdmin)
{
    if(asAdmin)
    {
        std::cout << "running the program as admin" << std::endl;
    }
    else
    {
        std::cout << "admin privileges required" << std::endl;
    }
}
void Computer::connectToInternet(bool wifiEnabled)
{
    if(wifiEnabled)
    {
        std::cout << "wireless connection established" << std::endl;
    }
    else
    {
        std::cout << "please connect a LAN cable" << std::endl;
    }
}

struct Dishwasher
{
    Dishwasher();
    int capacityPlates, capacityCupsGlasses, capacityCutlery, timePerRun;
    double waterConsumption;

    struct Dishes
    {
        Dishes();
        float oiliness;
        int soupBowls, regularPlates, cups, glasses;
        void clogDrain(std::string residues = "too much");
        void tarnish(bool isSensitive = false);
        void shatter(bool isPiledBadly = false);
    };

    void cleanDishes(Dishes dishes);
    void dryDishes(bool shouldDryDishes = true, int temp = 55);
    void selfClean(int afterRun = 45);

    Dishes dishes;
};
Dishwasher::Dishwasher()
{
    capacityPlates = 15;
    capacityCupsGlasses = 18;
    capacityCutlery = 30;
    timePerRun = 135;
    waterConsumption = 30.5;
}
Dishwasher::Dishes::Dishes()
{
    oiliness = 25.76f;
    soupBowls = 4;
    regularPlates = 12;
    cups = 8;
    glasses = 5;
}
void Dishwasher::Dishes::clogDrain(std::string residues)
{
    if(residues == "too much")
    {
        std::cout << "clogged" << std::endl;
    }
}
void Dishwasher::Dishes::tarnish(bool isSensitive)
{
    if(isSensitive)
    {
        std::cout << "cutlery successfully tarnished" << std::endl;
    }
}
void Dishwasher::Dishes::shatter(bool isPiledBadly)
{
    if(isPiledBadly)
    {
        std::cout << "let's break some stuff" << std::endl;
    }
}
void Dishwasher::cleanDishes(Dishwasher::Dishes newDishes)
{
    if(newDishes.oiliness > 0)
    {
        std::cout << "dishes are dirty, oiliness: " << newDishes.oiliness << std::endl;
        std::cout << "cleaning dishes..." << std::endl;
        newDishes.oiliness = 0.f;
        dishes.oiliness = newDishes.oiliness;
        dishes.soupBowls = newDishes.soupBowls;
        dishes.regularPlates = newDishes.regularPlates;
        dishes.cups = newDishes.cups;
        dishes.glasses = newDishes.glasses;
        std::cout << "dishes cleaned, oiliness: " << dishes.oiliness << std::endl;
    }
    else
    {
        std::cout << "dishes are not dirty, oiliness: " << dishes.oiliness << std::endl;
    }
}
void Dishwasher::dryDishes(bool shouldDryDishes, int temp)
{
    if(shouldDryDishes)
    {
        if(temp < 55)
        {
            std::cout << "raising temperature to 55" << std::endl;
        }
    }
}
void Dishwasher::selfClean(int afterRun)
{
    if(afterRun >= 45)
    {
        std::cout << "let's clean" << std::endl;
    }
    else
    {
        std::cout << "not yet" << std::endl;
    }
}

struct Oven
{
    Oven();
    int numberBakingSheets, numberPrograms;
    double highestTemp, currentTemp;
    std::string currentProgram;
    void bakeCake(std::string typeOfCake = "apple", int preHeat = 180);
    void bakePizza(std::string typeOfPizza = "margherita", int preHeat = 220);
    void makeRoast(std::string typeOfRoast = "beef", int setTemp = 230);
};
Oven::Oven()
{
    numberBakingSheets = 3;
    highestTemp = 300;
    currentTemp = 220;
    numberPrograms = 5;
    currentProgram = "top heat";
}
void Oven::bakeCake(std::string typeOfCake, int preHeat)
{
    std::cout << "baking an " << typeOfCake << " pie, preheating to " << preHeat << std::endl;
}
void Oven::bakePizza(std::string typeOfPizza, int preHeat)
{
    std::cout << "baking a pizza " << typeOfPizza << ", preheating to " << preHeat << std::endl;
}
void Oven::makeRoast(std::string typeOfRoast, int setTemp)
{
    std::cout << "making a " << typeOfRoast << " roast, setting Temperature to " << setTemp << std::endl;
}

struct Stove
{
    Stove();
    std::string typeStove;
    int numberHotplates, hotplatesInUse;
    double largestDiam, smallestDiam;
    void boilWater(int setLevel = 9);
    void frySteaks(int setLevel = 7);
    void makeSoup(int setLevel = 5);
};
Stove::Stove()
{
    typeStove = "induction";
    numberHotplates = 4;
    largestDiam = 28.5;
    smallestDiam = 14.5;
    hotplatesInUse = 1;
}
void Stove::boilWater(int setLevel)
{
    std::cout << "boiling water, setting level to " << setLevel << std::endl;
}
void Stove::frySteaks(int setLevel)
{
    std::cout << "frying steaks, setting level to " << setLevel << std::endl;
}
void Stove::makeSoup(int setLevel)
{
    std::cout << "making soup, setting level to " << setLevel << std::endl;
}

struct Microwave
{
    Microwave();
    int numberPrograms, highestWattage, lowestWattage;
    double height, diameter;
    void heatLunch(float setTimer = 2.57f);
    void meltButter(float setTimer = 0.875f);
    void makePopcorn(float setTimer = 1.78564f);
};
Microwave::Microwave()
{
    numberPrograms = 3;
    highestWattage = 900;
    lowestWattage = 400;
    height = 20.5;
    diameter = 18.5;
}
void Microwave::heatLunch(float setTimer)
{
    std::cout << "heating lunch, setting timer to " << setTimer << std::endl;
}
void Microwave::meltButter(float setTimer)
{
    std::cout << "melting butter, setting timer to " << setTimer << std::endl;
}
void Microwave::makePopcorn(float setTimer)
{
    std::cout << "making popcorn, setting timer to " << setTimer << std::endl;
}

struct Fridge
{
    Fridge();
    int numTrays;
    double totalVolume, lowestTemp, currentTemp, currentUtilization;
    void keepThingsCold(bool activatedSteadyModule = true);
    void chillDrinks(bool activateQuickCool = true);
    void keepPerishablesFresh(bool regulateHumidity = true);
};
Fridge::Fridge()
{
    numTrays = 5;
    totalVolume = 150.6;
    lowestTemp = 0.1;
    currentTemp = 0.5;
    currentUtilization = 35.0;
}
void Fridge::keepThingsCold(bool activatedSteadyModule)
{
    if(activatedSteadyModule)
    {
        std::cout << "keeping it cool" << std::endl;
    }
}
void Fridge::chillDrinks(bool activateQuickCool)
{
    if(activateQuickCool)
    {
        std::cout << "let's get those drinks cool" << std::endl;
    }
}
void Fridge::keepPerishablesFresh(bool regulateHumidity)
{
    if(regulateHumidity)
    {
        std::cout << "activating humidity controller" << std::endl;
    }
}

struct Kitchen
{
    Kitchen();
    Dishwasher dishwasher;
    Oven oven;
    Stove stove;
    Microwave microwave;
    Fridge fridge;
    void cookMeal(int numberPotsNeeded = 3, int numberPansNeeded = 1);
    void coolGroceries(bool tooHot = false);
    void cleanDishes(bool dishwasherTabPresent = true);
};
Kitchen::Kitchen()
{

}
void Kitchen::cookMeal(int numberPotsNeeded, int numberPansNeeded)
{
    std::cout << "we need " << numberPotsNeeded << " pot(s) and " << numberPansNeeded << " pan(s)" << std::endl;
}
void Kitchen::coolGroceries(bool tooHot)
{
    if(tooHot)
    {
        std::cout << "let's not put them in the fridge yet" << std::endl;
    }
}
void Kitchen::cleanDishes(bool dishwasherTabPresent)
{
    if(dishwasherTabPresent)
    {
        std::cout << "start the washing machine" << std::endl;
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

    DrumSet drumset;
    drumset.overpowerOtherInstruments(true);

    CoffeeMachine coffeemachine;
    std::cout << "Is cleaning needed? " << std::endl;
    coffeemachine.selfClean(2);

    CoffeeMachine::Coffee coffee;
    coffee.burnTongue();

    AppleTree appletree;
    appletree.dropApples(85);

    Computer computer;
    computer.storeFiles();
    std::cout << "there's " << computer.numCaseFans << " fans in the case" << std::endl;

    Dishwasher dishwasher;
    dishwasher.dryDishes();

    dishwasher.dishes.tarnish(true);
    dishwasher.cleanDishes(dishwasher.dishes);
    dishwasher.cleanDishes(dishwasher.dishes);

    Oven oven;
    oven.bakePizza();
    std::cout << "How high does it go? -Up to " << oven.highestTemp << " degrees." << std::endl;

    Stove stove;
    stove.boilWater();

    Microwave microwave;
    microwave.makePopcorn();

    Fridge fridge;
    fridge.keepThingsCold();
    std::cout << "The fridge's current temperature is " << fridge.currentTemp << " degrees." << std::endl;

    Kitchen kitchen;
    kitchen.cookMeal();
    kitchen.coolGroceries(true);

    std::cout << "good to go!" << std::endl;
}
