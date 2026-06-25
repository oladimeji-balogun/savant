#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <ctime>
#include <string>

class Book {
    private: 
        std::string isbn;
        std::string title;
        std::string author;
        std::string publisher;
        std::time_t publication_date;
        std::string category;
        int available_count;
        int quantity;

    public:
        // getters
        std::string get_isbn() const;
        std::string get_title() const;
        std::string get_author() const;
        std::string get_publisher() const;
        std::time_t get_publication_date() const;
        std::string get_category() const;
        int get_available_count() const;
        int get_quantity() const;

        // setters
        void set_isbn(const std::string& isbn);
        void set_title(const std::string& title);
        void set_author(const std::string& author);
        void set_publisher(const std::string& publisher);
        void set_publication_date(time_t publication_date);
        void set_category(const std::string& category);
        void set_available_count(int available_count);
        void set_quantity(int quantity);

        // constructor
        Book(
            const std::string& isbn,
            const std::string& title,
            const std::string& author,
            const std::string& publisher,
            time_t publication_date,
            const std::string& category,
            int available_count,
            int quantity
        );
        // destructor
        ~Book();
};

#endif