// For review purposes only! Does not represent the actual solution!

#include <iostream>
#include <list>
#include "Data/movie_data.h"
#include "Builders/MovieTypeBuilder.h"

using namespace std;

void print(MovieType& m);

int main(void) {

        list<MovieType> movie_database;
        MovieTypeBuilder m_builder;
    

        for(int i = 0; i<3; i++) {
            movie_database.push_back(m_builder.build(t[i], s[i], r[i]));
        }

        for(MovieType m : movie_database) {
                print(m);
        }

        return 0;
}

void print(MovieType& m) {
        cout<<"Title: "<<m.title<<endl;
        cout<<"Synopsis: "<<m.synopsis<<endl;
        cout<<"Rating: "<<m.rating<<endl<<endl;
}
