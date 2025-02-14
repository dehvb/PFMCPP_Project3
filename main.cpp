/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to EACH of your types. 
 
 2) inside these new member functions, use while() and for() loops to do something interesting 
         a) example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
    Your code should produce a lot of console output now.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //1), 2c) 
    {
        Bar bar(startingVal);                //2a)
        while( bar.num < threshold )         //2a) 
        { 
            bar.num += 1;                    //2a)
            std::cout << "  increasing bar.num: " << bar.num << std::endl; //4)
            if( bar.num >= threshold )       //2b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 3);        //3) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //4) 
    return 0;
}
}

//call Example::main() in main()




struct DrumSet
{
    DrumSet();
    int numToms { 3 };
    int numCrashs { 2 };
    int numFX, numBdPedals;
    float ageHeads;

    void makeLoudSounds(float velocity);
    void defineTheRhythm(int bpm);
    void overpowerOtherInstruments(bool hardHitter);

    int acquireMoreToms(int threshold, int currentNum = 0)
    {
        currentNum = numToms;
        while(currentNum < threshold)
        {
            numToms += 1;
            std::cout << "bought one more tom, now I have " << numToms << std::endl;
            if(numToms >= threshold)
            {
                std::cout << numToms << " is plenty" << std::endl;
                return numToms;
            }
        }
        return numToms;

    }
};

DrumSet::DrumSet() :
numFX(1),
numBdPedals(2),
ageHeads(0.74f)
{}

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
    std::cout << "I'll hit all my " << numToms << " toms now!" << std::endl;
}


struct CoffeeMachine
{
    CoffeeMachine();
    float waterLevel { 70.13f };
    float beansLevel, timeSinceCleaning;
    std::string coffeeBeans;
    int cupsPerRun { 2 };

    float refillReminder(float wtLvl = 100.f, float wtLimit = 15.f)
    {
        wtLvl = waterLevel;
        for( float i = wtLvl; i >= wtLimit; i -= 7.5f)
        {
            waterLevel = i;
        }
        wtLvl = waterLevel;
        std::cout << "water level is " << waterLevel << "%, please refill" << std::endl;
        return wtLvl;
    }

    struct Coffee
    {
        Coffee();
        bool isEspresso;
        std::string servingSize, intensity;
        int waterPerServing { 210 };
        int temperature { 85 };

        void requireBeans(int weightPerServing = 15);  
        void makeAwake(float caffeineConcentration = 7.23458796f);
        void burnTongue(std::string smell = "good", bool tooHot = true);

        int heatingUp(int targetTemp = 90, int currentTemp = 20)
        {
            while(currentTemp < targetTemp)
            {
                std::cout << "heating, current temperature is " << currentTemp << std::endl;
                currentTemp += targetTemp - currentTemp;
            }
            temperature = currentTemp;
            std::cout << "the temperature is "<< currentTemp << ", that's hot enough" << std::endl;
            return currentTemp;
        }
    };

    void makeCoffee(Coffee coffee);
    void grindBeans(Coffee coffee);
    void selfClean(int numberOfCupsServed);
};

CoffeeMachine::CoffeeMachine() :
beansLevel(30.64f),
timeSinceCleaning(33.333f),
coffeeBeans("Arabica")
{}

CoffeeMachine::Coffee::Coffee() :
isEspresso(false),
servingSize("double"),
intensity("strong")
{}

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
            std::cout << "ouch, that's " << temperature << " degrees hot" << std::endl;
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
        std::cout << "not yet, we only served " << numberOfCupsServed << " cups" << std::endl;
    }
    else
    {
        std::cout << "gotta clean" << std::endl;
    }
}


struct AppleTree
{
    AppleTree();
    float height { 2.3f };
    float age { 23.65f };
    double numBranches, numApples, leaflessness;

    void growApples(int soilQuality = 7, bool sunny = true);
    void provideShade(double leaflessness = 95.5, bool sunny = true);
    void dropApples(int appleRipeness = 75);

    float aging(float treeAge)
    {
        treeAge = age;
        for(float i = treeAge; i < 66; ++i)
        {
            age = i;
            if(age >= 65.f)
            {
                std::cout << "ok imma retire now" << std::endl;
            }
        }
        treeAge = age;
        std::cout << "The tree is " << age << " years old" << std::endl;
        return treeAge;
    }
};

AppleTree::AppleTree() :
numBranches(15.5),
numApples(55.8),
leaflessness(95.5)
{}

void AppleTree::growApples(int soilQuality, bool sunny)
{
    if(sunny)
    {
        if(soilQuality > 5)
        {
            std::cout << "growing a lot, the soil quality is a " << soilQuality << " out of 10" << std::endl;
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
    int amountRAM { 16 };
    int amountSsdStorage { 1000 };
    int numCaseFans, numUsbPorts;
    float clockspeedCPU;
    
    void storeFiles(float fileSize = 3456543);
    void runPrograms(bool asAdmin = false);
    void connectToInternet(bool wifiEnabled = false);

    int useUsb(int numPorts = 4, int numUsed = 0)
    {
        numPorts = numUsbPorts;
        int portsInUse = numUsed;
        for(int i = portsInUse; i <= numPorts; ++i)
        {
            portsInUse = i;
            if(i == numPorts)
            {
                std::cout << i << "/" << numPorts << " in use" << std::endl;
            }
        }
        return portsInUse;
    }
};

Computer::Computer() :
numCaseFans(4),
numUsbPorts(8),
clockspeedCPU(3995.7f)
{}

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
        std::cout << "Also running cool due to " << numCaseFans << " case fans" << std::endl;
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
    int capacityPlates { 15 };
    int capacityCupsGlasses { 18 };
    int capacityCutlery, timePerRun;
    double waterConsumption;

    struct Dishes
    {
        Dishes();
        float oiliness;
        int soupBowls { 4 };
        int regularPlates { 12 };
        int cups, glasses;
        void clogDrain(std::string residues = "too much");
        void tarnish(bool isSensitive = false);
        void shatter(bool isPiledBadly = false);

        int puttingInGlasses(int toClean = 5, int room = 18)
        {
            int spaceLeft = room - glasses - cups;
            std::cout << "glass(es) to put away: " << toClean << std::endl;
            while(spaceLeft > 0 && toClean > 0)
            {
                //std::cout << toClean << glasses << spaceLeft << std::endl;
                --toClean;
                //std::cout << "to clean " << toClean << std::endl;
                ++glasses;
                //std::cout << "glasses "  << glasses << std::endl;
                --spaceLeft;
                //std::cout << "space left "  << spaceLeft << std::endl;
            }
            std::cout << "any glasses left?" << std::endl;
            toClean == 0 ? std::cout << "all in there" << std::endl : std::cout << "yeah, " << toClean << ", but there's no more room..." << std::endl;
            return spaceLeft;
        }
    };

    void cleanDishes(Dishes dishes);
    void dryDishes(bool shouldDryDishes = true, int temp = 55);
    void selfClean(int afterRun = 45);

    int alarm(int remainingTime = 100)
    {
        remainingTime = timePerRun;
        while(remainingTime > 0)
        {
            --remainingTime;
            if(remainingTime == 0)
            {
                std::cout << std::endl << "beep beep beep" << std::endl;
            }
            else
            {
                std::cout << "M";
            }
        }
        return remainingTime;
    }

    Dishes dishes;
};

Dishwasher::Dishwasher() :
capacityCutlery(30),
timePerRun(135),
waterConsumption(30.5)
{}

Dishwasher::Dishes::Dishes() :
oiliness(25.76f),
cups(8),
glasses(5)
{}

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
        std::cout << "let's break some stuff, e.g. " << cups << " cups" << std::endl;
    }
}

void Dishwasher::cleanDishes(Dishwasher::Dishes newDishes)
{
    if(newDishes.oiliness > 0)
    {
        std::cout << "dishes are dirty, oiliness: " << newDishes.oiliness << std::endl;
        std::cout << "cleaning dishes, this will take " << timePerRun << " minutes" << std::endl;
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
    int highestTemp { 300 };
    int currentTemp { 220 };
    std::string currentProgram;

    void bakeCake(std::string typeOfCake = "apple", int preHeat = 180);
    void bakePizza(std::string typeOfPizza = "margherita", int preHeat = 220);
    void makeRoast(std::string typeOfRoast = "beef", int setTemp = 230);

    int adjustTemp(int targetTemp = 200, int current = 25)
    {
        current = currentTemp;
        std::cout << "current: " << currentTemp << ", target is: " << targetTemp << std::endl;
        int dir = (current < targetTemp ? 1 : -1);
        while(current > targetTemp)
        {
            current += dir;
            currentTemp = current;
        }
        std::cout << "current: " << currentTemp << ", reached target of: " << targetTemp << std::endl;
        return current;
    }
};

Oven::Oven() :
numberBakingSheets(3),
numberPrograms(5),
currentProgram("top heat")
{}

void Oven::bakeCake(std::string typeOfCake, int preHeat)
{
    std::cout << "baking an " << typeOfCake << " pie, preheating to " << preHeat << std::endl;
}

void Oven::bakePizza(std::string typeOfPizza, int preHeat)
{
    std::cout << "baking a pizza " << typeOfPizza << ", preheating to " << preHeat << " although we can try " << highestTemp << " some time" << std::endl;
}

void Oven::makeRoast(std::string typeOfRoast, int setTemp)
{
    std::cout << "making a " << typeOfRoast << " roast, setting Temperature to " << setTemp << std::endl;
}

struct Stove
{
    Stove();
    std::string typeStove;
    int numberHotplates { 4 };
    int hotplatesInUse { 1 };
    double largestDiam, smallestDiam;

    void boilWater(int setLevel = 9);
    void frySteaks(int setLevel = 7);
    void makeSoup(int setLevel = 5);

    int cookBigMeal(int numPotsNeeded = 5, int inUse = 0)
    {
        hotplatesInUse = inUse;
        while(hotplatesInUse < numberHotplates && numPotsNeeded > 0)
        {
            --numPotsNeeded;
            ++hotplatesInUse;
            if(hotplatesInUse == numberHotplates) 
            {
                std::cout << "no more room" << std::endl;
            }
            
            std::cout << (numPotsNeeded == 0 ? 
                          "all pots on the stove" : 
                          std::string("still ") + std::to_string(numPotsNeeded) + " pot(s) more needed") 
                      << std::endl;
        }
        return numPotsNeeded;
    }
};

Stove::Stove() :
    typeStove("induction"),
    largestDiam(28.5),
    smallestDiam(14.5)
{}

void Stove::boilWater(int setLevel)
{
    std::cout << "boiling water, setting level to " << setLevel << " on 1 of " << numberHotplates << " hotplates" << std::endl;
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
    int numberPrograms { 3 };
    int highestWattage { 900 };
    int lowestWattage { 400 };
    double height, diameter;

    void heatLunch(float setTimer = 2.57f);
    void meltButter(float setTimer = 0.875f);
    void makePopcorn(float setTimer = 1.78564f);

    int raiseWattage(int current = 400, int target = 700)
    {
        std::cout << "turning the knob..." << std::endl;
        while(current < target)
        {
            current += 100;
            std::cout << "click" << std::endl;
        }
        return current;
    }
};

Microwave::Microwave() :
height(20.5),
diameter(18.5)
{}

void Microwave::heatLunch(float setTimer)
{
    std::cout << "heating lunch, setting timer to " << setTimer << std::endl;
}

void Microwave::meltButter(float setTimer)
{
    std::cout << "melting butter, setting timer to " << setTimer << " and using wattage " << lowestWattage << std::endl;
}

void Microwave::makePopcorn(float setTimer)
{
    std::cout << "making popcorn, setting timer to " << setTimer << std::endl;
}

struct Fridge
{
    Fridge();
    int numTrays { 5 };
    double totalVolume { 150.6 };
    double lowestTemp, currentTemp, currentUtilization;

    void keepThingsCold(bool activatedSteadyModule = true);
    void chillDrinks(bool activateQuickCool = true);
    void keepPerishablesFresh(bool regulateHumidity = true);

    double puttingInHotFood(double current = 0.5, int numItems = 3)
    {
        current = currentTemp;
        for(int i = 0; i < numItems; ++i)
        {
            current += 0.3;
            currentTemp = current;
            if(current > 1.2) {std::cout << "it's getting hot in here" << std::endl;}
        }
        return current;
    }
};

Fridge::Fridge() :
lowestTemp(0.1),
currentTemp(0.5),
currentUtilization(35.0)
{}

void Fridge::keepThingsCold(bool activatedSteadyModule)
{
    if(activatedSteadyModule)
    {
        std::cout << "keeping it cool, all " << totalVolume << " liters of volume" << std::endl;
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
    drumset.acquireMoreToms(5);
    std::cout << "current drumset has " << drumset.numToms << " toms" << std::endl;

    CoffeeMachine coffeemachine;
    std::cout << "Is cleaning needed? " << std::endl;
    coffeemachine.selfClean(2);
    std::cout << coffeemachine.waterLevel << std::endl;
    coffeemachine.refillReminder();
    std::cout << coffeemachine.waterLevel << std::endl;

    CoffeeMachine::Coffee coffee;
    coffee.heatingUp();
    coffee.burnTongue();

    AppleTree appletree;
    appletree.dropApples(85);
    appletree.growApples();
    std::cout << appletree.age << std::endl;
    appletree.aging(appletree.age);
    std::cout << appletree.age << std::endl;

    Computer computer;
    computer.storeFiles();
    //std::cout << "there's " << computer.numCaseFans << " fans in the case" << std::endl;
    computer.runPrograms(true);
    int inUse = computer.useUsb();
    std::cout << "Really?" << std::endl;
    std::cout << "Yes, all " << inUse << std::endl;

    Dishwasher dishwasher;
    dishwasher.dryDishes();
    dishwasher.alarm();

    dishwasher.dishes.tarnish(true);
    dishwasher.cleanDishes(dishwasher.dishes);
    dishwasher.cleanDishes(dishwasher.dishes);

    dishwasher.dishes.shatter(true);
    dishwasher.dishes.puttingInGlasses(2,18);
    dishwasher.dishes.puttingInGlasses(9,18);

    Oven oven;
    oven.bakePizza();
    std::cout << "How high does it go? -Up to " << oven.highestTemp << " degrees." << std::endl;
    oven.adjustTemp();

    Stove stove;
    stove.boilWater();
    stove.cookBigMeal();

    Microwave microwave;
    microwave.makePopcorn();
    microwave.meltButter();
    int current = microwave.raiseWattage();
    std::cout << "wattage set to " << current << std::endl;

    Fridge fridge;
    fridge.keepThingsCold();
    std::cout << "The fridge's current temperature is " << fridge.currentTemp << " degrees." << std::endl;
    double newTemp = fridge.puttingInHotFood();
    std::cout << "Now the temperature is " << newTemp << " degrees!" << std::endl;

    Kitchen kitchen;
    kitchen.cookMeal();
    kitchen.coolGroceries(true);


    std::cout << "good to go!" << std::endl;
}
