// stats.cpp
#include "stats.hpp"
#include <cassert>
#include <vector>
#include <algorithm> // sort
#include <cmath> // sqrt, modf

using namespace std;

int count(vector<double> v) {

  return v.size();

  assert(false);

}

double sum(vector<double> v) {

  double sum = 0.0;
  for (int i = 0; i < v.size(); i++)
  {
    sum += v.at(i);
  }

  return sum;


  assert(false);
}

double mean(vector<double> v) {

  double mean, sum = 0.0;
  for (int i = 0; i < v.size(); i++)
  {
    sum += v.at(i);
  }

  mean = sum/v.size();

  return mean;


  assert(false);
}

double median(vector<double> v) {

  sort(v.begin(), v.end());

  int midindex;
  double median = 0.0;

  if (v.size() % 2 == 0)
  {
    midindex = (v.size())/2;
    median = (v.at(midindex) + v.at(midindex-1))/2;
  }

  else 
  {
    midindex = (v.size())/2;
    median = (v.at(midindex));
  }

  return median;

  assert(false);
}

double min(vector<double> v) {
  
  sort(v.begin(), v.end());

  double min = 0.0;
  min = v.at(0);

  return min;

  
  assert(false);
}

double max(vector<double> v) {

  double max = 0.0;

  sort(v.begin(), v.end());

  max = (v.at(v.size() - 1));

  return max;

  assert(false);
}

double stdev(vector<double> v) {

  double sum = 0.0;
  double accumulator = 0.0;
  
  for (int i = 0; i < v.size(); i++)
  {
    sum += v.at(i); 
  }

  double mean = sum/v.size();

  for (int i = 0; i < v.size(); i++)
  {

    accumulator += ((v.at(i) - mean)*(v.at(i) - mean));

  }

  double stdev = sqrt(accumulator/(v.size()-1));

  return stdev;


  assert(false);
}

double percentile(vector<double> v, double p) {


  sort(v.begin(), v.end());


  double rank = p * (v.size() - 1);

  double intpart = 0.0;
  double fractpart = 0.0;
  fractpart = modf(rank, &intpart);

  int k = static_cast<int>(intpart);

  if (k >= v.size() - 1)
  {
    return v.back();
  }

  double percentile = v.at(k) + 
  (fractpart*((v.at(k + 1)) - v.at(k)));

  return percentile;

  assert(false);
}

vector<double> filter(vector<double> v,
                     vector<double> criteria,
                      double target) {


  vector <double> filter = {};

  /*v is the data, criteria is the corresponding number, 
  
  target is what you are filtering*/


  for (int i = 0; i < v.size(); i++)
  {
    if (criteria.at(i) == target)
    {
      filter.push_back(v.at(i));  
    }
  }
  
  
  return filter;


  assert(false);



}
