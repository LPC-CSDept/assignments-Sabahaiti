#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declear the caraible
    int menu;
    double area;
    double radius;
    double length;
    double width;
    double base;
    double height;

    double π = 3.14159; //for the circle equation pi

    const int Circle_menu = 1;
    const int Rectangle_menu = 2;
    const int Triangle_menu = 3;
    const int Quit_menu = 4;

    // print the menu
    cout << "Menu \n";
    cout <<"Area of Circle \n";
    cout << "Area of Rectangle \n ";
    cout <<" Area pf Triangle \n";
    cout <<"Quit \n";
    cin >> menu;

    switch(menu)
       {
           // to find the area of the circle
           case 1:
           cout <<"radius of the circle : \n";
           cin >> radius;
         
        if (radius < 0)
          {
             cout << "Enter the radius one more time : \n" ;

          }
        area = π * radius * radius;
        cout <<" Circle area is equal to " << area <<endl;
        break;

        // for the rectangle
            case 2:
            cout << "length of the rectangle : \n";
            cin >> length;

        if (length < 0)
            {
                cout << "Enter length one more time : \n";
                cin >> length;
            }

            cout <<"width of the rectangle : \n";
            cin >> width;
        if (width <0)
            {
                cout << " Enter width one more time : \n ";
                cin >> width;
            }
        area = length * width;
        cout << " Rectangle area is equal to" <<area <<endl;
        break;

            //for the triangle base and height and area
            case 3:
            cout <<"base of the Triangle : \n";
            cin >> base;
        
        if (base <0)
            {
                cout <<"Enter base one more time : \n";
                cin >> base;
            }
            cout <<"height of the Triangle : \n";
            cin >> height;
        if (height <0)
            {
                cout <<"Enter height one more time : \n";
                cin >> height;

            }
        area = base * height * 0.5;
        cout <<"Triangle area is qual to " << area << endl;
        break;

            case 4:
            cout <<"The menu quit :\n";
            break;

            default:
            cout <<"wrong menu item :\n";

       }











}