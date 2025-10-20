#include <iostream>
#include <limits>
using namespace std;

int main (){
    int choice;
    double temp, converter;
    
    // Repeats until user chooses to exit
    while (true){
        //Display menu
        cout << "\n=== TEMPERATURE CONVERTER ===" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Exit" <<endl;
        cout << "Enter your choice here (1-3): ";
        cin >> choice;
        
        /* error handling,To avoid infinite loop
        checks if the last input operation failed or not
        if returns true then program goes inside if block */
        
        if (cin.fail()) {       
            cin.clear();    //clear the error, resets broken input so new input can be taken again
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid choice. Please try again..."<<endl;
            continue; 
            //skips the rest body of loop in this iteration and restart loop
        }
        
        if (choice < 1 || choice > 3) {
            cout << "\nInvalid choice. Please try again..."<<endl;
            continue;
        }

        //if else ladder is only executes when input is valid
        if(choice == 1) {
            cout << "\nEnter temperature in Celsius: ";
            cin >> temp;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
            converter = (temp * 9.0/5.0) + 32;   // C -> F formula
            cout << "\n\tCelsius = " << temp << endl;
            cout <<"\tConverted in..."<< endl;
            cout << "\tFahrenheit = " << converter << endl ;
            cout << "\nPress Enter to return to menu";
            cin.get();
        } 
        else if(choice == 2) {
            cout << "\nEnter temperature in Fahrenheit: ";
            cin >> temp;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
            converter = (temp - 32) * 5.0/9.0;   //F -> C formula
            cout << "\n\tFahrenheit = " << temp << endl;
            cout << "\tConverted in..." << endl;
            cout << "\tCelsius = " << converter << endl;
            cout << "\nPress Enter to return to menu";
            cin.get();
        }       
        else if(choice == 3) {
            cout << "\n--- Exiting Temperature Converter ---\n"<< endl;
            break;   // Exit loop
        }
    }
    return 0;
}