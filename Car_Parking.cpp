/*
There are four type of vehicles to be parked in the parking lot. The parking charges are as follows:
1. For two wheelers: 50 Rs
2. For three wheelers: 100 Rs
3. For four wheelers: 150 Rs
4. For heavy vehicles: 300 Rs
Max number of vehicles that can be parked in the parking lot is 100.
I should be able to delete the whole record of the vehicle parked in the parking lot.
Write a program to calculate the parking charges for the vehicles parked in the parking lot. The program should ask the user to enter the type of vehicle. The program should display the parking charges. Use switch statement to solve the problem.
*/
#include <iostream>
using namespace std;
int main()
{
  int bike = 0;
  int auto_rickshaw = 0;
  int car = 0;
  int bus = 0;

  int u_input;
  int amount, count;
  while (true)
  {
    cout << "Press 1 for two wheelers" << endl;
    cout << "Press 2 for three wheelers" << endl;
    cout << "Press 3 for four wheelers" << endl;
    cout << "Press 4 for heavy vehicles" << endl;
    cout << "Press 5 to show the  record" << endl;
    cout << "Press 6 to delete the record" << endl;
    cin >> u_input;
    if (u_input == 1)
    {
      if (count <= 100)
      {
        bike = bike + 1;
        amount = amount + 50;
        count = count + 1;
      }
      else
      {
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
        cout << "Parking is full" << endl;
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
      
      }
    }
    else if (u_input == 2)
    {
      if (count <= 100)
      {
        auto_rickshaw = auto_rickshaw + 1;
        amount = amount + 100;
        count = count + 1;
      }
      else
      {
        cout << "Parking is full" << endl;
      }
    }
    else if (u_input == 3)
    {
      if (count <= 100)
      {
        car = car + 1;
        amount = amount + 150;
        count = count + 1;
      }
      else
      {
        cout << "Parking is full" << endl;
      }
    }
    else if (u_input == 4)
    {
      if (count <= 100)
      {
        bus = bus + 1;
        amount = amount + 300;
        count = count + 1;
      }
      else
      {
        cout << "Parking is full" << endl;
      }
    }
    else if (u_input == 5)
    {
      cout <<"******************************************************************"<< endl;
      cout << "The total amount is: " << amount << endl;
      cout << "The total number of vehicles parked is: " << count << endl;
      cout << "The number of Bike parked is: " << bike << endl;
      cout << "The number of Auto rickshaw parked is: " << auto_rickshaw << endl;
      cout << "The number of Car parked is: " << car << endl;
      cout << "The number of Bus parked is: " << bus << endl;
      cout <<"******************************************************************"<< endl;

    }
    else if (u_input == 6)
    {
      amount = 0;
      count = 0;
      bike = 0;
      auto_rickshaw = 0;
      car = 0;
      bus = 0;
      cout <<"******************************************************************"<< endl;
      cout << "The record has been deleted" << endl;
      cout <<"******************************************************************"<< endl;

    }
    else
    {
      cout << "Invalid input" << endl;
    }
  }
  return 0;
}