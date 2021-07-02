using namespace std;

/*
 Data models are kept in a separate file so that they
 can be maintained/updated without having to change the main program.
*/


struct MovieType {
    string title;
    string synopsis;
    double rating;
};
