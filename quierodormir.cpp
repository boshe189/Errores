#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int sumSquares_lists (vector<int> oper ){
  int x=0;
  int sumpot=0;
  int pot=0;
  int z=0;
  z= pow(x,2); {
return z;
}


return 0;
}


int main()
{
  int x=0;

  vector <int> nums;
  cout<<"This program will take your numbers, raise them to squared power and sum those numbers. Introduce the numbers you want to work with. (Write two times zero numerically -> (00) when you want to stop.): "<<endl;
  cin>>x;
  while( x != 00){
  nums.push_back(x);
  cin >> x;
  }

  cout << "The sum of the power squared of your numbers is: "<< sumSquares_lists(nums) << endl;

return 0;
}
