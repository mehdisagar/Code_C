#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string line;
    // creating an instance of ofstream(output stream) to write to a file
    ofstream myFileO("input.txt"); // it will create a file if it does not exist
    if(myFileO.is_open()) {

        myFileO << "I am writing the the file \n";
        myFileO << "Still writing to the file \n";
        myFileO.close();

    }
    else cout << "The file is close and I can not open it" << endl;

    // Now I want to read the content I have already add the file

    ifstream myFileI("input.txt");
    if(myFileI.is_open()){
        while(getline(myFileI, line)) {
            cout << line << endl;
        }
        myFileI.close();
    }
    else cout << "Unable to open the file \n";

    return 0;
}
