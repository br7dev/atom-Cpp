#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
  //cout<<meal_cost<<endl;
//  cout<<tip_percent<<endl;
//  cout<<)<<endl;
  double tax,tip, total;
  tip=meal_cost*(double)tip_percent/100;
  cout<<tip<<endl;
  tax=meal_cost*(double)tax_percent/100;
  cout<<tax<<endl;
//    cout<<fixed<<setprecision(2)<<meal_cost*(double)tip_percent/100<<endl;
//cout<<tip<<"\n"<<tax<<endl;
total=meal_cost+tip+tax;
cout<<round(total)<<endl;
  //cout<<fixed<<setprecision(2)<<meal_cost*(double)tax_percent/100<<endl;


//  cout<<meal_cost+meal_cost*(tax_percent/100)+meal_cost*(tip_percent/100)<<endl;
  //cout<<total_cost<<endl;


}

int main()
{
    double meal_cost;
    cin >> meal_cost;
//   cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
