#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>

int main()
{
  boost::gregorian::date d{2021, 8, 26};
  std::cout << d.year() << '\n';
  std::cout << d.month() << '\n';
  std::cout << d.day() << '\n';
  std::cout << d.day_of_week() << '\n';
  std::cout << d.end_of_month() << '\n';
}