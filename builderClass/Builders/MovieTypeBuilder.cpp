#include "MovieTypeBuilder.h"

MovieTypeBuilder::MovieTypeBuilder(){

}

MovieTypeBuilder::~MovieTypeBuilder(){

}

MovieType MovieTypeBuilder::build(string& title, string& synopsis, double& rating){
    MovieType m;
    m.title = title;
    m.synopsis = synopsis;
    m.rating = rating;
    return m;
}

