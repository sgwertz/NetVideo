/*
  Rental.hpp

  Include file for Rental class
*/

#ifndef RENTAL_H
#define RENTAL_H

#include "Video.hpp"

class Rental {
public:

    // constructor
    Rental(const Video& movie, int weeks_rented);

    // days rented
    int getWeeksRented() const;

    // movie rented
    const Video& getVideo() const;

private:
    Video movie;
    int weeks;
};

#endif
