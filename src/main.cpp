#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
int main(){
    int time = 1500;
    while(time > 0){
        
        int minutes = time/60;
        int value = time - 1;
        int seconds = value - (minutes * 60);
        cout << minutes << ":" << seconds << endl; 

        this_thread::sleep_for(chrono::seconds(1));
        time = time - 1; 
    }
}