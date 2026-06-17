#include <iostream>
#include "Cinema.h"

using namespace std;

int main() {
    CinemaManager manager;

    
    manager.createMovies(5);

    
    manager.listMovies();

  
    int targetNo;
    cout << "\n輸入要看的電影名稱之序號: ";
    cin >> targetNo;

    manager.searchMovie(targetNo);

    return 0;
}