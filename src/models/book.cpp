#include "models/book.h"

Book::Book(
    const std::string& isbn, 
    const std::string& title,
    const std::string& author,
    const std::string& publisher,
    time_t publication_date,
    const std::string& category,
    int available_count,
    int quantity
) : isbn(isbn), title(title), author(author), publisher(publisher), publication_date(publication_date), category(category), available_count(available_count), quantity(quantity) {};


// the getters
std::string Book::get_isbn() const { return isbn; }
std::string Book::get_title() const { return title; }
std::string Book::get_author() const { return author; }
std::string Book::get_publisher() const { return publisher; }
std::string Book::get_category() const { return category; }
time_t Book::get_publication_date() const { return publication_date; }
int Book::get_available_count() const { return available_count; }
int Book::get_quantity() const { return quantity; }

// the setters
void Book::set_isbn(const std::string& isbn) {
    this->isbn = isbn;
} 
void Book::set_title(const std::string& title) { this->title = title; }
void Book::set_author(const std::string& author) { this->author = author; }
void Book::set_publisher(const std::string& publisher) { this->publisher = publisher; }
void Book::set_publication_date(time_t publication_date) { this->publication_date = publication_date; }
void Book::set_available_count( int available_count) { this->available_count = available_count; }
void Book::set_quantity(int quantity) { this->quantity = quantity; }


// desctructor 
Book::~Book() = default;