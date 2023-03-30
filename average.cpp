#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]){

    if(argc > 1){
        cout << "---------------------------------\n";
        float sum;
        for(int i=1 ; i < argc; i++){
        sum += atof(argv[i]);
        }
        sum = sum/(argc-1);
        cout << "Average of " << argc-1  << " numbers = " << sum << "\n";
        cout << "---------------------------------\n";
    }else{
        cout << "Please input numbers to find average.\n";
    }
}