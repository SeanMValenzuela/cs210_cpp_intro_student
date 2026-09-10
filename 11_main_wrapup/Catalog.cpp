#include "Catalog.h"
#include <iostream>

namespace cs210::library {

    void Catalog::addBook(const Book& book) {
        // TODO: add book to the end of books_
        books_.push_back(book);
    }

    void Catalog::printAll() const {
        // TODO: loop over books_ and print each one's title and author
        // (see main.cpp's output for the exact format we want)
        for (const auto& book : books_) {
            std::cout<< book.title() << " by " << book.author() << std::endl;
        }
    }

    int Catalog::count() const {
        // TODO: return how many books are in books_ (cast to int)
        return static_cast<int>(books_.size());
    }

}
