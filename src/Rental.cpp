/*
  Rental.cpp

  Definition file for Rental class.
*/

#include "Rental.hpp"

// constructor
Rental::Rental(const Video& movie, int weeks_rented)
    : movie(movie), weeks(weeks_rented)
{ }

// days rented
int Rental::getWeeksRented() const {

    return Weeks;
}

// movie rented
const Video& Rental::getVideo() const {

    return movie;
}
