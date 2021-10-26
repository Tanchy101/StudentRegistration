#include <iostream>

using namespace std;

int main()
{
     int grade, age;
   int mi;
   int fi;
   int ti;
   string name, birthday, gender;
   string address;
   std::string mfn;
   std::string mln;

   std::string ffn;
   std::string fln;

   cout << "Enter your name: ";
   getline(cin, name);
   cout << "Enter address: ";
   getline(cin, address);
   cout << "Enter birthdate: ";
   getline(cin, birthday);
   cout << "Enter gender: ";
   cin >> gender;
   cout << "Enter your age: ";
   cin >> age;

   std::cout << "Enter mother's first name: ";
   std::getline(std::cin,mfn);
   std:cout << "Enter mother's last name:" ;
   std::getline(std::cin,mln);
   std::cout << "Enter father's first name: " ;
   std::getline(std::cin,ffn);
   std::cout << "Enter father's last name: ";
   std::getline(std::cin,fln);





   cout << "Enter mother's income: ";
   cin >> mi;
   cout << "Enter father's income: ";
   cin >> fi;
   ti = mi + fi;
   if(ti <= 30000){
    cout << "You are qualified for the scholarship \n";
   }else {
   cout << "You're not qualified for the scholarship \n";
   }


   cout << "Hello!! " << name << "," " Enter your grade level: ";
   cin >> grade;
   cout << "Your schedule is down below. \n";


   switch(grade){
   case 1:
    cout << "Monday: Math 9am-10am, break time 10am-10:30am English 10:30am-11:30am, 11:30am-12:30pm Filipino\n";
    cout << "Wednesday: HEKASI 9am-10am, break time 10am-10:30am GMRC 10:30am-11:30am, 11:30am-12:30pm HE/TLE \n";
    cout << "Friday: Science 9am-10am, break time 10am-10:30am PE10:30am-11:30am, 11:30am-12:30pm Religion\n";
    break;
   case 2:
    cout << "Monday: HEKASI 9am-10am, break time 10am-10:30am PE 10:30am-11:30am 11:30am-12:30pm GMRC\n";
    cout << "Wednesday: Filipino 9am-10am, break time 10am-10:30am Math 10:30am-11:30am 11:30am-12:30pm English\n";
    cout << "Friday: Religion 9am-10am, break time 10am-10:30am HE/TLE 10:30am-11:30am 11:30am-12:30pm Science \n";
    break;
   case 3:
    cout << "Monday: Science 9am-10am, break time 10am-10:30am English 10:30am-11:30am 11:30am-12:30pm Filipino\n";
    cout << "Tuesday: GMRC 9am-10am, break time 10am-10:30am Math 10:30am-11:30am 11:30am-12:30pm PE\n";
    cout << "Wednesday: Religion 9am-10am, break time 10am-10:30am HE/TLE 10:30am-11:30am 11:30am-12:30pm HEKASI\n";
    break;
   case 4:
    cout << "Monday: Filipino 9am-10am, break time 10am-10:30am Science 10:30am-11:30am \n";
    cout << "Tuesday: GMRC 9am-10am, break time 10am-10:30am Math 10:30am-11:30am \n";
    cout << "Wednesday: Religion 9am-10am, break time 10am-10:30am PE 10:30am-11:30am \n";
    break;
   case 5:
    cout << "Monday: English 9am-10am, break time 10am-10:30am Filipino 10:30am-11:30am \n";
    cout << "Tuesday: Math 9am-10am, break time 10am-10:30am Science 10:30am-11:30am \n";
    cout << "Wednesday: HE/TLE 9am-10am, break time 10am-10:30am GMRC 10:30am-11:30am \n";
    cout << "Thursday: PE 9am-10am, break time 10am-10:30am Religion 10:30am-11:30am\n";
    break;
  case 6:
    cout << "Monday: GMRC 9am-10am, break time 10am-10:30am PE 10:30am-11:30am \n";
    cout << "Tuesday: Science 9am-10am, break time 10am-10:30am Math 10:30am-11:30am \n";
    cout << "Wednesday: PE 9am-10am, break time 10am-10:30am HE/TLE 10:30am-11:30am \n";
    cout << "Friday: Religion 9am-10am, break time 10am-10:30am English 10:30am-11:30am\n";
    break;
  default:
    cout << "Wrong input of grade level.";
    break;

   }

    return 0;
}
