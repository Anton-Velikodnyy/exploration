#include <cstdlib>
#include <iostream>
#include <random>
#include <typeinfo>
#include <vector>
#include <math.h>

#include "a.h"
#include "b.h"
#include "owl.h"

using namespace cpp_fun;
void testA(int ,char** );
void testB(int ,char** );

int main (int argc,char** argv)
{
  std::cout<<"2*2 = " << pow(2,2)<< std::endl;


}


void normal_distribution()
{
  const int nrolls=10000;  // number of experiments
  const int nstars=100;    // maximum number of stars to distribute

  std::default_random_engine generator;
  std::normal_distribution<double> distribution(5.0,3.0);

  int p[10]={};

  for (int i=0; i<nrolls; ++i) {
    double number = distribution(generator);
    if ((number>=0.0)&&(number<10.0)) 
    {
      ++p[int(number)];
      std::cout<<std::to_string(number)<<"\n";
    }
  }

  std::cout << "normal_distribution (5.0,2.0):" << std::endl;

  for (int i=0; i<10; ++i) {
    std::cout << i << "-" << (i+1) << ": ";
    std::cout << std::string(p[i]*nstars/nrolls,'*') << std::endl;
  }


}

void inheritence()
{
  owl<std::string> greg;
  std::cout<<greg.type_of_parent()<<std::endl;

}

void testA(int argc,char** argv)
{
  //dynamic initilizatoin
  auto z= 4;
  auto x = new A ();
  A y;
  std::cout << "x is of type " << typeid(x).name() << "\n";
  std::cout << "y is of type " << typeid(y).name() << "\n";


  //checking for args
  std::cout<<"argc = "<<argc<<"\n";
  if (argc < 2)
    return;

  //convert first arg after command to int and passes it to x
  x->set_value(atoi(argv[1]));

  // equaivalent to "->"
  (*x).set_value(atoi(argv[2]));

  y.set_value(atoi(argv[2]));

  //print stuff
  std::cerr<<"In A, "
    << x->get_value()
    << " = value:x, "
    << y.get_value()
    << " = value:y"
    << "\n";

  //redundant here, but did it for peace of mind
  delete x;
}

/*

void testB(int argc,char** argv)
{
  std::cout<<"argc = "<<argc<<"\n";
  if (argc < 2)
    return;
  B<int> x;

  x.set_value(atoi(argv[1]));
  std::cerr<<"In B, "
    << x.get_value()
    << " = value, "
    <<B<int>::stats(atoi(argv[2]))
    << " = static value,"
    <<"\n";
}

*/
