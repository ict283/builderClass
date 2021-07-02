#ifndef MovieTypeBuilder_h
#define MovieTypeBuilder_h

/*
    Builder classes may be defined to encapsulate the logic
    for initialising a complex data model.
    Here, we embed the data model in the builder class for cohesion.
*/

#include <iostream>
#include <string>

using namespace std;

struct MovieType {
    string title;
    string synopsis;
    double rating;
};

class MovieTypeBuilder
{
public:

    MovieTypeBuilder();

    ~MovieTypeBuilder();

    MovieType build(string& title, string& synopsis, double& rating);
};

#endif /* MovieTypeBuilder_h */
