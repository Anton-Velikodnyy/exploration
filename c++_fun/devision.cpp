#include <iostream>
#include <stdlib.h>

int bit_counter1(int,int);
int bit_counter2(int);
int bit_counter3(int);
int bit_counter4(int);
int bit_counter5(int,int a  = 0);
int bit_counter6(int,int);
int main(int argc, char** argv)
{
  int number;
  if (argc < 2)
    number = 3;
  else
      number = atoi(argv[1]);

  int bit_count = 0;
  std::cout<<"# bits is "
    <<bit_counter5(number)
    << std::endl;
}

int bit_counter1(int number, int bit_count) {

  do bit_count+= (number%2); while ((number = number / 2)); return bit_count;
}

int bit_counter2(int number) {
  for(int bit_count = 0;;bit_count += number%2) if (!(number = number / 2)) return bit_count;
}

int bit_counter(int number) {
  for(int bit_count = 0;;) if (!((number = number / 2) +(bit_count += number%2)*0)) return bit_count;
}

int bit_counter5(int number,int bit ) {
  while(1) if (!((number = number / 2) + (bit += number%2)*0)) return bit;
}

















