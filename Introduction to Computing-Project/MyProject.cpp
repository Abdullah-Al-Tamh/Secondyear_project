#include <iostream>

using namespace std;

int main()
{
    // initialize the default True for start the program:
    bool started = true;
    int chooseProgram;

    // Program 1 Variables:
    int firstNumber, opera, secondNumber, Result, Quistion;

    // Program 2 Variables:
    int numberOfInput;

    // Program 3 Variables:
    const int MAX_RECORDS = 100;
    int serialNumbers[MAX_RECORDS];
    string customer_Names[MAX_RECORDS];
    string customer_Seat[MAX_RECORDS];
    string confirmation;
    int record_count = 0;
    int serial_Update;
    int serial_Delete;
    int index_Update = -1;
    int index_Delete = -1;

    //Visited Reports:
    int visitorCalcultorCount = 0;
    int visitorTrueAndFalseCount = 0;
    int visitorStadiumCount = 0;
    int visitorAboutUSCount = 0;

    while (started)
    {
        cout << "\n";
        cout << "\n";
        cout << "\n===== Main Menu =====\n";
        cout << "Enter program number:" << endl;
        cout << "[1] Calcultor Program." << endl;
        cout << "[2] True or False Possibility Program." << endl;
        cout << "[3] The Stadium program." << endl;
        cout << "[4] About Us." << endl;
        cout << "[5] Exit" << endl;
        cout << "Select program number: ";
        cin >> chooseProgram;


        if (chooseProgram == 1)
        {
            visitorCalcultorCount++;
            cout << "\n";
            cout << "\n===== Calcultor =====\n";
            cout << "\n";
            cout << "Enter the first number: ";
            cin >> firstNumber;

            cout << "Enter the number for operation: \n";
            cout << "[1] Multiply\n";
            cout << "[2] Add\n";
            cout << "[3] Subtract\n";
            cout << "[4] Divide\n";
            cin >> opera;

            cout << "Enter the second number: ";
            cin >> secondNumber;

            if (opera == 1)
            {
                Result = firstNumber * secondNumber;
                cout << "Result: " << Result << endl;
                cout << "\n";
                cout << "\n";
            }
            else if (opera == 2)
            {
                Result = firstNumber + secondNumber;
                cout << "Result: " << Result << endl;
                cout << "\n";
                cout << "\n";
            }
            else if (opera == 3)
            {
                Result = firstNumber - secondNumber;
                cout << "Result: " << Result << endl;
                cout << "\n";
                cout << "\n";
            }
            else if (opera == 4)
            {
                if (secondNumber == 0)
                {
                    cout << "Error: Division by zero\n";
                    cout << "\n";
                    cout << "\n";
                }
                else
                {
                    Result = firstNumber / secondNumber;
                    cout << "Result: " << Result << endl;
                    cout << "\n";
                    cout << "\n";
                }
            }

            else
            {
                cout << "Invalid choice. Please enter a valid option.\n";
            }

            
            cout << "Do you want return to the main menu? OR Exit? " << endl;
            cout << "[1] return\n";
            cout << "[2] Exit\n";
            cin >> Quistion;
            if (Quistion == 1)
            {
                continue;
            }
            else if (Quistion == 2)
            {
                cout << "Thank you and we wishing a great day for you" << endl;
                cout<< "\n";
                cout << "You have visited the Calculator Program: " << visitorCalcultorCount << " Times." << endl;
                cout<< "\n";
                cout << "You have visited the True And False Program: " << visitorTrueAndFalseCount << " Times." << endl;
                cout << "\n";
                cout << "You have visited the Stadium Booking System: " << visitorStadiumCount << " Times." << endl;
                cout<< "\n";
                cout << "You have visited About As Section: " << visitorAboutUSCount << " Times." << endl;
                cout<< "\n";
                exit(0);
            }
            else
            {
                cout << "Invalid choice." << endl;
            }
        }


        else if (chooseProgram == 2)
        {
            visitorTrueAndFalseCount++;
            cout << "\n";
            cout << "\n";
            cout << "\n===== True or False Possibilities =====\n";
            cout << "Please choose one of them." << endl;
            cout << "1- [2] possibilities" << endl;
            cout << "2- [3] possibilities" << endl;
            cout << "Select the number: ";
            cin >> numberOfInput;

            if (numberOfInput == 1)
            {
                cout << "possibilities of [AND]: " << endl;
                cout << "\n";
                cout << "[1] True AND True = True" << endl;
                cout << "[2] True AND False = False" << endl;
                cout << "[3] False AND True = False" << endl;
                cout << "[4] False AND False = False" << endl;
                cout << "\n";
                cout << "possibilities of [OR]: " << endl;
                cout << "\n";
                cout << "[1] True OR True = True" << endl;
                cout << "[2] True OR False = True" << endl;
                cout << "[3] False OR True = True" << endl;
                cout << "[4] False OR False = False" << endl;
                cout << "\n";
                cout << "\n";
            }
            else if (numberOfInput == 2)
            {
                cout << "possibilities of [AND]: " << endl;
                cout << "\n";
                cout << "[1] True AND True AND True = True" << endl;
                cout << "[2] True AND True AND False = False" << endl;
                cout << "[3] True AND False AND True = False" << endl;
                cout << "[4] False AND True AND True = False" << endl;
                cout << "[5] False AND False AND False = False" << endl;
                cout << "[6] False AND False AND True = False" << endl;
                cout << "[7] False AND True AND False = False" << endl;
                cout << "[8] True AND False AND False = False" << endl;
                cout << "\n";
                cout << "possibilities of [OR]: " << endl;
                cout << "\n";
                cout << "[1] True OR True OR True = True" << endl;
                cout << "[2] True OR True OR False = True" << endl;
                cout << "[3] True OR False OR True = True" << endl;
                cout << "[4] False OR True OR True = True" << endl;
                cout << "[5] False OR False OR False = False" << endl;
                cout << "[6] False OR False OR True = True" << endl;
                cout << "[7] False OR True OR False = True" << endl;
                cout << "[8] True OR False OR False = True" << endl;
                cout << "\n";
                cout << "\n";
            }
            else
            {
                cout << "ERROR: Unknown input type" << endl;
                cout << "Try Again!" << endl;
                cout << "\n";
                cout << "\n";
            }

            
            cout << "Do you want to return to the main menu? OR Exit? " << endl;
            cout << "[1] return\n";
            cout << "[2] Exit\n";
            cin >> Quistion;

            if (Quistion == 1)
            {
                continue;
            }
            else if (Quistion == 2)
            {
                cout << "Thank you and we wishing a great day for you" << endl;
                cout<< "\n";
                cout << "You have visited the Calculator Program: " << visitorCalcultorCount << " Times." << endl;
                cout<< "\n";
                cout << "You have visited the True And False Program: " << visitorTrueAndFalseCount << " Times." << endl;
                cout << "\n";
                cout << "You have visited the Stadium Booking System: " << visitorStadiumCount << " Times." << endl;
                cout<< "\n";
                cout << "You have visited About As Section: " << visitorAboutUSCount << " Times." << endl;
                cout<< "\n";
                exit(0);
            }
        }


        else if(chooseProgram == 3)
        {
            visitorStadiumCount++;
            cout << "\n===== Stadium Booking System =====\n";
            while (true) {
                cout << "\nStadium Booking System Menu:" << endl;
                cout << "1. Display records" << endl;
                cout << "2. Add record" << endl;
                cout << "3. Delete record" << endl;
                cout << "4. Update record" << endl;
                cout << "5. Exit" << endl;

                int choice;
                cout << "Enter your choice (1-5): ";
                cin >> choice;

                if (choice == 1) {
                    for (int i = 0; i < record_count; ++i)
                    {
                        cout << serialNumbers[i] << " " << customer_Names[i] << " " << customer_Seat[i] << endl;
                    }
                }

                else if (choice == 2)
                {
                    serialNumbers[record_count] = record_count + 1; 
                    cout << "Enter customer name: ";
                    cin >> customer_Names[record_count];
                    cout << "Enter seat number: ";
                    cin >> customer_Seat[record_count];
                    record_count++;
                }

                else if (choice == 3)
                {
            
                    cout << "Enter the serial number to delete: ";
                    cin >> serial_Delete;

            
                    for (int i = 0; i < record_count; ++i)
                    {
                        if (serialNumbers[i] == serial_Delete)
                        {
                        index_Delete = i;
                        break;
                        }
                    }

                    if (index_Delete != -1)
                    {
                        cout << "Are you sure you want to delete record " << serial_Delete << "? (Yes/No): ";
                
                        cin >> confirmation;

                        if (confirmation == "Yes" || confirmation == "yes")
                        {
                            for (int i = index_Delete ; i < record_count - 1; ++i)
                            {
                                serialNumbers[i] = serialNumbers[i + 1];
                                customer_Names[i] = customer_Names[i + 1];
                                customer_Seat[i] = customer_Seat[i + 1];
                            }
                            record_count--;
                            cout << "Record " << serial_Delete << " deleted." << endl;
                        }
                        else
                        {
                            cout << "Deletion canceled." << endl;
                        }
                    }

                    else
                    {
                        cout << "Record not found." << endl;
                    }

                }

                else if (choice == 4)
                {
            
                    cout << "Enter the serial number to update: ";
                    cin >> serial_Update;

            
                    for (int i = 0; i < record_count; ++i)
                    {
                        if (serialNumbers[i] == serial_Update)
                        {
                        index_Update = i;
                        break;
                        }
                    }

                    if (index_Update != -1) {
                    cout << "Enter the new customer name: ";
                    cin >> customer_Names[index_Update];
                    cout << "Enter the new seat number: ";
                    cin >> customer_Seat[index_Update];
                    cout << "Record " << serial_Update << " updated:" << endl;
                    cout << serial_Update << " " << customer_Names[index_Update] << " " << customer_Seat[index_Update] << endl;
                    }

                    else
                    {
                        cout << "Record not found." << endl;
                    }
                }

                else if (choice == 5)
                {
                    int QuistionForThirdPRogram;
                    cout << "Do you want to return to the main menu? OR Exit? " << endl;
                    cout << "[1] return\n";
                    cout << "[2] Exit\n";
                    cin >> QuistionForThirdPRogram;
                    if(QuistionForThirdPRogram == 1)
                    {
                        break;
                    }
                    else if(QuistionForThirdPRogram == 2)
                    {
                        cout << "Thank you and we wishing a great day for you" << endl;
                        cout << "Error: Invalid number of input, Goodbye!.\n";
                        cout<< "\n";
                        cout << "You have visited the Calculator Program: " << visitorCalcultorCount << " Times." << endl;
                        cout<< "\n";
                        cout << "You have visited the True And False Program: " << visitorTrueAndFalseCount << " Times." << endl;
                        cout << "\n";
                        cout << "You have visited the Stadium Booking System: " << visitorStadiumCount << " Times." << endl;
                        cout<< "\n";
                        cout << "You have visited About As Section: " << visitorAboutUSCount << " Times." << endl;
                        cout<< "\n";
                        exit(0);
                    }
                    else
                    {
                        cout << "Error: Invalid number of input, Goodbye!.\n";
                        cout<< "\n";
                        cout << "You have visited the Calculator Program: " << visitorCalcultorCount << " Times." << endl;
                        cout<< "\n";
                        cout << "You have visited the True And False Program: " << visitorTrueAndFalseCount << " Times." << endl;
                        cout << "\n";
                        cout << "You have visited the Stadium Booking System: " << visitorStadiumCount << " Times." << endl;
                        cout<< "\n";
                        cout << "You have visited About As Section: " << visitorAboutUSCount << " Times." << endl;
                        cout<< "\n";
                        exit(0);
                    }
                }

                else
                {
                    cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
                }

            }
        }
        else if (chooseProgram == 4)
        {
            visitorAboutUSCount++;
            cout << "\n===== About Us =====\n";
            cout << "--------------- Introduction to Computing ---------------" << endl;
            cout << "Group Members:\n";
            cout << "================" << endl;
            cout << "\n";
            cout << "Abdullah Ahmed Altamh || ID: 223********" << endl;
            cout << "\n";

        }
        else if (chooseProgram == 5)
            {
                cout << "Thank you and we wishing a great day for you" << endl;
                cout << "Error: Invalid number of input, Goodbye!.\n";
                cout<< "\n";
                cout << "You have visited the Calculator Program: " << visitorCalcultorCount << " Times." << endl;
                cout<< "\n";
                cout << "You have visited the True And False Program: " << visitorTrueAndFalseCount << " Times." << endl;
                cout << "\n";
                cout << "You have visited the Stadium Booking System: " << visitorStadiumCount << " Times." << endl;
                cout<< "\n";
                cout << "You have visited About As Section: " << visitorAboutUSCount << " Times." << endl;
                cout<< "\n";
                started = false;
            }
    }
    return 0;
}