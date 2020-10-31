#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> list(100);
  for(int i:list){
    i=i*i;
  }
}
