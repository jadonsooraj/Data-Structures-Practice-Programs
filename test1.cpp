#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <limits>

using namespace std;

// Function to calculate the total distance for converting the name
int calculateTotalDistance(const string& goodString, const string& name) {
    int totalDistance = 0;
    char previousGoodLetter = goodString[0]; // Initialize with the first character of the good string

    for (char c : name) {
        if (isspace(c)) continue; // Skip spaces

        // Check if the character is already in the good string
        if (goodString.find(c) != string::npos) {
            previousGoodLetter = c; // Update previous good letter
            continue; // No distance for already good characters
        }

        int minDistance = numeric_limits<int>::max();
        char closestGoodLetter = '\0';

        for (char g : goodString) {
            int distance = abs(c - g); // Distance from the character to good string character

            // If distance is smaller, update closestGoodLetter
            if (distance < minDistance) {
                minDistance = distance;
                closestGoodLetter = g;
            } else if (distance == minDistance) {
                // If equidistant, check which is closer to previousGoodLetter
                if (abs(previousGoodLetter - closestGoodLetter) > abs(previousGoodLetter - g)) {
                    closestGoodLetter = g; // Select g if it's closer to the previous good letter
                }
            }
        }

        // Add the distance to total, based on previous good letter
        totalDistance += abs(previousGoodLetter - closestGoodLetter);
        previousGoodLetter = closestGoodLetter; // Update the previous good letter
    }

    return totalDistance;
}

int main() {
    // Read the good string
    cout<<"Enter good string:"<<endl;
    string goodString;
    getline(cin, goodString);
    
    // Read the name of the student
    cout<<"Enter student name:"<<endl;
    string name;
    getline(cin, name);

    // Calculate and output the total distance
    int totalDistance = calculateTotalDistance(goodString, name);
    cout << totalDistance << endl;

    return 0;
}
