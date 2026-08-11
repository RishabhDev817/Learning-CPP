#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    bool keeprunning = true;
    string athleteName;

    cout << "Enter athlete name: ";
    // Use getline to allow full names with spaces safely
    getline(cin, athleteName); 

    do {
        cout << "\nBiomechanics & Performance Tracker" << endl;
        cout << "Current Athlete: " << athleteName << endl;
        cout << "1. Analyze 100m Sprint Mechanics" << endl;
        cout << "2. Log Plyometric Volume" << endl;
        cout << "3. Exit System" << endl;
        cout << "Select a module (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                float sprintTime;
                cout << "Enter 100m sprint time (seconds): ";
                cin >> sprintTime;

                if (sprintTime < 10.5) {
                    cout << "[Result]: Elite national level. Excellent power output." << endl;
                } else if (sprintTime >= 10.5 && sprintTime <= 11.5) {
                    cout << "[Result]: Advanced competitive level. Solid mechanics." << endl;
                } else {
                    cout << "[Result]: Focus on starting block explosion and stride frequency." << endl;
                }
                break;
            }
            case 2: {
                int sets;
                cout << "\nEnter number of plyometric sets completed: ";
                cin >> sets;

                for (int i = 1; i <= sets; i++) {
                    cout << "Set " << i << " ground contact time logged." << endl;
                }
                cout << "[System]: Total volume recorded successfully." << endl;
                break;
            }
            case 3:
                cout << "\nSaving data... Exiting tracker. Great work today, " << athleteName << "." << endl;
                keeprunning = false; 
                break;
                
            default:
                cout << "\n[Error]: Invalid input. Please select a valid module." << endl;
                break;
        }

    } while (keeprunning); 

    return 0; 
}