#include <iostream>
#include <fstream>  // for file handling
#include <string>   // for strings
using namespace std;

// Function to write (create or overwrite) a file
void writeToFile(const string& filename) {
    ofstream file(filename); // open file for writing (overwrites if exists)

    if (!file) {
        cout << "Error creating file!" << endl;
        return;
    }

    string data;
    cout << "Enter text to write to the file (end with a blank line):\n";
    cin.ignore(); // clear newline from input buffer


    while (true) {
        getline(cin, data);
        if (data.empty()) break; // stop on blank line
        file << data << endl;
    }

    file.close();
    cout << "Data written successfully.\n";
}


// Function to append data to an existing file
void appendToFile(const string& filename) {
    ofstream file(filename, ios::app); // open file in append mode

    if (!file) {
        cout << "Error opening file to append!" << endl;
        return;
    }

    string data;
    cout << "Enter text to append to the file (end with a blank line):\n";
    cin.ignore();

    while (true) {
        getline(cin, data);
        if (data.empty()) break;
        file << data << endl;
    }

    file.close();
    cout << "Data appended successfully.\n";
}

// Function to read and display file content
void readFile(const string& filename) {
    ifstream file(filename); // open file for reading

    if (!file) {
        cout << "Error reading file! Make sure it exists." << endl;
        return;
    }

    string line;
    cout << "\n--- File Content ---\n";

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    cout << "---------------------\n";
}

int main() {
    string filename;
    int choice;

    cout << "Simple File Management Tool in C++\n";
    cout << "Enter filename (e.g., data.txt): ";
    cin >> filename;

    do {
        cout << "\nChoose an option:\n";
        cout << "1. Write to file (overwrite)\n";
        cout << "2. Append to file\n";
        cout << "3. Read file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFile(filename);
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
