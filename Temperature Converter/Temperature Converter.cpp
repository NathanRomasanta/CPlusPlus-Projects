#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double c_to_f (double a);
double f_to_c (double a);
double c_to_k (double a);

int main(){
    double x,y,z,ans;
    int opt;
    string f;
 

start:
    cout<<"TEMPERATURE CONVERTER"<<endl;
    cout<<"[1] - Celsius to Fahrenheit"<<endl;
    cout<<"[2] - Fahrenheit to Celsius"<<endl;
    cout<<"[3] - Celsius to Kelvin"<<endl;
    cout<<"Choose your option: ";
    cin>>opt;

  switch(opt) {
    case 1:
      cout<<"Enter your temperature in Celsius: ";
      cin>>x;

      ans = c_to_f(x);
      cout<<fixed<<setprecision(2)<<x<<" degree Celsius is "<<fixed<<setprecision(2)<<ans<<" degree Fahrenheit"<<endl;
      break;
    case 2:

      cout<<"Enter your temperature in Fahrenheit: ";
      cin>>x;

      ans = f_to_c(x);
      cout<<fixed<<setprecision(2)<<x<<" degree Fahrenheit is "<<fixed<<setprecision(2)<<ans<<" degree Celsius"<<endl;
      break;
    case 3:
      cout<<"Enter your temperature in Celsius: ";
      cin>>x;

      ans = f_to_c(x);
      cout<<fixed<<setprecision(2)<<x<<" degree Celsius is "<<fixed<<setprecision(2)<<ans<<" degree Kelvin"<<endl;
      break;

    default:
      break;


  }

  cout<<"Do you want to continue?[Y/N]"<<endl;
  cin>>f;

  if (f=="N"){
    exit(0);
  }else{
    goto start;

  }


return 0;

}


double c_to_f (double a){
  double s;
  s = ((a * 9)/5) + 32;
  return s;

}

double f_to_c (double a){
  double s;
  s = ((a - 32)* 5) / 9;
  return s;

}

double c_to_k (double a){
  double s;
  s = a + 273.15;
  return s;

}