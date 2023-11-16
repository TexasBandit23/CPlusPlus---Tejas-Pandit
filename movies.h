#ifndef MOVIESHEADER
#define MOVIESHEADER
#include <iostream>
#include "Media.h"
//movie header class
class Movies : public Media{
public:
  virtual void addDirectorName(char*);
  virtual void addDuration(int);
  virtual void addRating(float);
  virtual void print();
  ~Movies();
private:
  char* directorName;
  int duration;
  float rating;
  
};

#endif
