#include "Human.hpp"
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
  vector< char > ret_v(people.size());

  auto h = [](Human& hum) 
  { 
    hum.birthday();
    if (hum.isMonster())
      return 'n';
    else
      return 'y'; 
  };
  
  transform (people.rbegin(), people.rend(), ret_v.begin(), h);

  return ret_v;
}