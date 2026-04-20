#ifndef HEADER_FUNCTION_H_INCLUDED
#define HEADER_FUNCTION_H_INCLUDED

#include <iostream>
#include <fstream>
#include <windows.h>

// For clear screen
#include <stdlib.h>
#include <string>

using namespace std;

// Declare student characteristics
struct Student
{
    string id;
    string first_name;
    string last_name;
    string gender;
    string date_to_birth;
    string department;
    int year_of_student;
    string email_address;
    string phone_number;
};

// Array structure
struct Student student[100];

// Function for add new student information.
void register_new_student()
{

    // Enter the amount of students you want to enter.
    int number_of_student;

    cout << "\t\t\t\t     Enter number of students: ";
    cin >> number_of_student;
    cout << "\t\t\t\t  ----------------------------------" << endl
         << endl;

    cout << "\t\t =============== [ Please enter student information ] ===============" << endl;
    cout << "\t ------------------------------------------------------------------------------------ " << endl;

    // Enter information.
    for (int i = 0; i < number_of_student; i++)
    {
        cout << "\t\t\t =============== *** STUDNET [ " << i + 1 << " ] *** =============== " << endl;
        cout << "\t\t\t\t Student ID:   ";
        cin >> student[i].id;
        cout << "\t\t\t\t Student's first name: ";
        cin >> student[i].first_name;
        cout << "\t\t\t\t Student's last name:  ";
        cin >> student[i].last_name;
        cout << "\t\t\t\t Student gender:   ";
        cin >> student[i].gender;
        cout << "\t\t\t\t Date to birth:    ";
        cin >> student[i].date_to_birth;
        cout << "\t\t\t\t Department:   ";
        cin >> student[i].department;
        cout << "\t\t\t\t Year of student:  ";
        cin >> student[i].year_of_student;
        cout << "\t\t\t\t Email address:  ";
        cin >> student[i].email_address;
        cout << "\t\t\t\t Phone number:   ";
        cin >> student[i].phone_number;
        cout << "\t\t ---------------------------------------------------------------------" << endl;
    }

    cout << "\t\t ---------------------------- [ Success ] ----------------------------" << endl
         << endl;

    // Insert Data into File
    ofstream student_file;

    for (int i = 0; i < number_of_student; i++)
    {

        if (student[i].department == "GTR")
        { // If Department GTR must enter data in Department GTR

            student_file.open("I2-GTR.txt", ios::app);
            student_file << student[i].id << "\t" << student[i].first_name << " " << student[i].last_name << "\t\t" << student[i].gender << "\t\t" << student[i].date_to_birth << "\t\t"
                         << student[i].department << "\t\t" << student[i].year_of_student << "\t" << student[i].email_address << "\t" << student[i].phone_number << endl;
            student_file.close();
        }
        else if (student[i].department == "AMS")
        { // If Department AMS must enter data in Department AMS

            student_file.open("I2-AMS.txt", ios::app);
            student_file << student[i].id << "\t" << student[i].first_name << " " << student[i].last_name << "\t\t" << student[i].gender << "\t\t" << student[i].date_to_birth << "\t\t"
                         << student[i].department << "\t" << student[i].year_of_student << "\t" << student[i].email_address << "\t\t" << student[i].phone_number << endl;
            student_file.close();
        }
        else if (student[i].department == "GIC")
        { // If Department GIC must enter data in Department GIC

            student_file.open("I2-GIC.txt", ios::app);
            student_file << student[i].id << "\t" << student[i].first_name << " " << student[i].last_name << "\t\t" << student[i].gender << "\t\t" << student[i].date_to_birth << "\t\t"
                         << student[i].department << "\t" << student[i].year_of_student << "\t" << student[i].email_address << "\t\t" << student[i].phone_number << endl;
            student_file.close();
        }
    }
}

// Display all information.
void display_all_information()
{

    int option;
    string line;
    fstream read_file;

    while (1)
    {

        Sleep(100);
        // Option.
        cout << "\t\t -------------------------[ OPTION ] ---------------------------" << endl;
        cout << "\t\t\t [1] - Show all student information from department GTR. " << endl;
        Sleep(100);
        cout << "\t\t\t [2] - Show all student information from department AMS. " << endl;
        Sleep(100);
        cout << "\t\t\t [3] - Show all student information from department GIC. " << endl;
        Sleep(100);
        cout << "\t\t ---------------------------------------------------------------" << endl;
        Sleep(100);

        // Enter options to display

        cout << "\t\t\t Please enter your option: ";
        cin >> option;

        if (option == 1)
        { // If Option 1 is equal, the data in the GTR Department must be displayed.

            system("CLS");
            cout << endl;
            cout << "\t\t ------------------------------------------------------------------------------------------ " << endl;
            cout << "\t\t  ================================== [ DEPARTMENT GTR ] ================================== " << endl;
            cout << "\t\t ------------------------------------------------------------------------------------------ " << endl;
            cout << "\t\t\t\t\t\t --------------------------" << endl;

            // Open file for reading.
            read_file.open("I2-GTR.txt", ios::in);

            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "STUDNET ID \tSTUDENT NAME \t\tGENDER \t\tDATE TO BIRTH \t\tDEPARTMENT \tYEAR \tEMAIAL ADDRESS \t\t\t PHONE NUMBER" << endl;
            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

            // Read data using While loop
            while (getline(read_file, line))
            {

                cout << line << endl;
                Sleep(200);
            }

            read_file.close();
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            break;
        }
        else if (option == 2)
        { // If Option 2 is equal, the data in the AMS Department must be displayed.

            system("CLS");
            cout << endl;
            cout << "\t\t ------------------------------------------------------------------------------------------ " << endl;
            cout << "\t\t  ================================== [ DEPARTMENT AMS ] ================================== " << endl;
            cout << "\t\t ------------------------------------------------------------------------------------------ " << endl;
            cout << "\t\t\t\t\t\t --------------------------" << endl;

            // Open file for reading.
            read_file.open("I2-AMS.txt", ios::in);

            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "STUDNET ID \tSTUDENT NAME \t\tGENDER \t\tDATE TO BIRTH \t\tDEPARTMENT \tYEAR \tEMAIAL ADDRESS \t\t\t PHONE NUMBER" << endl;
            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

            // Read data using While loop
            while (getline(read_file, line))
            {

                cout << line << endl;
                Sleep(200);
            }

            read_file.close();
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            break;
        }
        else if (option == 3)
        { // If Option 13is equal, the data in the GIC Department must be displayed.

            system("CLS");
            cout << endl;
            cout << "\t\t ------------------------------------------------------------------------------------------ " << endl;
            cout << "\t\t  ================================== [ DEPARTMENT GIC ] ================================== " << endl;
            cout << "\t\t ------------------------------------------------------------------------------------------ " << endl;
            cout << "\t\t\t\t\t\t --------------------------" << endl;

            // Open file for reading.
            read_file.open("I2-GIC.txt", ios::in);

            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "STUDNET ID \tSTUDENT NAME \t\tGENDER \t\tDATE TO BIRTH \t\tDEPARTMENT \tYEAR \tEMAIAL ADDRESS \t\t\t PHONE NUMBER" << endl;
            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

            // Read data using While loop
            while (getline(read_file, line))
            {

                cout << line << endl;
                Sleep(200);
            }

            read_file.close();
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            break;
        }
        else
        {

            cout << "\t\t----------------[ department you entered is invalid. Please re-enter. ]----------------" << endl
                 << endl;
        }
    }
}

// Search student information.
void search_information()
{

    int option;
    string student_id;
    int i = 0;
    fstream search_data;

    while (1)
    {

        Sleep(100);
        // Option.
        cout << "\t\t -------------------------[ OPTION ] ---------------------------" << endl;
        cout << "\t\t\t [1] - Find student information from department GTR. " << endl;
        Sleep(100);
        cout << "\t\t\t [2] - Find student information from department AMS. " << endl;
        Sleep(100);
        cout << "\t\t\t [3] - Find student information from department GIC. " << endl;
        Sleep(100);
        cout << "\t\t ---------------------------------------------------------------" << endl;
        Sleep(100);

        // Enter options to display
        cout << "\t\t\t Please enter your option: ";
        cin >> option;
        cout << endl;

        if (option == 1)
        {

            cout << "\t\t---------- [ The data you are looking for is in GTR department ] -----------" << endl
                 << endl;

            // Enter student ID to show
            cout << "\t\t\t\t Please enter student id:  ";
            cin >> student_id;
            cout << endl;

            search_data.open("I2-GTR.txt", ios::in);

            while (search_data >> student[i].id >> student[i].first_name >> student[i].last_name >> student[i].gender >> student[i].date_to_birth >> student[i].department >> student[i].year_of_student >> student[i].email_address >> student[i].phone_number)
            {

                if (student[i].id == student_id)
                {

                    cout << "\t\t ------------------------ [ SEARCHING INFORMATION ] -----------------------" << endl;
                    cout << "\t\t\t Student ID:    " << student[i].id << endl;
                    Sleep(100);
                    cout << "\t\t\t Student Name:    " << student[i].first_name << " " << student[i].last_name << endl;
                    Sleep(100);
                    cout << "\t\t\t Gender:    " << student[i].gender << endl;
                    Sleep(100);
                    cout << "\t\t\t Date to birth:    " << student[i].date_to_birth << endl;
                    Sleep(100);
                    cout << "\t\t\t Department:    " << student[i].department << endl;
                    Sleep(100);
                    cout << "\t\t\t Year of student:    " << student[i].year_of_student << endl;
                    Sleep(100);
                    cout << "\t\t\t Email address:    " << student[i].email_address << endl;
                    Sleep(100);
                    cout << "\t\t\t Phone number:    " << student[i].phone_number << endl;
                    Sleep(100);
                    cout << "\t\t ---------------------------------------------------------------------------" << endl;
                    break;
                }
                i++;
            }

            search_data.close();
            break;
        }
        else if (option == 2)
        {

            cout << "\t\t---------- [ The data you are looking for is in AMS department ] -----------" << endl
                 << endl;

            // Enter student ID to show
            cout << "\t\t\t\t Please enter student id:  ";
            cin >> student_id;
            cout << endl;

            search_data.open("I2-AMS.txt", ios::in);

            while (search_data >> student[i].id >> student[i].first_name >> student[i].last_name >> student[i].gender >> student[i].date_to_birth >> student[i].department >> student[i].year_of_student >> student[i].email_address >> student[i].phone_number)
            {

                if (student[i].id == student_id)
                {

                    cout << "\t\t ----------------------- [ SEARCHING INFORMATION ] -----------------------" << endl;
                    cout << "\t\t\t Student ID:    " << student[i].id << endl;
                    Sleep(100);
                    cout << "\t\t\t Student Name:    " << student[i].first_name << " " << student[i].last_name << endl;
                    Sleep(100);
                    cout << "\t\t\t Gender:    " << student[i].gender << endl;
                    Sleep(100);
                    cout << "\t\t\t Date to birth:    " << student[i].date_to_birth << endl;
                    Sleep(100);
                    cout << "\t\t\t Department:    " << student[i].department << endl;
                    Sleep(100);
                    cout << "\t\t\t Year of student:    " << student[i].year_of_student << endl;
                    Sleep(100);
                    cout << "\t\t\t Email address:    " << student[i].email_address << endl;
                    Sleep(100);
                    cout << "\t\t\t Phone number:    " << student[i].phone_number << endl;
                    Sleep(100);
                    cout << "\t\t -------------------------------------------------------------------------" << endl;
                    break;
                }
                i++;
            }

            search_data.close();
            break;
        }
        else if (option == 3)
        {
            cout << "\t\t---------- [ The data you are looking for is in GIC department ] -----------" << endl
                 << endl;

            // Enter student ID to show
            cout << "\t\t\t\t Please enter student id:  ";
            cin >> student_id;
            cout << endl;

            search_data.open("I2-GIC.txt", ios::in);

            while (search_data >> student[i].id >> student[i].first_name >> student[i].last_name >> student[i].gender >> student[i].date_to_birth >> student[i].department >> student[i].year_of_student >> student[i].email_address >> student[i].phone_number)
            {

                if (student[i].id == student_id)
                {

                    cout << "\t\t ----------------------- [ SEARCHING INFORMATION ] -----------------------" << endl;
                    cout << "\t\t\t Student ID:    " << student[i].id << endl;
                    Sleep(100);
                    cout << "\t\t\t Student Name:    " << student[i].first_name << " " << student[i].last_name << endl;
                    Sleep(100);
                    cout << "\t\t\t Gender:    " << student[i].gender << endl;
                    Sleep(100);
                    cout << "\t\t\t Date to birth:    " << student[i].date_to_birth << endl;
                    Sleep(100);
                    cout << "\t\t\t Department:    " << student[i].department << endl;
                    Sleep(100);
                    cout << "\t\t\t Year of student:    " << student[i].year_of_student << endl;
                    Sleep(100);
                    cout << "\t\t\t Email address:    " << student[i].email_address << endl;
                    Sleep(100);
                    cout << "\t\t\t Phone number:    " << student[i].phone_number << endl;
                    Sleep(100);
                    cout << "\t\t -------------------------------------------------------------------------" << endl;
                    break;
                }
                i++;
            }

            search_data.close();
            break;
        }
        else
        {

            cout << "\t\t -------------------- [ Invalid selection, please re-enter ] --------------------" << endl
                 << endl;
        }
    }
}
void update_information()
{
    int option;
    string student_id;
    cout << "\t\t -------------------------[ OPTION ] ---------------------------" << endl;
    Sleep(100);
    cout << "\t\t\t [1] - Update student information from department GTR." << endl;
    Sleep(100);
    cout << "\t\t\t [2] - Update student information from department AMS." << endl;
    Sleep(100);
    cout << "\t\t\t [3] - Update student information from department GIC." << endl;
    Sleep(100);
    cout << "\t\t ---------------------------------------------------------------" << endl;

    cout << "\t\t\t Please enter your option: ";
    cin >> option;
    cout << endl;

    if (option == 1)
    {
        cout << "\t\t Enter Student ID to update: ";
        cin >> student_id;

        ifstream My_File("I2-GTR.txt");
        ofstream Temp_File("temp.txt");

        bool found = false;

        while (My_File >> student[0].id >> student[0].first_name >> student[0].last_name >> student[0].gender >> student[0].date_to_birth >> student[0].department >> student[0].year_of_student >> student[0].email_address >> student[0].phone_number)
        {

            if (student[0].id == student_id)
            {
                found = true;

                // Show information student before update
                cout << "\n\t\t ---------------------- Student Found. Enter New Information ----------------------\n";
                cout << "\t\t Student ID:    " << student[0].id << endl;
                Sleep(100);
                cout << "\t\t Student Name:    " << student[0].first_name << " " << student[0].last_name << endl;
                Sleep(100);
                cout << "\t\t Gender:    " << student[0].gender << endl;
                Sleep(100);
                cout << "\t\t Date to birth:    " << student[0].date_to_birth << endl;
                Sleep(100);
                cout << "\t\t Department:    " << student[0].department << endl;
                Sleep(100);
                cout << "\t\t Year of student:    " << student[0].year_of_student << endl;
                Sleep(100);
                cout << "\t\t Email address:    " << student[0].email_address << endl;
                Sleep(100);
                cout << "\t\t Phone number:    " << student[0].phone_number << endl;
                Sleep(100);
                cout << "\t\t ---------------------------------------------------------------------------" << endl;

                cout << "\n\t\t ---------------------- Student Found. Enter New Information ----------------------\n";

                cout << "\t\t Student ID:    ";
                cin >> student[0].id;

                cout << "\t\t First Name: ";
                cin >> student[0].first_name;

                cout << "\t\t Last Name: ";
                cin >> student[0].last_name;

                cout << "\t\t Gender: ";
                cin >> student[0].gender;

                cout << "\t\t Date of Birth: ";
                cin >> student[0].date_to_birth;

                cout << "\t\t Department: ";
                cin >> student[0].department;

                cout << "\t\t Year: ";
                cin >> student[0].year_of_student;

                cout << "\t\t Email: ";
                cin >> student[0].email_address;

                cout << "\t\t Phone: ";
                cin >> student[0].phone_number;
                cout << "\t\t ---------------------------------------------------------------------------" << endl;
            }

            Temp_File << student[0].id << "\t"
                      << student[0].first_name << " " << student[0].last_name << "\t\t"
                      << student[0].gender << "\t\t"
                      << student[0].date_to_birth << "\t\t"
                      << student[0].department << "\t\t"
                      << student[0].year_of_student << "\t"
                      << student[0].email_address << "\t"
                      << student[0].phone_number << endl;
        }

        My_File.close();
        Temp_File.close();

        remove("I2-GTR.txt");
        rename("temp.txt", "I2-GTR.txt");

        if (found)
            cout << "\n\t\t Student information updated successfully!\n";
        else
            cout << "\n\t\t Student ID not found!\n";
    }
    else if (option == 2)
    {
        cout << "\t\t Enter Student ID to update: ";
        cin >> student_id;

        ifstream My_File("I2-AMS.txt");
        ofstream Temp_File("temp.txt");

        bool found = false;

        while (My_File >> student[0].id >> student[0].first_name >> student[0].last_name >> student[0].gender >> student[0].date_to_birth >> student[0].department >> student[0].year_of_student >> student[0].email_address >> student[0].phone_number)
        {
            if (student[0].id == student_id)
            {
                found = true;

                // Show information student before update
                cout << "\n\t\t ---------------------- Student Found. Enter New Information ----------------------\n";
                cout << "\t\t Student ID:    " << student[0].id << endl;
                Sleep(100);
                cout << "\t\t Student Name:    " << student[0].first_name << " " << student[0].last_name << endl;
                Sleep(100);
                cout << "\t\t Gender:    " << student[0].gender << endl;
                Sleep(100);
                cout << "\t\t Date to birth:    " << student[0].date_to_birth << endl;
                Sleep(100);
                cout << "\t\t Department:    " << student[0].department << endl;
                Sleep(100);
                cout << "\t\t Year of student:    " << student[0].year_of_student << endl;
                Sleep(100);
                cout << "\t\t Email address:    " << student[0].email_address << endl;
                Sleep(100);
                cout << "\t\t Phone number:    " << student[0].phone_number << endl;
                Sleep(100);
                cout << "\t\t ---------------------------------------------------------------------------" << endl;

                cout << "\n\t\t ---------------------- Student Found. Enter New Information ----------------------\n";

                cout << "\t\t Student ID:    ";
                cin >> student[0].id;

                cout << "\t\t First Name: ";
                cin >> student[0].first_name;

                cout << "\t\t Last Name: ";
                cin >> student[0].last_name;

                cout << "\t\t Gender: ";
                cin >> student[0].gender;

                cout << "\t\t Date of Birth: ";
                cin >> student[0].date_to_birth;

                cout << "\t\t Department: ";
                cin >> student[0].department;

                cout << "\t\t Year: ";
                cin >> student[0].year_of_student;

                cout << "\t\t Email: ";
                cin >> student[0].email_address;

                cout << "\t\t Phone: ";
                cin >> student[0].phone_number;
                cout << "\t\t ---------------------------------------------------------------------------" << endl;
            }

            Temp_File << student[0].id << "\t"
                      << student[0].first_name << " " << student[0].last_name << "\t\t"
                      << student[0].gender << "\t\t"
                      << student[0].date_to_birth << "\t\t"
                      << student[0].department << "\t\t"
                      << student[0].year_of_student << "\t"
                      << student[0].email_address << "\t"
                      << student[0].phone_number << endl;
        }

        My_File.close();
        Temp_File.close();

        remove("I2-AMS.txt");
        rename("temp.txt", "I2-AMS.txt");

        if (found)
            cout << "\n\t\t Student information updated successfully!\n";
        else
            cout << "\n\t\t Student ID not found!\n";
    }
    else if (option == 3)
    {
        cout << "\t\t Enter Student ID to update: ";
        cin >> student_id;

        ifstream My_File("I2-GIC.txt");
        ofstream Temp_File("temp.txt");

        bool found = false;

        while (My_File >> student[0].id >> student[0].first_name >> student[0].last_name >> student[0].gender >> student[0].date_to_birth >> student[0].department >> student[0].year_of_student >> student[0].email_address >> student[0].phone_number)
        {
            if (student[0].id == student_id)
            {
                found = true;

                // Show information student before update
                cout << "\n\t\t ---------------------- Student Found. Enter New Information ----------------------\n";
                cout << "\t\t Student ID:    " << student[0].id << endl;
                Sleep(100);
                cout << "\t\t Student Name:    " << student[0].first_name << " " << student[0].last_name << endl;
                Sleep(100);
                cout << "\t\t Gender:    " << student[0].gender << endl;
                Sleep(100);
                cout << "\t\t Date to birth:    " << student[0].date_to_birth << endl;
                Sleep(100);
                cout << "\t\t Department:    " << student[0].department << endl;
                Sleep(100);
                cout << "\t\t Year of student:    " << student[0].year_of_student << endl;
                Sleep(100);
                cout << "\t\t Email address:    " << student[0].email_address << endl;
                Sleep(100);
                cout << "\t\t Phone number:    " << student[0].phone_number << endl;
                Sleep(100);
                cout << "\t\t ---------------------------------------------------------------------------" << endl;

                cout << "\n\t\t ---------------------- Student Found. Enter New Information ----------------------\n";

                cout << "\t\t Student ID:    ";
                cin >> student[0].id;

                cout << "\t\t First Name: ";
                cin >> student[0].first_name;

                cout << "\t\t Last Name: ";
                cin >> student[0].last_name;

                cout << "\t\t Gender: ";
                cin >> student[0].gender;

                cout << "\t\t Date of Birth: ";
                cin >> student[0].date_to_birth;

                cout << "\t\t Department: ";
                cin >> student[0].department;

                cout << "\t\t Year: ";
                cin >> student[0].year_of_student;

                cout << "\t\t Email: ";
                cin >> student[0].email_address;

                cout << "\t\t Phone: ";
                cin >> student[0].phone_number;
                cout << "\t\t ---------------------------------------------------------------------------" << endl;
            }
            Temp_File << student[0].id << "\t"
                      << student[0].first_name << " " << student[0].last_name << "\t\t"
                      << student[0].gender << "\t\t"
                      << student[0].date_to_birth << "\t\t"
                      << student[0].department << "\t\t"
                      << student[0].year_of_student << "\t"
                      << student[0].email_address << "\t"
                      << student[0].phone_number << endl;
        }
        My_File.close();
        Temp_File.close();

        remove("I2-GIC.txt");
        rename("temp.txt", "I2-GIC.txt");

        if (found)
            cout << "\n\t\t Student information updated successfully!\n";
        else
            cout << "\n\t\t Student ID not found!\n";
    }
}

// Delete student information.
void deleteStudentByID()
{
    string department_name;
    cout << "\t\t\t\t Enter the department of the student to delete (GTR, AMS, GIC): ";
    cin >> department_name;
    string delete_id;
    cout << "\t\t\t\t Enter the ID of the student to delete: ";
    cin >> delete_id;
    ifstream student_file("I2-" + department_name + ".txt");
    ofstream temp_file("temp.txt");

    string id, first, last, gender, dob, department, year, email, phone;

    while (student_file >> id >> first >> last >> gender >> dob >> department >> year >> email >> phone)
    {
        if (id != delete_id)
        {

            temp_file << id << "\t"
                      << first << " " << last << "\t\t"
                      << gender << "\t\t"
                      << dob << "\t\t"
                      << department << "\t\t"
                      << year << "\t"
                      << email << "\t"
                      << phone << endl;
        }
    }

    student_file.close();
    temp_file.close();

    remove(("I2-" + department_name + ".txt").c_str());             // delete old file
    rename("temp.txt", ("I2-" + department_name + ".txt").c_str()); // rename temp to original

    cout << "Student deleted successfully!" << endl;
}

#endif // HEADER_FUNCTION_H_INCLUDED
