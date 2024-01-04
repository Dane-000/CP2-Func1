
#include <iostream>

int main();

int MainMenu();
int Addition(); 
int Subtraction();
int Multiplication();
int Division(); 

int main()
{
    int val1, val2, choice;
    char continueChoice = 'y';

    do
    {
        do
        {
            switch (choice)
            {
            case 1:
                Addition();
                break;
            case 2:
                Subtraction();
                break;
            case 3:
                Multiplication();
                break;
            case 4:
                Division();
                break; 

            default:
                std::cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        std::cout << "Do you want to Contninue [y/n]:";
        std::cin >> continueChoice;

        std::system("cls");

    } while (continueChoice == 'y');
}

int MainMenu()
{    
    int val1, val2;
    int choice;
      std::cout
                << "***Please Select for Math Solution to use ***\n"
                << "1 Add\n"
                << "2 Subtraction\n"
                << "3 Multiplcation\n"
                << "4 Division\n" 
                << "\n"
                << "Enter Choice: ";
            std::cin >> choice;

            std::system("cls"); 

            return choice;
             
}

int Addition()
{  
    int val1, val2;
    int choice;
         std::cout << "Please input value 1:";
         std::cin >> val1;
         std::cout << "Please input value 2:";
         std::cin >> val2;
         std::cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
          
         
}

int Subtraction()
{ 
    int val1, val2;
    std::cout << "Please input value 1:";
    std::cin >> val1;
    std::cout << "Please input value 2:";
    std::cin >> val2;
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
}

int Multiplication()
{ 
    int val1, val2;
    std::cout << "Please input value 1:";
    std::cin >> val1;
    std::cout << "Please input value 2:";
    std::cin >> val2;
    std::cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
}

int Division()
{ 
    int val1, val2;
    std::cout << "Please input value 1:";
    std::cin >> val1;
    std::cout << "Please input value 2:";
    std::cin >> val2;
    std::cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
}


