#include "Human.hpp"
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
  vector< char > ret_v(people.size());
  auto h = [](Human& hum) { hum.birthday(); };
  for_each(people.begin(), people.end(), h);

  transform(people.rbegin(), people.rend(), ret_v.begin(), [](Human& h)
  {
    if (hum.isMonster())
      return 'N'; 
    else
      return 'Y';
  });

  return ret_v;
}