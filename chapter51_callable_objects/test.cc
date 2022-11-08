#include <string>

// Functor
class functor_match {
  public:
    bool operator()(const std::string& str)
    {
        return str == "cat";
    }
};


