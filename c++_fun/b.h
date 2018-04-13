#ifndef B_H
#define B_H
namespace cpp_fun
{
  

  template <typename T>
  class B
  {
    public:
      B(){}

      void set_value(T);
      T get_value();
      static int stats(int);

    private:
      T value;

  };

  template <typename T>
  void B<T>::set_value(T value)
  {
    this->value = value;
  }

  template <typename T>
  T B<T>::get_value()
  {
    return value;
  }

  template <typename T>
  int B<T>::stats(int value)
  {
    return value*value;
  }


}
#endif 

