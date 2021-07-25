#include<iostream> 
using namespace std; 
class CarRental { 
    public: 
    void carDetail(){
string Type; 
string Brand; 
string Number; 
int Capacity; 
cout << "Type: Truck" << endl;
cout << "Brand: Ford" << endl;
cout << "Number: F150" << endl;
cout << "Capacity: "; cin >> Capacity;
if (Capacity <=0)
    cout << "No cars found" << endl;
else if (Capacity > 0)
    cout << "Amount of cars in stock is: " << Capacity << endl;
else if (Capacity < 0)
cout << "Enter a positive capacity number";
};
int main (){ 
CarRental Car_info; 
Car_info.carDetail();
system("pause");
    return 0; 
}
