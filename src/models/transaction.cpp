/*
Members:

transaction_id (int)
book_isbn (string)
patron_id (int)
borrow_date (time_t)
due_date (time_t)
return_date (time_t — can be 0 if not returned yet)
status (string — "borrowed", "returned", "overdue")

*/

#include "models/transaction.h"
#include <stdexcept>

Transaction::Transaction(
    int transaction_id, 
    const std::string& book_isbn, 
    int patron_id, 
    time_t borrow_date, 
    time_t due_date, 
    time_t return_date,
    TransactionStatus status
) : transaction_id(transaction_id), book_isbn(book_isbn), patron_id(patron_id), borrow_date(borrow_date), due_date(due_date), return_date(return_date), status(status) {}


// the getters
int Transaction::get_transaction_id() const { return transaction_id; }
std::string Transaction::get_book_isbn() const { return book_isbn; }
int Transaction::get_patron_id() const { return patron_id; }
time_t Transaction::get_borrow_date() const { return borrow_date; }
time_t Transaction::get_due_date() const { return due_date; }
time_t Transaction::get_return_date() const { return return_date; }
TransactionStatus Transaction::get_status() const { return status; }


// the setters
void Transaction::set_transaction_id(int transaction_id) {
    this->transaction_id = transaction_id;
}

void Transaction::set_book_isbn(const std::string& book_isbn) {
    this->book_isbn = book_isbn;
}

void Transaction::set_patron_id(int patron_id) {
    this->patron_id = patron_id;
}

void Transaction::set_borrow_date(time_t borrow_date) {
    this->borrow_date = borrow_date;
}

void Transaction::set_due_date(time_t due_date) {
    this->due_date = due_date;
}

void Transaction::set_return_date(time_t return_date) {
    this->return_date = return_date;
}

void Transaction::set_status(TransactionStatus status) {
    this->status = status;
}

Transaction::~Transaction() {}

std::string Transaction::status_to_string(TransactionStatus status) {
    if (status == TransactionStatus::OVERDUE) return "OVERDUE";
    else if (status == TransactionStatus::BORROWED) return "BORROWED";
    else return "RETURNED";
}

TransactionStatus Transaction::string_to_status(const std::string& status) {
    if (status == "OVERDUE") return TransactionStatus::OVERDUE;
    else if (status == "BORROWED") return TransactionStatus::BORROWED;
    else if (status == "RETURNED") return TransactionStatus::RETURNED;
    else throw std::invalid_argument("an unknown status passed in");
}