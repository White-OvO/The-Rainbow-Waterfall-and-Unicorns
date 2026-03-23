#include <iostream> 
using namespace std; 

int main () { 

/*
Step C32 
 The while loop breaks when all the unicorns are revived. You can keep 
5 Boolean variables that check if a unicorn is revived or not. 
*/
bool scarletRevived = false;
bool sunshineSpeedsterRevived = false;
bool oceanDreamerRevived = false;
bool forestWhispererRevived = false;
bool stardustSparklerRevived = false;

int needR = 0, needB = 0, needY = 0;
int needG = 0, needO = 0;
int needI = 0, needV = 0;

bool unicornSelected = false; 
string currentUnicorn = "";
int unicornChoice =0; 





while(!scarletRevived || !sunshineSpeedsterRevived || !oceanDreamerRevived || !forestWhispererRevived || !stardustSparklerRevived) { 
    bool validChoice = false; 
/*  Step C1 
Inside a while loop, print the names (and ids) of the unicorns that are 
still frozen and need to be revived.  
• Once the unicorn is revived, it goes away from the options. Print the 
choice like this: 
1. Scarlet Comet 
2. Sunshine Speedster 
3. Ocean Dreamer 
4. Forest Whisperer 
5. Stardust Knight
*/

/* (using the if statment to display the unicorns that are still frozen and need to be revived)
 Suppose you already revived Sunshine Speedster, then the options will 
be printed like this in the next iteration. 
1. Scarlet Comet 
3.   Ocean Dreamer 
4. Forest Whisperer 
5. Stardust Knight
*/
    while (!validChoice) {
        cout << "Frozen Unicorns to Revive:\n\n";
        if (!scarletRevived) cout << "1. Scarlet Comet is still frozen\n";
        if (!sunshineSpeedsterRevived) cout << "2. Sunshine Speedster is still frozen\n";
        if (!oceanDreamerRevived) cout << "3. Ocean Dreamer is still frozen\n";
        if (!forestWhispererRevived) cout << "4. Forest Whisperer is still frozen\n";
        if (!stardustSparklerRevived) cout << "5. Stardust Knight is still frozen\n";

        cout << "Select the Unicorn Number that you want revive now:" << endl; 
        cin >> unicornChoice; // choosing to resuce a unicorn

/*
TASK 2 : input choices 
Read the user’s (your) choice as an integer (1 - 5). These ids correspond 
to the unicorn names as given above. 
• If the user provides a non-numeric input, detect it with cin.fail(). Then 
print: “Invalid input. Please enter a number between 1 and 5.” Use 
cin.clear() to reset the error. Use cin.ignore(1000, '\n'); to discard the 
invalid input before asking again. 
• If by mistake you select an id of a unicorn that is already revived, your 
program prints a message saying, “This unicorn is already revived” and 
asks you to select again.  
• If you select a number other than 1,2,3,4,5. Your program prints: 
“There’s no such unicorn”. 
• Only move to the next part (Rainbow Waterfall) if a valid choice is 
made.
*/
 if (cin.fail()) {
                cout << "Invalid input. Please enter a number between 1 and 5.\n\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if (unicornChoice < 1 || unicornChoice > 5) {
                cout << "There's no such unicorn.\n\n";
                continue;
            }
                if ((unicornChoice == 1 && scarletRevived) ||
                    (unicornChoice == 2 && sunshineSpeedsterRevived) ||
                    (unicornChoice == 3 && oceanDreamerRevived) ||
                    (unicornChoice == 4 && forestWhispererRevived) ||
                    (unicornChoice == 5 && stardustSparklerRevived)) {
                    cout << currentUnicorn << " is already revived. Select another unicorn.\n\n";
                    continue;
                }
                validChoice = true;
}

    // video requirements 
/* 
3. Task 3: Setting up needs 
• Initialize 7 integer variables: needV, needI, needB, needG, needY, 
needO, needR to zero at the beginning of every iteration of the while 
loop. These variables will store the number of color drops needed to 
revive each unicorn.  
• Once a unicorn is selected, set these variables to that unicorn’s 
requirements (see the table). Example: If scarlet comet is selected, the 
values of each of these variables will be: needV=0, needI=0, 
needB=3, needG=0, needY=2, needO=0, needR=7. 
• Print the color needs of the selected Unicorn.     
*/
   cout <<"\nThe colors needed to revive this unicorn are: " ;
   if (unicornChoice == 1) {
    needR = 7; needB = 3; needY = 2;
    cout << "Red=7 drops, Blue=3 drops, Yellow=2 drops\n" << endl;
    currentUnicorn = "Scarlet Comet";
}else if (unicornChoice == 2) {
    needY = 8; needG = 3; needO = 2;
    cout << "Yellow=8 drops, Green=3 drops, Orange=2 drops\n" << endl;
    currentUnicorn = "Sunshine Speedster";
}else if (unicornChoice == 3) {
    needB = 6; needI = 4; needV = 2;
    cout << "Blue=6 drops, Indigo=4 drops, Violet=2 drops\n" << endl;
    currentUnicorn = "Ocean Dreamer";
}else if (unicornChoice == 4) {
    needG = 5; needR = 2; needO = 3;
    cout << "Green=5 drops, Red=2 drops, Orange=3 drops\n" << endl;
    currentUnicorn = "Forest Whisperer";
}else if (unicornChoice == 5) {
    needV = 7; needI = 3; needY = 3;
    cout << "Violet=7 drops, Indigo=3 drops, Yellow=3 drops\n" << endl;
    currentUnicorn = "Stardust Knight";
}

      // else { 
    //     cout << "Forest Whisperer is already revived. Select another unicorn." << endl; 


           // the rainbow waterfall 
    long long drops = 1; 
    string currentColor = "";

    /* 
    Step 2 
    . You are given a spelled vial where you can collect colored water drops from 
    the rainbow and you can use the collected water to revive each unicorn.
    */
    int  collectV = 0; int collectI = 0; int collectB = 0; int collectG = 0; int collectY = 0; int collectO = 0; int collectR = 0; 

    /* step1 
    
     There is a forest to farthest east corner of the kingdom and in the middle of 
    the forest there is a magic waterfall called the Rainbow Waterfall. Every 7 
    minutes (7 iterations) the color of the waterfall changes following the 7 colors 
       of the rainbow in a sequential manner: Violet → Indigo → Blue → Green →
    Yellow → Orange → Red. And this pattern continues in a loop. 
    Therefore, drop 1 to 7 of the waterfall will be Violet, drop 8 to 14 will be 
    Indigo and so on.       
    
    
    */


    /* 
Task 4: Rainbow Waterfall Loop 
• Use a nested while loop inside the previous one, to create the rainbow 
waterfall. 
• The loop should continue until all the needed colors for the selected 
unicorn are collected. 
• Keep a counter call drops, starting at 1. Increment the value of drops at 
every iteration. 
• To change the color of waterfall after every 7 iterations following the 
VIBGYOR order, use integer division and modulus operator in the 
following way: 
o Declare a long variable windowIndex  
o Store (𝑑𝑟𝑜𝑝𝑠 − 1)/7 into it. 
o Declare an integer variable colorIndex. 
o Store (𝑤𝑖𝑛𝑑𝑜𝑤𝐼𝑛𝑑𝑒𝑥 % 7) into it. (Do proper typecasting here) 
o Now write a set of if statements to show and/or store the current 
color of the waterfall. If colorIndex is 0, waterfall is Violet and 
so on. The variable colorIndex will only have values from 0 to 6 
as the (𝑤𝑖𝑛𝑑𝑜𝑤𝐼𝑛𝑑𝑒𝑥 % 7) is done to store values into it. 
o Print the drop number and its color.
    */
   while (true) { 
    long windowIndex = ((drops - 1 )/ 7) % 7; 
    int colorIndex = static_cast<int>(windowIndex % 7); 
    if (colorIndex == 0) currentColor = "violet";
    else if (colorIndex == 1) currentColor = "indigo";
    else if (colorIndex == 2) currentColor = "blue";
    else if (colorIndex == 3) currentColor = "green";
    else if (colorIndex == 4) currentColor = "yellow";
    else if (colorIndex == 5) currentColor = "orange";
    else currentColor = "red";

    cout << "Drop:" << drops << "|| The current waterfall drop is: " << currentColor << endl;
    // Reset collected flag for each drop
    bool collected = false;

    // Favorite color drinking rule for revived unicorns
    if (scarletRevived && currentColor == "red" && drops % 2 == 0) {
        cout << "Drop:" << drops << "|| Scarlet Comet drinks this " << currentColor << " drop" << endl << endl;
        drops++;
        continue;
    }
    if (sunshineSpeedsterRevived && currentColor == "yellow" && drops % 2 == 0) {
        cout << "Drop:" << drops << "|| Sunshine Speedster drinks this " << currentColor << " drop" << endl << endl;
        drops++;
        continue;
    }
    if (oceanDreamerRevived && currentColor == "blue" && drops % 2 == 0) {
        cout << "Drop:" << drops << "|| Ocean Dreamer drinks this " << currentColor << " drop" << endl << endl;
        drops++;
        continue;
    }
    if (forestWhispererRevived && currentColor == "green" && drops % 2 == 0) {
        cout << "Drop:" << drops << "|| Forest Whisperer drinks this " << currentColor << " drop" << endl << endl;
        drops++;
        continue;
    }
    if (stardustSparklerRevived && currentColor == "violet" && drops % 2 == 0) {
        cout << "Drop:" << drops << "|| Stardust Knight drinks this " << currentColor << " drop" << endl << endl;
        drops++;
        continue;
    }

/*
D. Problem Part II:  
Unicorn Name 
Now, every unicorn has its own favorite color. The table of favorite colors is given 
below. 
Scarlet Comet 
Favorite Color 
Sunshine Speedster 
Red 
Yellow 
Ocean Dreamer 
Forest Whisperer 
Blue 
Green 
Stardust Knight 
Violet 
Once revived, each unicorn drinks the even number drop from the waterfall if the 
color is its favorite color. So, for example if Scarlet Comet is revived, the 
prince/princess can only collect drop 1, 3, 5 and 7 of red color if he/she needs that 
color next. 


E. Problem Part II Programming Tasks: 
1. Updated Task 5 of Part I: Collecting drops 
Modify task 5 of part I in the following way− 
• For each drop of the rainbow waterfall: 
o If it’s the favorite color of a revived unicorn, and the drop number 
is even; then print the drop number and the message: [Unicorn 
Name] drinks this drop. 
o Otherwise, if it’s a needed color for the current unicorn; then 
collect it and increase the corresponding collectX variable. 
*/
if (scarletRevived && currentColor == "red" && drops % 2 == 0) {
        cout <<"Drop:" << drops << "|| Scarlet Comet drinks this " << currentColor << " drop" << endl << endl;
        drops++;
        continue;
    }

    if (sunshineSpeedsterRevived && currentColor == "yellow" && drops % 2 == 0) {
        cout <<"Drop:" << drops << "|| Sunshine Speedster drinks this " << currentColor << " drop " << endl << endl;
        drops++;
        continue;
    }

    if (oceanDreamerRevived && currentColor == "blue" && drops % 2 == 0) {
        cout <<"Drop:" << drops << "|| Ocean Dreamer drinks this " << currentColor << " drop " << endl << endl;
        drops++;
        continue;
    }

    if (forestWhispererRevived && currentColor == "green" && drops % 2 == 0) {
        cout <<"Drop:" << drops << "|| Forest Whisperer drinks this " << currentColor << " drop " << endl << endl;
        drops++;
        continue;
    }

    if (stardustSparklerRevived && currentColor == "violet" && drops % 2 == 0) {
        cout <<"Drop:" << drops << "|| Stardust Knight drinks this " << currentColor << " drop " << endl << endl;
        drops++;
        continue;
    }


        /* step 3 
        But each unicorn has a specific need, only a specific combination of colored 
        water can revive a specific unicorn. The table below gives the color key for 
        each of them. 
        Unicorn 
        Color Key (number of drops of each color 
        needed) 
        Scarlet Comet 
        Red=7, Blue=3, Yellow=2 
        Sunshine Speedster Yellow=8, Green=3, Orange=2 
        Ocean Dreamer 
        Forest Whisperer 
        Blue=6, Indigo=4, Violet=2 
        Green=5, Red=2, Orange=3 
        Stardust Knight 
        Violet=7, Indigo=3, Yellow=3 
        */



/*
5. Task 5: Collecting drops 
• If the colorIndex of the current window matches with any of the needed 
colored for the current unicorn to revive, then collect it. 
• For collecting, you need to have another set of 7 integer 
variables−collectV, collectI, collect….so on; initialized to 0 before the 
starting of the rainbow loop.  
• If you collect a color, the collectX (where X stands for that specific 
color), is increased by 1. 
• The rainbow loop continues till all 7 collectX variables match exactly 
with the needX variables.         
*/


/*
. Task 6: Reviving the current Unicorn 
• Once the unicorn’s needs are fully met, print: “[the unicorn’s name] is 
revived!!”. Example: Scarlet Comet is revived!! 
• Mark that unicorn’s bool flag as true. 
• Print: The time taken to revive [Unicorn Name]=_____minutes (Print 
the total number of iterations of the inner while loop for reviving this 
unicorn.). Reset this value as a new unicorn is selected in the next 
iteration of the outer while loop and print the same for that one too.  
• Go back to the menu (outer while loop) and continue till all unicorns 
are revived.
*/
   if (unicornChoice == 1) {
        // Only collect if still needed
        if (currentColor == "red" && needR > 0) {
            needR--; collected = true;
        }
        if (currentColor == "blue" && needB > 0) {
            needB--; collected = true;
        }
        if (currentColor == "yellow" && needY > 0) {
            needY--; collected = true;
        }
        // Print collection message on its own line
        if (collected) {
            cout << "Drop:"<<drops <<"||"<< " You collect this " << currentColor << " drop" << endl << endl;
        }
        if (needR == 0 && needB == 0 && needY == 0) {
            scarletRevived = true;
            cout << "The total time taken to revive Scarlet Comet is:" << drops << " minutes." << endl;
            cout << "\nThe Scarlet Comet unicorn is revived!!!\n"  << endl; 
            break;
        }
        drops++;
    }


    
    if(unicornChoice == 2) {
        if (currentColor == "yellow" && needY > 0) {
            needY--; collected = true;
        }
        if (currentColor == "green" && needG > 0) {
            needG--; collected = true;
        }
        if (currentColor == "orange" && needO > 0) {
            needO--; collected = true;
        }
        if (collected) {
            cout << "Drop:"<<drops <<"||"<< " You collect this " << currentColor << " drop" << endl << endl;
        }
        if (needY == 0 && needG == 0 && needO == 0) {
            sunshineSpeedsterRevived = true;
            cout << "The total time taken to revive Sunshine Speedster is:" << drops << " minutes." << endl;
            cout << "\nThe Sunshine Speedster unicorn is revived!!!\n"<< endl; 
            break;
        }
        drops++;
    }

    if(unicornChoice == 3 ) { 
        if (currentColor == "blue" && needB > 0) {
            needB--; collected = true;
        }
        if (currentColor == "indigo" && needI > 0) {
            needI--; collected = true;
        }
        if (currentColor == "violet" && needV > 0) {
            needV--; collected = true;
        }
        if (collected) {
            cout << "Drop:"<<drops <<"||"<< " You collect this " << currentColor << " drop" << endl << endl;
        }
        if (needB == 0 && needI == 0 && needV == 0) {
            oceanDreamerRevived = true;
            cout << "The total time taken to revive Ocean Dreamer is:" << drops << " minutes." << endl;
            cout << "\nThe Ocean Dreamer unicorn is revived!!!\n" << endl;
            break;
        }
        drops++;
    }

    if(unicornChoice == 4) { 
        if (currentColor == "green" && needG > 0) {
            needG--; collected = true;
        }
        if (currentColor == "red" && needR > 0) {
            needR--; collected = true;
        }
        if (currentColor == "orange" && needO > 0) {
            needO--; collected = true;
        }
        if (collected) {
            cout << "Drop:"<<drops <<"||"<< " You collect this " << currentColor << " drop" << endl << endl;
        }
        if (needG == 0 && needR == 0 && needO == 0) {
            forestWhispererRevived = true;
            cout << "The total time taken to revive Forest Whisperer is:" << drops << " minutes." << endl;
            cout << "\nThe Forest Whisperer unicorn is revived!!!\n" << endl;
            break;
        }
        drops++;
    }
    if(unicornChoice == 5) { 
        if (currentColor == "violet" && needV > 0) {
            needV--; collected = true;
        }
        if (currentColor == "indigo" && needI > 0) {
            needI--; collected = true;
        }
        if (currentColor == "yellow" && needY > 0) {
            needY--; collected = true;
        }
        if (collected) {
            cout << "Drop:"<<drops <<"||"<< " You collect this " << currentColor << " drop" << endl << endl;
        }
        if (needV == 0 && needI == 0 && needY == 0) {
            stardustSparklerRevived = true;
            cout << "The total time taken to revive Stardust Knight is:" << drops << " minutes." << endl;
            cout << "\nThe Stardust Knight unicorn is revived!!!\n" << endl;
            break;
        }
        drops++;
}
}
}




cout << "\n The 5 powerful unicorns are revived and now they can create the magic rainbow:\n\n";


/* 
F. Problem Part III:  
Once all five unicorns are revived, they gather at the Rainbow Waterfall and create 
a magical rainbow arc with their favorite colors. Print this once the while loop 
ends: “The 5 powerful unicorns are revived and now they can create the magic 
rainbow”. The rainbow is drawn in a special pattern of letters (R, Y, B, G, V).  
    RYBGV 
        RYBGV 
            RYBGV 
            RYBGV   
        RYBGV 
    RYBGV

G. Problem Part III Programming Tasks: 
1. Task 7: Creating the rainbow 
• Use nested for loops to control spacing and printing characters. 
• Outer loop decides which row you are in. 
• Inner loop prints the spaces first, then the color sequence RYBGV. 
• The middle two rows have maximum indentation, and they have the 
same indentation.
*/
for (int row = 1; row <= 6; row++) {

    int spaces = 0;

    if (row <= 3)
        spaces = (row - 1) * 3;   // 0, 3, 6
    else
        spaces = (6 - row) * 3;   // 6, 3, 0

    for (int s = 0; s < spaces; s++) {
        cout << " ";
    }

    cout << "RYBGV\n";
}



    /* Step 4 
Constraints: You need to keep in mind− 
• You can collect only one drop every minute of the waterfall. (i.e. one 
drop per iteration) 
• You can revive only one unicorn at a time. You can choose which 
unicorn you want to revive and focus on collecting the colors needed to 
revive that one.  
• You need to collect the key colors for the selected unicorn in your vial 
and then empty the vial on the frozen unicorn to revive it. 
• Once a unicorn is revived, it is removed from the list of frozen unicorns, 
and you get to choose the next one to revive. 
• Your job is done once all the unicorns are revived.
    */
    return 0; 
}
