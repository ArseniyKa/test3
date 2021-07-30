 
# include <iostream>
using namespace std;

int main ()
{
  int N;
  cout<<"Enter N"<<endl;
  cin>>N;
  
  int ** p = new int *[N];
    for (int i=0; i<N; i++)
    {
     p[i] = new int [N];
       for (int j=0; j<N; j++)
       { p[i][j] =rand()%8;
         cout<<p[i][j]<<" ";}
      cout<<endl;
      
    }
    
    for (int i=0; i<N; i++)
    delete [] p;
  delete p;
  return  0;
}
