#include "animal.h"


namespace cpp_fun {
  template<typename T>
    class owl: public animal<T>
  {
    public:
      owl(){};
      std::string speak();
      std::string type_of();
  };

  template<typename T>
    std::string owl<T>::type_of()
    {
      return "owl";
    }

  template<typename T>
    std::string owl<T>::speak()
    {
      return "bark";
    }

}
