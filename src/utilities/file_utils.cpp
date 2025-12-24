#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>

inline bool exists(const std::string& name) {
  struct stat buffer;   
  return (stat (name.c_str(), &buffer) == 0); 
}