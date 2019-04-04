// FinalProjectCII.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include "Employee.h"
#include "PartTime.h"
#include "FullTime.h"

void p_Time(int choice);

void f_Time(int choice);

void buildP_Employee(int choice2);

void view_P_Employee(int choice2);

void view_F_Employee(int choice3);

void build_F_Employee(int choice3);

using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main()
{
    //Part Time
    /*
    PartTime e (120.9, 21.67, 1);
    e.setID(1);
    e.setFirstName("Tommy");
    e.setLastName("Jones");
    e.setProject("Creating new Robots");
    e.setCompanyLength(12);
    e.setPosition("R & D");
    e.display(true);

    cout << "" << endl;

    FullTime f(120000.12, 1, true, true, false);
    f.setID(2);
    f.setFirstName("James");
    f.setLastName("Yason");
    f.setProject("Creating new Dashboards");
    f.setCompanyLength(2);
    f.setPosition("Programming");
    f.display(true);
    */
    int choice = 0;

    cout<<"   _____          _      ______ _   _ _____          _____  "<<endl;
    cout<<"  / ____|   /\\   | |    |  ____| \\ | |  __ \\   /\\   |  __ \\ "<<endl;
    cout<<" | |       /  \\  | |    | |__  |  \\| | |  | | /  \\  | |__) |"<<endl;
    cout<<" | |      / /\\ \\ | |    |  __| | . ` | |  | |/ /\\ \\ |  _  / "<<endl;
    cout<<" | |____ / ____ \\| |____| |____| |\\  | |__| / ____ \\| | \\ \\ "<<endl;
    cout<<"  \\_____/_/    \\_|______|______|_| \\_|_____/_/    \\_|_|  \\_\\"<<endl;

    cout << "--------------------------------------------------------------------- \n" << endl;
    cout << "Please pick one of the feature from the list: \n" << endl;
    cout << "1) would take you to the Part-Time employee page. \n" << endl;
    cout << "2) would take you to the Full-Time employee page. \n" << endl;
    cout << "3) EXIT" << endl;
    cout << "----------------------------------------------------------------------- \n" << endl;
    cout << "Pleae enter choice: ";
    cin >> choice;

    do{


        cin >> choice;

        switch(choice){

            case 1:{
                p_Time(choice);
                break;
            }

            case 2:{
                f_Time(choice);
                break;
            }

            case 3:{
                cout <<"Goodbye!!"<<endl;
                system("pause");
                break;
            }

            default:{
                cout<<"-------------------------------------------------------------------"<<endl;
                cout<<"Please pick a valid choice \a"<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
            }
        }

    }while(choice !=3);
    return 0;
}

void f_Time(int choice3) {

    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"______     _ _            _____ _                "<<endl;
    cout<<"|  ___|   | | |          |_   _(_)               "<<endl;
    cout<<"| |_ _   _| | |  ______    | |  _ _ __ ___   ___ "<<endl;
    cout<<"|  _| | | | | | |______|   | | | | '_ ` _ \\ / _ \\"<<endl;
    cout<<"| | | |_| | | |            | | | | | | | | |  __/"<<endl;
    cout<<"\\_|  \\__,_|_|_|            \\_/ |_|_| |_| |_|\\___|"<<endl;

    cout << "--------------------------------------------------------------------- \n" << endl;
    cout << "Please pick one of the feature from the list: \n" << endl;
    cout << "1) Build a Full - Time Employee \n" << endl;
    cout << "2) View Full - Time Employees \n" << endl;
    cout << "3) EXIT" << endl;
    cout << "----------------------------------------------------------------------- \n" << endl;
    cout << "Pleae enter choice: ";

    do{

        cin >> choice3;

        switch(choice3){
            case 1:{
                build_F_Employee(choice3);
                break;
            }
            case 2:{
                view_F_Employee(choice3);
                break;
            }
            case 3:{
                cout<<"Goodbye!!"<<endl;
            }
            default:{
                cout<<"-------------------------------------------------------------------"<<endl;
                cout<<"Please pick a valid choice \a"<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
            }
        }

    }while(choice3 !=3);


/*
    FullTime f(120000.12, 1, true, true, false);
    f.setID(2);
    f.setFirstName("James");
    f.setLastName("Yason");
    f.setProject("Creating new Dashboards");
    f.setCompanyLength(2);
    f.setPosition("Programming");
    f.display(true);
*/
}

void build_F_Employee(int choice3) {

    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"______       _ _     _    ___   ______     _ _   _____                _                            "<<endl;
    cout<<"| ___ \\     (_) |   | |  / _ \\  |  ___|   | | | |  ___|              | |                           "<<endl;
    cout<<"| |_/ /_   _ _| | __| | / /_\\ \\ | |_ _   _| | | | |__ _ __ ___  _ __ | | ___  _   _  ___  ___      "<<endl;
    cout<<"| ___ \\ | | | | |/ _` | |  _  | |  _| | | | | | |  __| '_ ` _ \\| '_ \\| |/ _ \\| | | |/ _ \\/ _ \\     "<<endl;
    cout<<"| |_/ / |_| | | | (_| | | | | | | | | |_| | | | | |__| | | | | | |_) | | (_) | |_| |  __/  __/     "<<endl;
    cout<<"\\____/ \\__,_|_|_|\\__,_| \\_| |_/ \\_|  \\__,_|_|_| \\____/_| |_| |_| .__/|_|\\___/ \\__, |\\___|\\___|     "<<endl;
    cout<<"                                                               | |             __/ |               "<<endl;
    cout<<"                                                               |_|            |___/                "<<endl;

}

void view_F_Employee(int choice3) {

    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<" _   _ _                  ___   ______     _ _   _____                _                            "<<endl;
    cout<<"| | | (_)                / _ \\  |  ___|   | | | |  ___|              | |                           "<<endl;
    cout<<"| | | |_  _____      __ / /_\\ \\ | |_ _   _| | | | |__ _ __ ___  _ __ | | ___  _   _  ___  ___      "<<endl;
    cout<<"| | | | |/ _ \\ \\ /\\ / / |  _  | |  _| | | | | | |  __| '_ ` _ \\| '_ \\| |/ _ \\| | | |/ _ \\/ _ \\     "<<endl;
    cout<<"\\ \\_/ / |  __/\\ V  V /  | | | | | | | |_| | | | | |__| | | | | | |_) | | (_) | |_| |  __/  __/     "<<endl;
    cout<<" \\___/|_|\\___| \\_/\\_/   \\_| |_/ \\_|  \\__,_|_|_| \\____/_| |_| |_| .__/|_|\\___/ \\__, |\\___|\\___|     "<<endl;
    cout<<"                                                               | |             __/ |               "<<endl;
    cout<<"                                                               |_|            |___/                "<<endl;

}


void p_Time(int choice2) {
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"______          _              _____ _                "<<endl;
    cout<<"| ___ \\        | |            |_   _(_)               "<<endl;
    cout<<"| |_/ /_ _ _ __| |_   ______    | |  _ _ __ ___   ___ "<<endl;
    cout<<"|  __/ _` | '__| __| |______|   | | | | '_ ` _ \\ / _ \\"<<endl;
    cout<<"| | | (_| | |  | |_             | | | | | | | | |  __/"<<endl;
    cout<<"\\_|  \\__,_|_|   \\__|            \\_/ |_|_| |_| |_|\\___|"<<endl;

    cout << "--------------------------------------------------------------------- \n" << endl;
    cout << "Please pick one of the feature from the list: \n" << endl;
    cout << "1) Build a Part - Time Employee \n" << endl;
    cout << "2) View Part - Time Employees \n" << endl;
    cout << "3) EXIT" << endl;
    cout << "----------------------------------------------------------------------- \n" << endl;
    cout << "Pleae enter choice: ";

    do{
        cin >> choice2;

        switch (choice2){
            case 1:{
                buildP_Employee(choice2);
                break;
            }
            case 2:{
                view_P_Employee(choice2);
                break;
            }
            case 3:{
                cout<<"Goodbye"<<endl;
                system("pause");
            }
            default:{
                cout<<"-------------------------------------------------------------------"<<endl;
                cout<<"Please pick a valid choice \a"<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
            }
        }

    }while(choice2 !=3);

/*
    PartTime e (120.9, 21.67, 1);
    e.setID(1);
    e.setFirstName("Tommy");
    e.setLastName("Jones");
    e.setProject("Creating new Robots");
    e.setCompanyLength(12);
    e.setPosition("R & D");
    e.display(true);
*/
}

void view_P_Employee(int choice2) {

    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<" _   _ _                  ___   ______          _     _____                _                       "<<endl;
    cout<<"| | | (_)                / _ \\  | ___ \\        | |   |  ___|              | |                      "<<endl;
    cout<<"| | | |_  _____      __ / /_\\ \\ | |_/ /_ _ _ __| |_  | |__ _ __ ___  _ __ | | ___  _   _  ___  ___ "<<endl;
    cout<<"| | | | |/ _ \\ \\ /\\ / / |  _  | |  __/ _` | '__| __| |  __| '_ ` _ \\| '_ \\| |/ _ \\| | | |/ _ \\/ _ \\"<<endl;
    cout<<"\\ \\_/ / |  __/\\ V  V /  | | | | | | | (_| | |  | |_  | |__| | | | | | |_) | | (_) | |_| |  __/  __/"<<endl;
    cout<<" \\___/|_|\\___| \\_/\\_/   \\_| |_/ \\_|  \\__,_|_|   \\__| \\____/_| |_| |_| .__/|_|\\___/ \\__, |\\___|\\___|"<<endl;
    cout<<"                                                                    | |             __/ |          "<<endl;
    cout<<"                                                                    |_|            |___/           "<<endl;



}

void buildP_Employee(int choice2) {

    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"______       _ _     _    ___   ______          _     _____                _                       "<<endl;
    cout<<"| ___ \\     (_) |   | |  / _ \\  | ___ \\        | |   |  ___|              | |                      "<<endl;
    cout<<"| |_/ /_   _ _| | __| | / /_\\ \\ | |_/ /_ _ _ __| |_  | |__ _ __ ___  _ __ | | ___  _   _  ___  ___ "<<endl;
    cout<<"| ___ \\ | | | | |/ _` | |  _  | |  __/ _` | '__| __| |  __| '_ ` _ \\| '_ \\| |/ _ \\| | | |/ _ \\/ _ \\"<<endl;
    cout<<"| |_/ / |_| | | | (_| | | | | | | | | (_| | |  | |_  | |__| | | | | | |_) | | (_) | |_| |  __/  __/"<<endl;
    cout<<"\\____/ \\__,_|_|_|\\__,_| \\_| |_/ \\_|  \\__,_|_|   \\__| \\____/_| |_| |_| .__/|_|\\___/ \\__, |\\___|\\___|"<<endl;
    cout<<"                                                                    | |             __/ |          "<<endl;
    cout<<"                                                                    |_|            |___/           "<<endl;



}

