#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:     baby
//  action 1: the baby cries
baby.cries();
//  action 2: the baby eats
baby.eats();
//  action 3: the baby sleeps
baby.sleep();

//  2)
//  Noun:     cat
//  action 1: the cat meows
cat.meow();
//  action 2: the cat scratches
cat.scratch();
//  action 3: the cat begs for treats
cat.beg();

//  3)
//  Noun:     phytoplankton
//  action 1: the phytoplankton obtains energy 
phytoplankton.obtainEnergy();
//  action 2: the phytoplankton produces oxygen
phytoplankton.produceOxygen();
//  action 3: the phytoplankton tries to steal the Krabby Patty secret formula
phytoplankton.getKrabbyPattySecretFormula();

//  4)
//  Noun:     geyser
//  action 1: the geyser erupts
geyser.erupt();
//  action 2: the geyser builds pressure
geyser.buildsPressure();
//  action 3: the geyser begins new cycle
gyser.beginNewCycle();

//  5)
//  Noun:     blacksmith
//  action 1: the blacksmith stokes the fire
blacksmith.stokeFire();
//  action 2: the blacksmith hammers hot metal
blacksmith.hammerMetal();
//  action 3: the blacksmith quenches forged object
blacksmith.quench();

//  6)
//  Noun:     singer
//  action 1: the singer warms up voice
singer.warmUp();
//  action 2: the singer sings a song
singer.singSong();
//  action 3: the singer dances
singer.dance();

//  7)
//  Noun:     bird
//  action 1: the bird chirps
bird.chirp();
//  action 2: the bird flies
bird.fly();
//  action 3: the bird pecks
bird.peck();
    
//  8)
//  Noun:     dishwasher  
//  action 1: the dishwasher fills with hot water
dishwasher.fillWithHotWater();
//  action 2: the dishwasher dispenses detergent
dishwasher.dispenseDetergent();
//  action 3: the dishwasher dries the dishes
dishwasher.dryDishes(); 

//  9)
//  Noun:     lawnMower
//  action 1: the lawn mower cuts grass
lawnMower.cutGrass();
//  action 2: the lawn mower uses fuel
lawnMower.consumeFuel();
//  action 3: the lawn mower moves forward
lawnMower.moveForward();

//  10)
//  Noun:     bankrobber
//  action 1: the bankrobber holds up a bank
bankrobber.holdup();
//  action 2: the bankrobber fills sack with cash
bankrobber.fillSack();
//  action 3: the bankrobber flees to get-away car
bankrobber.fleeToGetawayCar();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
