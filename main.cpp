#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if(cnt==M){
      for(int elem : vec){
         cout<< elem << " ";
      }
      cout<<endl;
      return;
   }
   int biggest_in_vector=0;
   if(vec.empty()){
      biggest_in_vector=0;
   }
   else{
      biggest_in_vector=vec.back();
   }

   for(int i=biggest_in_vector+1;i<=N;i++){
         vec.push_back(i);
         func(cnt+1);
         vec.pop_back();
      }








}

int main() {
   cin >> N >> M;
   func(0);
}
