
namespace cpp_fun{
  template<typename T> 
    class animal
    {
      public:
        virtual std::string speak()=0;
        std::string type_of();
        std::string type_of_parent();
    };

  template<typename T> 
  std::string animal<T>::type_of()
  {
    return "animal";
  }

  template<typename T> 
  std::string animal<T>::type_of_parent()
  {
    return this->type_of();
  }
}
