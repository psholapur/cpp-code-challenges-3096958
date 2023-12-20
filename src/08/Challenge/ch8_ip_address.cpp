// C++ Code Challenges, LinkedIn Learning

// Challenge #8: IP Address Validation
// Write an application that reads a string from the terminal and responds with a message indicating whether the string is a valid IP address or not.
// Assume decimal IP addresses.
// 158.25.0.33
// All numbers between 0 and 255.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// is_valid_ip()
// Summary: This function validates an IP address.
// Arguments:
//           ip: The string to analyze with a potential ip address.
// Returns: A boolean value. True for valid ip addresses, false otherwise.
bool is_valid_ip(std::string ip){

    // Write your code here
    int byteInt;
    int startPos = 0;
    int count = 0;
    while (1)
    {
        try {
            int pos = ip.find('.', startPos);
            if (string::npos == pos)
                break;
            count = pos - startPos;
            string byteStr = ip.substr(startPos, count);
            byteInt = stoi(byteStr); 
            cout<<endl<<"Bye read is "<<byteInt;
            startPos = pos+1;
            //pos -= startPos;
        }
        catch (invalid_argument e)
        {
            cout<<"Invalid argument";
            return false;
        }
    };
    return true;
}

// Main function
int main(){
    std::string s;
    
    std::cout << std::endl << "Enter an IP address in decimal: " << std::flush;
    std::getline(std::cin,s);
    std::cout << " \n" << s << (is_valid_ip(s) ? " is" : " is not" ) << " a valid IP address.\n\n";
    return 0;
}
