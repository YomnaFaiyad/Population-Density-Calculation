//A programs that Calculates the Population Density
#include <iostream>
using namespace std;
struct District

   {

    string name;      //name of the district
    int population;  //number of population in the district
    int noAffected; //number of affected by the flood (victims)
    double fund;     // fund received to assist the flood victims

   };

int main()
{
	string name, morename;
    int population, noAffected, districtnum, sum, maxaffected = 0;
    double fund;
     
	District district [100]; // input section for the array district

     
      
      cout << "This is a program that keeps track of the flood situation." << endl << endl;
  cout << "Enter the number of districts you will enter: ";
  cin >> districtnum;
  
   for (int i = 0; i < districtnum; i++)
{
	
cout << "Enter name of district: ";
cin >> district[i].name;
cout << "Enter population: ";
cin >> district[i].population;
cout << "Enter number of people affected: ";
cin >> district[i].noAffected;
cout << "Enter number of fund: ";
cin >> district[i].fund;
cout << endl;

sum+= district[i].fund;

if (district[i].noAffected > maxaffected) 
{
name = district[i].name;
} 
if (district[i].noAffected > 1000)
{
	morename = district[i].noAffected;
	
}
}

cout << endl << endl;


cout << "The name of the district with the highest number of affected victims by the flood is: " << name << endl; 
cout << "The total fund received by all the districts. is: " << sum << endl;
cout << "The names of districts with more than 1000 flood victims are: " << morename << endl;   
	
	
	
	return 0;
}




