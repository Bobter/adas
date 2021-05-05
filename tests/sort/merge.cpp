/*
 * Testing merge algorithm
 *
 * Maintainer: glozanoa <glozanoa@uni.pe>
 */

#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;

#include "../../include/sort.hpp"
#include "../../include/print.hpp"
#include "../../include/timer.hpp"
#include "../../include/io.hpp"
int main()
{

  //sels: sorted elements
  //vector<int> sels1 = read::from_file<int>("/home/hiteek/Github/Colaborate/algorithms/dgen/1");
  vector<int> sels1 = {38,27,43,3,9,82,10};
  //print::to_stdout("sels1:", sels1);

  //vector<int> sels2 = {5, 22, 26, 27, 39};
  //print::to_stdout("sels2:", sels2);

  //vector<int> result = vector<int>(sels1.size()+sels2.size());

  //sort::merge(sels1.begin(), sels1.end(),
              //sels2.begin(), sels2.end(),
              //result.begin());  
  Timer time;
  time.start();
  sort::merge_sort(sels1.begin(),sels1.end());
  time.stop();
  time.report("primer merge");
  //print::to_stdout(sels1);
  // time.start();
  // sort::mergesortver(sels1.begin(),sels1.end());
  // time.stop();
  // time.report("tercer mege");
  //print::to_stdout(sels1.begin(),sels1.end());
  ///print::to_stdout("merged:", result);
  
  return 0;
}
