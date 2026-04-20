// Include Library
#include <iostream>
#include <fstream>
#include <windows.h>

// Clear screen
#include <stdlib.h>

// Call Function from Header File.
#include "Header_Function.h"

using namespace std;

int main()
{
    int option;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "  => Welcome to the Student Information Management System for 2nd year students in GTR, AMS and GIC departments. <= " << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    do
    {
        cout << endl;
        cout << "\t ------------------------------------------------------------------------------------- " << endl;
        cout << "\t  ==================== ***** STUDENT INFORMATION MANAGEMENT **** ==================== " << endl;
        cout << "\t ------------------------------------------------------------------------------------- " << endl;
        Sleep(150);
        // Display Menu.
        cout << "\t\t\t =================== *** MENU *** ==================== " << endl;
        cout << "\t\t\t\t [1] - REGISTER NEW STUDENT." << endl;
        Sleep(100);
        cout << "\t\t\t\t [2] - SHOW ALL STUDENTS." << endl;
        Sleep(100);
        cout << "\t\t\t\t [3] - SEARCH BY ID." << endl;
        Sleep(100);
        cout << "\t\t\t\t [4] - DELETE STUDENT." << endl;
        Sleep(100);
        cout << "\t\t\t\t [5] - UPDATE STUDENT." << endl;
        Sleep(100);
        cout << "\t\t\t\t [0] - EXIT PROGRAM ............" << endl;
        Sleep(100);
        cout << "\t\t\t ----------------------------------------------------- " << endl
             << endl;

        // Enter option.
        cout << "\t\t\t Please enter your options [0 -> 5]: ";
        cin >> option;
        cout << "\t\t\t -------------------------------------- " << endl;

        switch (option)
        {
        // Add new student information to txt file.
        case 1:
        {

            system("CLS");
            cout << endl
                 << endl;
            cout << "\t ------------------------------------------------------------------------------------- " << endl;
            cout << "\t   ==================== ***** ADD NEW STUDENT INFORMATION ***** ==================== " << endl;
            cout << "\t ------------------------------------------------------------------------------------- " << endl
                 << endl;

            // Call Function.
            register_new_student();
            cout << "\t\t\t      Do you want to continue the operation or end ?" << endl;
            cout << "\t\t\t   Please enter [1] to continue and enter [0] to stop:   ";
            cin >> option;

            if (option == 1)
            {
                system("CLS");
            }
            else
            {
                cout << "Exit Program.........." << endl;
                break;
            }
            break;
        }

        // Display all student information from txt file on the console tab.
        case 2:
        {

            system("CLS");
            cout << endl
                 << endl;
            cout << "\t ------------------------------------------------------------------------------------- " << endl;
            cout << "\t   ==================== ***** DISPLAY ALL STUDENT INFORMATION ***** ================ " << endl;
            cout << "\t ------------------------------------------------------------------------------------- " << endl
                 << endl;
            display_all_information();
            cout << "\t\t\t\t       Do you want to continue the operation or end ?" << endl;
            cout << "\t\t\t\t    Please enter [1] to continue and enter [0] to stop:   ";
            cin >> option;

            if (option == 1)
            {
                system("CLS");
            }
            else
            {
                cout << "Exit Program.........." << endl;
                break;
            }
            break;
        }

        // Search for student information from the txt file by entering the Department name and Student ID to display.
        case 3:
        {
            system("CLS");
            cout << endl
                 << endl;
            cout << "\t --------------------------------------------------------------------------------------- " << endl;
            cout << "\t   ========================= ***** SEARCH INFORMATION ****** ========================= " << endl;
            cout << "\t --------------------------------------------------------------------------------------- " << endl
                 << endl;

            search_information();
            cout << "\t\t\t       Do you want to continue the operation or end ?" << endl;
            cout << "\t\t\t    Please enter [1] to continue and enter [0] to stop:   ";
            cin >> option;

            if (option == 1)
            {
                system("CLS");
            }
            else
            {
                cout << "Exit Program.........." << endl;
                break;
            }
            break;
        }

        // delete student
        case 4:
        {
            system("CLS");
            cout << endl
                 << endl;
            cout << "\t --------------------------------------------------------------------------------------- " << endl;
            cout << "\t   ========================= ***** DELETE STUDENT INFORMATION ****** ========================= " << endl;
            cout << "\t --------------------------------------------------------------------------------------- " << endl
                 << endl;

            deleteStudentByID();
            cout << "\t\t\t       Do you want to continue the operation or end ?" << endl;
            cout << "\t\t\t    Please enter [1] to continue and enter [0] to stop:   ";
            cin >> option;

            if (option == 1)
            {
                system("CLS");
            }
            else
            {
                cout << "Exit Program.........." << endl;
                break;
            }
            break;
        }

        case 5:
        {
            system("CLS");
            cout << endl
                 << endl;
            cout << "\t --------------------------------------------------------------------------------------- " << endl;
            cout << "\t   ========================= ***** UPDATE STUDENT INFORMATION ****** ========================= " << endl;
            cout << "\t --------------------------------------------------------------------------------------- " << endl
                 << endl;

            update_information();
            cout << "\t\t\t       Do you want to continue the operation or end ?" << endl;
            cout << "\t\t\t    Please enter [1] to continue and enter [0] to stop:   ";
            cin >> option;

            if (option == 1)
            {
                system("CLS");
            }
            else
            {
                cout << "Exit Program.........." << endl;
                break;
            }
            break;
        }

        case 0:
        {
            // Exit program.
            cout << "EXIT PROGRAM........." << endl;
            break;
        }

        default:
        {
            // Condition to show the user when entering the wrong option.
            cout << "\t\t\tPlease enter a value option [0-4]." << endl;

            break;
        }
        }

    } while (option != 0);

    return 0;
}
