#ifndef CINEMA_H
#define CINEMA_H


struct cinema {
    char name[10];  
    char date[9];   
    char place[7];  
    int price;      
};


class CinemaManager {
private:
    const char* filename = "movie.bin";

public:
    
    void createMovies(int count);

    
    void listMovies();

    
    void searchMovie(int no);
};

#endif
#pragma once
