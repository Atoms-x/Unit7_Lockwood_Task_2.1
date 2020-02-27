/*Unit7_Lockwood_Task_2.1 Dr_T 24 FEB 2020
  Abstract Data Structures
  IDE: Repl.it
*/

#include <iostream>
#include <string>

using namespace std;

//Abstract Data Structures ***************************************************************************************
struct TimeOfDay
{
  short hour;
  short minute;
  short second;
};

struct AppDate
{
  short day;
  short month;
  int year;
};

struct Event
{
  string eventName;
  TimeOfDay eventTime;
  AppDate eventDate;
  bool isUrgent;
};

//Function Prototypes ********************************************************************************************
void fTimeOfDay (TimeOfDay&);
void fAppDate (AppDate&);
void fEvent (TimeOfDay&, AppDate&, Event&);

//Main Function **************************************************************************************************
int main()
{
  TimeOfDay t;
  AppDate a;
  Event e;

  fTimeOfDay(t);
  fAppDate(a);
  fEvent(t, a, e);

  return 0;
}

//Function Definitions *******************************************************************************************
void fTimeOfDay(TimeOfDay &t)
{
  cout << "\nEnter Hours:\n";
  cin >> t.hour;

  cout << "Enter Minutes:\n";
  cin >> t.minute;

  cout << "Enter Seconds:\n";
  cin >> t.second;
}

void fAppDate (AppDate &a)
{
  cout << "\nEnter Day:\n";
  cin >> a.day;

  cout << "Enter Month:\n";
  cin >> a.month;

  cout << "Enter Year:\n";
  cin >> a.year; 
}

void fEvent (TimeOfDay &t, AppDate &a, Event &e)
{
  e.isUrgent = true;
  int urgent = 0;
  
  cout << "Is this event Urgent? (1 for yes, 0 for no): \n";
  cin >> urgent;
  
  cout << "Enter Event Name:\n";
  cin >> e.eventName;

  cout << "\nEVENT DETAILS:\n";
  (e.isUrgent == urgent) ? cout << e.isUrgent << " Event is urgent\n" : cout << e.isUrgent << " Event is not urgent\n";
  cout << "Event Name: " << e.eventName << "\n";

  cout << "Time: " << t.hour << ":" << t.minute << ":" << t.second << "\n";

  cout << "Date: " << a.day << "/" << a.month << "/" << a.year << "\n";
}