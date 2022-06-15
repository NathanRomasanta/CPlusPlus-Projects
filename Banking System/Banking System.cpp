#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <cctype>
#include <fstream>
#include <iomanip>
#include <ctime>


using namespace std;

struct Data {
  char firstname[50];
  char lastname[50];
  int PIN;
  int balance;
  int PINpass;
  string directory = "Database Folder/";
  string recieptDirectory = "Receipt Folder/";
  char filename[399];
  char recieptfilename[399];
  string stringpin;
  string transaction = "Trasactions/";
};


//different screens for the program
void AdminScreen();
void ClientScreen();

void WithdrawScreen();
void CheckBalance();
void ChangePin();

void AddClient();
void UpdateClient();
void DeleteClient();

//headers
void Header();
void MainHeader();
void AdminHeader();

//withdraw function
int deduct(int *x, int *y)
{
 int solve;
 solve = (*x - 18)-*y;
 return solve;
}


//main function
int main() {
  system("clear");
  int ans;
  string ans2;
  string pass;

      Header();
      cout << "\t\t\t\t\t\t\t\t\t\t==================================="<< endl;
      cout << "\t\t\t\t\t\t\t\t\t\tWhich page do you want to navigate?" << endl;
      cout << "\t\t\t\t\t\t\t\t\t\t1 >> Client" << endl;
      cout << "\t\t\t\t\t\t\t\t\t\t2 >> Admin"<< endl;
      cout << "\t\t\t\t\t\t\t\t\t\t==================================="<< endl;
      cout << "\t\t\t\t\t\t\t\t\t\t:";
      cin >> ans;

      if(ans == 1){


        ClientScreen();

      }else{

        
        system("clear");
        AdminHeader();
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Bank ID details" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t>>";
        cin >> ans2;
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter password" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t>>";
        cin >> pass;


        if(ans2.compare("noir")==0){

              if(pass.compare("password")==0){
                  AdminScreen();}

              else{

              system("clear");
              cout << "\t\t\t\t\t\t\t\t        Incorrect password details please restart the system and try again" << endl; }}
              
        else{
        system("clear");
        cout << "\t\t\t\t\t\t\t\t        Incorrect password details please restart the system and try again" << endl;}
 }
}

//little easter egg of the program hehe
void Header(){
cout <<"\n\n"<< endl;
cout << "\t\t\t\t\t\t                       :                                                                            " << endl;
cout << "\t\t\t\t\t\t   L.                 t#,                                                    L.             G:      " << endl;
cout << "\t\t\t\t\t\t   EW:        ,ft    ;##W.   t   j.                .                         EW:        ,ft E#,    :" << endl;
cout << "\t\t\t\t\t\t   E##;       t#E   :#L:WE   Ej  EW,               Ef.                    .. E##;       t#E E#t  .GE" << endl;
cout << "\t\t\t\t\t\t   E###t      t#E  .KG  ,#D  E#, E##j              E#Wi                  ;W, E###t      t#E E#t j#K;" << endl;
cout << "\t\t\t\t\t\t   E#fE#f     t#E  EE    ;#f E#t E###D.            E#K#D:               j##, E#fE#f     t#E E#GK#f  " << endl;
cout << "\t\t\t\t\t\t   E#t D#G    t#E f#.     t#iE#t E#jG#W;           E#t,E#f.            G###, E#t D#G    t#E E##D.   " << endl;
cout << "\t\t\t\t\t\t   E#t  f#E.  t#E :#G     GK E#t E#t t##f          E#WEE##Wt         :E####, E#t  f#E.  t#E E##Wi   " << endl;
cout << "\t\t\t\t\t\t   E#t   t#K: t#E  ;#L   LW. E#t E#t  :K#E:        E##Ei;;;;.       ;W#DG##, E#t   t#K: t#E E#jL#D: " << endl;
cout << "\t\t\t\t\t\t   E#t    ;#W,t#E   t#f f#:  E#t E#KDDDD###i       E#DWWt          j###DW##, E#t    ;#W,t#E E#t ,K#j" << endl;
cout << "\t\t\t\t\t\t   E#t     :K#D#E    f#D#;   E#t E#f,t#Wi,,,       E#t f#K;       G##i,,G##, E#t     :K#D#E E#t   jD" << endl;
cout << "\t\t\t\t\t\t   E#t      .E##E     G#t    E#t E#t  ;#W:         E#Dfff##E,   :K#K:   L##, E#t      .E##E j#t     " << endl;
cout << "\t\t\t\t\t\t   ..         G#E      t     E#t DWi   ,KK:        jLLLLLLLLL; ;##D.    L##, ..         G#E  ,;     " << endl;
cout << "\t\t\t\t\t\t               fE            ,;.                               ,,,      .,,              fE         " << endl;
cout <<"\n\n"<< endl;
}


void MainHeader() {
cout <<"\n\n\n\n\n\n\n\n"<< endl;
cout << "\t\t\t\t\t\t\t\t\t\t\t    Universal Bank of Noir" << endl;
cout <<"\n\n\n\n\n"<< endl;

}
void AdminHeader() {
cout <<"\n\n\n\n\n\n\n\n"<< endl;
cout << "\t\t\t\t\t\t\t\t\t\t\t    Universal Bank of Noir" << endl;
cout << "\t\t\t\t\t\t\t\t\t\t\t         ADMIN ACCESS" << endl;
cout <<"\n\n\n\n\n"<< endl;

}


//add client page
void AddClient(){

  system("clear");
  char x;
  int length;
  Data data;

      cin.ignore();
        
        AdminHeader();
        cout << "\t\t\t\t\t\t\t\t\t\t\t     Create Client Screen" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter first name of client: ";
        cin.getline(data.firstname,50);
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter last name of client: ";
        cin.getline(data.lastname,50);
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Client PIN(must be 6 digits): ";
        cin >> data.stringpin;
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Starting Balance: ";
        cin >> data.balance;
 

        data.directory.append(data.firstname);
        data.directory.append(" ");
        data.directory.append(data.lastname);

        strcpy(data.filename, data.directory.c_str());

        fstream database;
        database.open(data.filename);
        length = data.stringpin.length();

        if (length == 6) {

            if (database.is_open()){

                system("clear");
                AdminHeader();
                cout << "\t\t\t\t\t\t\t\t\t\t\t     Account already created!" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t Press any character to continue: ";
                cin >> x;
                database.close();
                AdminScreen();

            }else{

                ofstream addnew;
                data.PIN = stoi(data.stringpin);
                addnew.open(data.filename);
      
                addnew << setfill('0') << setw(6) << data.PIN << endl;
                addnew << data.firstname << endl;
                addnew << data.lastname << endl;
                addnew << data.balance << endl;
                system("clear");
                AdminHeader();
                cout << "\t\t\t\t\t\t\t\t\t\t          Client successfully created" << endl; 
                cout << "\t\t\t\t\t\t\t\t\t\t\t Press any character to continue: ";
                cin >> x;
                addnew.close();


                AdminScreen();
            }
            }else{
                system("clear");
                AdminHeader();
                cout << "\t\t\t\t\t\t\t\t\t\t       PIN is either too short or too long" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t Press any character to continue: ";
                cin >> x;
                AdminScreen();

}}


//update client page
void UpdateClient(){

    system("clear");
    char x;
    int y;
    int length;
    char arr[6];
    Data data;
    
      AdminHeader();
      cin.ignore();
      cout << "\t\t\t\t\t\t\t\t\t\t\t     Update Client Screen" << endl;
      cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
      cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Client firstname: ";
      cin.getline(data.firstname, 50);
      cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Client lastname: ";
      cin.getline(data.lastname, 50);

      data.directory.append(data.firstname);
      data.directory.append(" ");
      data.directory.append(data.lastname);


      strcpy(data.filename, data.directory.c_str());


      fstream database;
      database.open(data.filename);

      if(database.is_open()){

          system("clear");
          AdminHeader();
          database >> data.stringpin >> data.firstname >> data.lastname >> data.balance;

          cout << "\t\t\t\t\t\t\t\t\t\t\t         Client Details" << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\t" << data.firstname << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\t"<< data.lastname << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\t"<< "******" << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\t"<< data.balance << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\tWhat data of client you which to edit?" << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\t1 >> PIN" << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\t2 >> Balance Data" << endl;
          cout << "\t\t\t\t\t\t\t\t\t\t\t3 >> Press any letter to go back: ";
          cin >> y;

          database.close();
     
          if (y==1) {
              system("clear");
                  AdminHeader();
                  database.open(data.filename);
                  cout << "\t\t\t\t\t\t\t\t\t\t\t         Change Pin" << endl;
                  cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
                  cout << "\t\t\t\t\t\t\t\t\t\t\tEnter the new pin of client: ";
                  cin >> data.stringpin;
                  length = data.stringpin.length();
          
          

                  if (length == 6) {
                      system("clear");
                      AdminHeader();
                      data.PIN = stoi(data.stringpin);
                      database << setfill('0') << setw(6) << data.PIN << endl;
                      database << data.firstname << endl;
                      database << data.lastname << endl;
                      database << data.balance << endl;
                      cout << "\n\t\t\t\t\t\t\t\t\t\t\tAccount updated,\n\t\t\t\t\t\t\t\t\t\t\tpress any character to continue: ";
                      cin >> x;
          
                      AdminScreen();

                  }else{
                      system("clear");
                      AdminHeader();
                      cout << length << endl;
                      cout << "\n\t\t\t\t\t\t\t\t\tNew PIN is either too short or too long, press any key to go back: ";
                      cin >> x;
                      AdminScreen();
          }
      }

          else if(y==2){
            system("clear");
            AdminHeader();
            data.PIN = stoi(data.stringpin);
            database.open(data.filename);
            cout << "\t\t\t\t\t\t\t\t\t\t\t         Change Balance" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\tEnter the new balance of client: ";
            cin >> data.balance;
      
            database << setfill('0') << setw(6) << data.PIN << endl;
            database << data.firstname << endl;
            database << data.lastname << endl;
            database << data.balance << endl;

            database.close();

            cout << "\n\t\t\t\t\t\t\t\t\t\t\tAccount updated,\n\t\t\t\t\t\t\t\t\t\t\tpress any character to continue: ";
            cin >> x;
            AdminScreen();

          }else{
      
            system("clear");
            AdminHeader();
            cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t     Logging out, press any key to continue";
            cin >> x;
            cin >> x;
            database.close();
            AdminScreen();

      
      }}else{
  
        cout << "\t\t\t\t\t\t\t\t\t\t\t     No account found!" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\tPress any letter to go back: ";
        cin >> x;
        database.close();
        AdminScreen();
    }
}


//delete client screen
void DeleteClient(){
  system("clear");
      char x;
      int y;
      Data data;
      
        AdminHeader();
        cout << "\t\t\t\t\t\t\t\t\t\t\t     Delete Client Screen" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
        cin.ignore();
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter first name of client ";
        cin.getline(data.firstname, 50);
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter lastname name of client ";
        cin.getline(data.lastname, 50);


        data.directory.append(data.firstname);
        data.directory.append(" ");
        data.directory.append(data.lastname);


        strcpy(data.filename, data.directory.c_str());
    
    
        if( remove(data.filename) != 0 ){
              system("clear");
              AdminHeader();
              cout << "\t\t\t\t\t\t\t\t\t\t     Account can't be deleted, please try again" << endl;
              cout << "\t\t\t\t\t\t\t\t\t\t\t Press any character to continue: ";
              cin >> x;
              AdminScreen();}

        else{
              system("clear");
              AdminHeader();
              cout << "\t\t\t\t\t\t\t\t\t\t\t  Account successfully deleted!" << endl;
              cout << "\t\t\t\t\t\t\t\t\t\t\t Press any character to continue: ";
              cin >> x;
              AdminScreen();}
}



//main admin screen
void AdminScreen() {

  system("clear");
  char x;
  int ans;
    AdminHeader();
    cout << "\t\t\t\t\t\t\t\t\t\t\tYou are now at the Admin screen" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tWhat would you like to do next?" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t1 - Create a new Client Account" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t2 - Update an existing Client Account" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t3 - Delete a Client Account" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t4 - Logout of Admin Panel" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t>>";
    cin >> ans;

switch (ans) {
    case 1:
        AddClient();
        break;

    case 2:
        UpdateClient();
        break;

    case 3:
        DeleteClient();
        break;

    case 4:
        system("clear");
        AdminHeader();
        cout << "\t\t\t\t\t\t\t\t\t\t    Logging out, press any key to continue: "<< endl;
        cin >> x;
        main();
        break;

  default:
    break;
}}


void ClientScreen(){
    start:
      system("clear");
      Data data;
      char x;
      int y;
      int ans;
      int withdraw;
      int newAmmount;
      int length;
      string stringpin;
    
            MainHeader();
            cout << "\t\t\t\t\t\t\t\t\t\t\t     Welcome to Noir Bank!" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\tPress any character to continue" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t>>";
            cin >> x;


            system("clear");
            
            MainHeader();
            cin.ignore();
            cout << "\t\t\t\t\t\t\t\t\t\t\t          ClientScreen" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Firstname: ";
            cin.getline(data.firstname, 50);
      
            cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Lastname: ";
            cin.getline(data.lastname, 50);
      
            data.directory.append(data.firstname);
            data.directory.append(" ");
            data.directory.append(data.lastname);
            
            
            strcpy(data.filename, data.directory.c_str());
    
            fstream database;
            database.open(data.filename);


            if(database.is_open()){

              database >> stringpin >> data.firstname >> data.lastname >> data.balance;
              data.PIN = stoi(stringpin);
      
              cout << "\t\t\t\t\t\t\t\t\t\t\tEnter your pin: ";
              cin >> data.PINpass;

      

              if (data.PINpass == data.PIN){
                  relay:
                  system("clear");
                      MainHeader();
                      cout << "\t\t\t\t\t\t\t\t\t\t\t   Welcome, "<< data.firstname << " " << data.lastname << "!\n" << endl;
                      cout << "\n\t\t\t\t\t\t\t\t\t\t\t   What would you like todo?" << endl;
                      cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
                      cout << "\t\t\t\t\t\t\t\t\t\t\t1 - Check your balance" << endl;
                      cout << "\t\t\t\t\t\t\t\t\t\t\t2 - Withdraw" << endl;
                      cout << "\t\t\t\t\t\t\t\t\t\t\t3 - Change your PIN" << endl;
                      cout << "\t\t\t\t\t\t\t\t\t\t\t4 - End Transaction" << endl;
                      cout << "\t\t\t\t\t\t\t\t\t\t\t>>";
                      cin >> ans;


                      switch (ans) {
                            case 1:
                                system("clear");
                                        MainHeader();
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t         Balance Screen" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tClient Name: " << data.firstname << " " << data.lastname << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tBalance: " << data.balance << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tPress any character to continue" << endl;;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t>>";
                                        cin >> x;

                                        goto relay;
                                        break;


                            case 2:
                                system("clear");
                                        MainHeader();
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t       Withdrawal Screen" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tClient Name: " << data.firstname << " " << data.lastname << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tBalance: " << data.balance << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter the amount to withdraw" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t>>";
                                        cin >> withdraw;
            

                                        newAmmount = deduct(&data.balance, &withdraw);

                                        database.close();
                                        database.open(data.filename);

                                        database << setfill('0') << setw(6) << data.PIN << endl;
                                        database << data.firstname << endl;
                                        database << data.lastname << endl;
                                        database << newAmmount << endl;
            
                                        database.close();

                              system("clear");
                                        MainHeader();
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t      Withdrawal Screen" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tClient Name: " << data.firstname << " " << data.lastname << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tNew balance: " << newAmmount << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tPress any key to continue" << endl;;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t>>";
                                        cin >> x;
            
          
                                        goto start;
                                      break;

                            case 3:{

                               system("clear");
            
            
                                        MainHeader();
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t       Change PIN Screen" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\t===============================" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter your pin: ";
                                        cin >> data.PINpass;

                                        if(data.PINpass == data.PIN){

                                            fstream changepin;

                                            changepin.open(data.filename); 
                  
                                            cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter the new pin of client: ";
                                            cin >> data.stringpin;
          
                                            length = data.stringpin.length();
          
          
                                            if (length == 6) {

                                                  data.PIN = stoi(data.stringpin);
                                                  changepin << setfill('0') << setw(6) << data.PIN << endl;
                                                  changepin << data.firstname << endl;
                                                  changepin << data.lastname << endl;
                                                  changepin << data.balance << endl;
                                                  changepin.close();

          
        
                                                  cout << "\n\t\t\t\t\t\t\t\t\t\t\tAccount updated,\n\t\t\t\t\t\t\t\t\t\t\tpress any character to continue: ";
                                                  cin >> x;
          
                                                  goto relay;}
                                            else{

                                                  
                                                  cout << "\n\t\t\t\t\t\t\t\t\tNew PIN is either too short or too long, press any key to go back: ";
                                                  cin >> x;
                                                  database.close();
                                                  goto relay;

                                                }}
                                        else{
                                            cout << "\n\t\t\t\t\t\t\t\t\t  Incorrect PIN please try again, press any character to continue: " << endl;
                                            cout << ">>";
                                            cin >> x;
                                            goto relay;}

                                      break;}

                            case 4:
                              system("clear");
                              MainHeader();
                              cout << "\t\t\t\t\t\t\t\t\t\tThank you for choosing Noir Bank, have a great day!" << endl;
                              cout << "\t\t\t\t\t\t\t\t\t\t\t    Press any key to continue: ";
                              cin >> x;
                              goto start;
                              break;

                            case 5: 
                              system("clear");
                              MainHeader();
                              cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t     Logging out, press any key to continue";
                              cin >> x;
                              main();
                              break;

                            default:
                              break;}}
              else{   
  
                system("clear");
                  MainHeader();
                  cout << "\t\t\t\t\t\t\t\t\t\t    Incorrect PIN, press any key to continue: ";
                  cin >> x;
                  goto start;}}

            else{
               system("clear");
              MainHeader();
              cout << "\t\t\t\t\t\t\t\t\t\t\t     No account found!" << endl;
              cout << "\t\t\t\t\t\t\t\t\t\t\tPress any letter to go back: ";
              cin >> x;
              goto start;}}

//NOIR 2022







