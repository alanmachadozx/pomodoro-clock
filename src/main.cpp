#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
int main(){
    int time = 1500;
    while(time > 0){
        
        int minutes = time/60;
        int seconds = time % 60;
        cout << minutes << ":"; 

        if(seconds < 10){
            cout << "0";
        }

        cout <<seconds<< "\r" << flush;
        this_thread::sleep_for(chrono::seconds(1));
        time = time - 1; 
    }
}