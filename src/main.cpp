#include <iostream>
#include <chrono>
#include <string>
#include <thread>
#include <clocale>

using namespace std;
int main(){
    std::setlocale(LC_ALL, "");
    
    int time = 1500;
    while(time > 0){
        
        int minutes = time/60;
        int seconds = time % 60;
        int elapsed_time = 1500 - time;
        int progress = elapsed_time * 100 / 1500; 
            
        cout << minutes << ":"; 

        if(seconds < 10){
            cout << "0";
        }

        cout <<seconds << "\n";

        std::string progress_bar = "";
        for(int i = 0; i <= progress; i ++){
            progress_bar += "█";
        }

        std::string empty_bar = "";
        for(int i = 0; i <= 100; i++){
            empty_bar += "░";
        }
        cout << progress_bar << empty_bar << " "<< progress << "%" << "\033[K" << "\n";
        cout << "\033[2A" << flush;
        this_thread::sleep_for(chrono::seconds(1));
        time = time - 1; 
    }
}