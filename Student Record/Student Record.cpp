#include <iostream>
#include <cstring>
#include <array>



using namespace std;
struct student 

{
     int id;
     char name[30];
     float percentage;
};
 
int main() 
{
     int i;
     struct student record[3];
     system("clear");
   
     record[0].id=1;
     strcpy(record[0].name, "Ronel");
     record[0].percentage = 86.5;
     
     record[1].id=2;
     strcpy(record[1].name, "Lance");
     record[1].percentage = 90.5;

     record[2].id=3;
     strcpy(record[2].name, "Bianca");
     record[2].percentage = 81.5;
      

     cout << "Records of Student :" << endl;
     cout << "ID\t" << "Name\t" << "Grade\t" << endl;
     for (i=0; i<3; i ++){

     cout << record[i].id <<"\t"<< record[i].name <<"\t"<< record[i].percentage <<"\t\n";

     }


     return 0;
}