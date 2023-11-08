#include<fstream>
#include<iostream>
#include<string.h>

using namespace std;

class student{
  string id;
  string name;
  int year;
  int mobile_no;
  int contact;
  
  public:
   
    void get(){
      cout<<"\nEnter your Student id\n";
      cin>>id;

      cout<<"Enter your name\n";
      cin>>name;
      
      cout<<"Enter year\n";
      cin>>year;

      cout<<"Enter Contact number\n";
      cin>>contact;
    }

};

class studento{
 public:
 
  string id;
  string name;
  int year;
  int contact;
  

};


int main() {
    char o;
    fstream out;
    out.open("text.txt", ios::app | ios::binary);
    student s;
    studento s1;
    do {
        s.get();
        out.write((char*)(&s), sizeof(s));
        cout << "Enter another student (y/n)?";
        cin >> o;
    } while (o == 'y');

    out.close();

    //ifstream in;
    out.open("text.txt", ios::in | ios::binary);

    while (out.read((char*)(&s1), sizeof(s1))) {
        // The data is read into the 's' object, but you can choose to print or process it differently
        cout << "Student ID: " << s1.id << endl;
        cout << "Name: " << s1.name << endl;
        cout << "Year: " << s1.year << endl;
        cout << "Contact Number: " << s1.contact << endl;
        cout << "------------------------\n";
    }

    out.close();

    return 0;
}
