#include<iostream> //Time complexity -- O(2 to the power N) as we have two possibilities for every disk to be placed.
using namespace std; // Auxilliary Space used O(N) recursive call stack space. Stack space in recursive calls counts too 
void towerofHanoi(int n, char from, char to, char aux) //as extra space required by a program. 
{
  if(n==0)
  return;
  towerofHanoi(n-1, from, aux, to);
  cout<<"Move disk "<<n<<" from rod " << from <<" to rod "<< to << endl;
  towerofHanoi(n-1, aux, to, from);
}
int main()
{
  int n = 3;
  towerofHanoi(n, 'A', 'C', 'B');
  return 0;
}