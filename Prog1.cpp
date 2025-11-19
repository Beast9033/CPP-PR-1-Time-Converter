#include<iostream>

using namespace std;

class totalTime{
    int totalsec;

    public:
    void setTime(int seconds) 
    {
        totalsec = seconds;
    }
    
    int getTime()
    {
        return totalsec;
    }

    void time()
    {
        int hh = totalsec / 3600;
        int mm = (totalsec % 3600) / 60;
        int ss = totalsec % 60;
        cout << "HH:MM:SS: " <<hh<<":"<<mm<<":"<<ss;
    }

    void sethour(int hh, int mm, int ss) 
    {
        totalsec = (hh * 3600)+(mm * 60)+ss;
    }
};

int main() 
{
    totalTime totalTime;
    int choice;

    do{
        cout << "\nTime Converter\n";

        cout << "\nSelect Your Choice: ";
        cout << "\n1. Convert Seconds to HH:MM:SS";
        cout << "\n2. Convert HH:MM:SS to Seconds";
        cout << "\n0. Exit";
        
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) 
        {
        case 1: 
        {
            int seconds;
            cout << "Enter seconds: ";
            cin >> seconds;
            totalTime.setTime(seconds);
            totalTime.time();
            break;
        }
        case 2: 
        {
            int hh, mm, ss;
            cout << "Enter hour: ";
            cin >> hh;
            cout << "Enter minutes: ";
            cin >> mm;
            cout << "Enter seconds: ";
            cin >> ss;
            totalTime.sethour(hh, mm, ss);

            cout << "Total seconds: " << totalTime.getTime();
            break;
        }

        case 0:
            break;
        default:
            cout << "Invalid choice";
            break;
        }

    }while(choice != 0);

    return 0;
}