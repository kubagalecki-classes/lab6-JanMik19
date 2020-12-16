#include "Human.hpp"
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
  vector< char > ret_v(people.size());
    
  for_each(people.begin(), people.end(), [](Human& h) { h.birthday(); });

  transform(people.rbegin(), people.rend(), ret_v.begin() [](Human& h)
  {
    if (h.isMonster())
      return 'N'; 
    else
      return 'Y';
  });

  return ret_v;
}