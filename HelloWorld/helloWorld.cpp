
//
//  Created by Gabriella Bairan on 10/13/16.

#include <fstream>
#include <iostream>

int main() {
    
    std::ifstream infile ("numbers.txt");
    float num;
    float total = 0.0f;
    unsigned int count = 0;
    
    // While infile successfully extracted numbers from the stream
    while(infile >> num) {
        total += num;
        ++count;
	std::cout << total << std::endl;
    }
    // don't need the file anymore, close it
    infile.close();
    
    // test to see if anything was read (prevent divide by 0)
    if (count==0) {
        std::cerr << "Couldn't read any numbers!" << std::endl;
        return 1;
    }
    
    // give the average
    std::cout << "The average was: " << total/count << std::endl;
    
    // pause the console
    std::cin.sync();
    std::cin.get();
    
    return 0;
}
