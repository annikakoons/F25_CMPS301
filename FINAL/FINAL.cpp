// FINAL.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <limits>
using namespace std;

struct Node {
    string question;                // The question text
    map<string, string> next;         // Maps answer -> next node name
    bool isResult = false;          // Is this node a final result?
    string resultText;              // Text to display if it is a result
};

int main()
{

 unordered_map<string, Node> tree;

 //greet the user
 cout << "******Welcome to the Drink Selector!******"<<endl<<endl;
 cout << "We offer a unique drink ordering experience that bases your order off of your vibe rather than a craving!"<<endl<<endl;

 void pressToContinue(); {
     cout << "Press ENTER to get started!";
     cin.get();  // waits for Enter
       
     }
 cout << "=========================================================================================================" << endl << endl;

        // Define questions and get user input
 tree["start"] = { "Do you want a hot or iced drink today? (hot/iced): ", { {"hot","Hot"}, {"Hot","Hot"}, {"iced","Iced"}, {"Iced","Iced"}}};

    tree["Hot"] = { "Imagine this, its a chilly morning. The air is crisp with leaves scattered all across the ground.\nWhat are your plans today? Are you in the mood to go OUT and enjoy the weather\nor do you plan on bundling up at HOME?  (out/home): ", { {"out","Going_out"}, {"Out","Going_out"}, {"home","Staying_home"}, {"Home","Staying_home"}}};
        tree["Going_out"] = {"Going out and enjoying the weather is so nice on chilly days especially if you have someting fun to!\nIf you got to pick, are you going to a PUMPKIN patch or going APPLE picking? (pumpkin/apple): ", {{"pumpkin","Pumpkin_patch"}, {"Pumpkin","Pumpkin_patch"}, {"apple","Apple_picking"}, {"Apple","Apple_picking"}}};
        tree["Staying_home"] = { "Staying home really is the best on a chilly day, especially if you're bundled up.\nWhich do you prefer on a day like this, watching a MOVIE or reading a BOOK? (movie/book): ", { {"movie","Watching_movie"}, {"Movie","Watching_movie"}, {"book","Reading_book"}, {"Book","Reading_book"}}};
       

    tree["Iced"] = { "Imagine this, its a sunny morning. The sun is shining, the birds are chirping and you can tell its going to get warm.\nWhat are your plans for the day? Are you packing your things in the car to go to the BEACH\nor are you getting a bag of snacks together to go to the PARK? (beach/park): ", { {"beach","Beach_day"}, {"Beach","Beach_day"}, {"park","Park_day"}, {"Park","Park_day"}} };
        tree["Beach_day"] = { "Enjoying the sun at the beach is always a good choice. How do you imagine spending the day?\nAre you someone that sits in the sun to TAN or do you like to FLOAT in the water? (tan/float): ", {{"tan","Tan"}, {"Tan","Tan"}, {"float","Float"}, {"Float","Float"}} };
        tree["Park_day"] = { "Before the weather gets too hot its always nice to spend a day at the park. What do you plan on packing in your bag?\nAre you in the mood to enjoy the park JOURNALING or are you planning a PICNIC? (journal/picnic): ", {{"journal","Journal"}, {"Journal","Journal"}, {"picnic","Picnic"}, {"Picnic","Picnic"}} };

        // Define results
            tree["Pumpkin_patch"] = { "", {}, true, "Your drink is a hot PUMPKIN SPICE LATTE" };
            tree["Apple_picking"] = { "", {}, true, "Your drink is a hot APPLE CIDER!" };
            tree["Watching_movie"] = { "", {}, true, "Your drink is a HOT CHOCOLATE!" };
            tree["Reading_book"] = { "", {}, true, "Your drink is a CHAMOMILE TEA!" };
            tree["Tan"] = { "", {}, true, "Your drink is an AGUA FRESCA!" };
            tree["Float"] = { "", {}, true, "Your drink is an iced SEA SALT JASMINE GREEN TEA!" };
            tree["Picnic"] = { "", {}, true, "Your drink is a RASPBERRY LEMONADE!" };
            tree["Journal"] = { "", {}, true, "Your drink is an iced GREEN TEA!" };


        // --- Start traversal ---
        string current = "start";
        string answer;  

        while (true) {
            Node& node = tree[current];

            if (node.isResult) {
                cout << endl;
                cout << "=========================================================================================================" << endl<<endl;
                cout<<node.resultText << endl << endl;
                cout << "We hope you like your drink! Come again soon!" << endl;
                cout << "---------------------------------------------" << endl;
                break;
            }

            cout << endl << node.question;   //Add a newline before each question

            cin >> answer;

            cout << endl;                    //Add space after answer

            if (node.next.count(answer)) {
                current = node.next[answer];
            }
            else {
                cout << "Invalid input, please try again."<<endl;
            }
        }
        return 0;
   
}

