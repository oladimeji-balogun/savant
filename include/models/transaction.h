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

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <ctime>
#include <string>

enum class TransactionStatus {
    BORROWED,
    RETURNED,
    OVERDUE
};

class Transaction {
    private:
        int transaction_id;
        std::string book_isbn;
        int patron_id;
        time_t borrow_date;
        time_t due_date;
        time_t return_date;
        TransactionStatus status;

    public:
    // the getters
        int get_transaction_id() const;
        std::string get_book_isbn() const;
        int get_patron_id() const;
        time_t get_borrow_date() const;
        time_t get_due_date() const;
        time_t get_return_date() const;
        TransactionStatus get_status() const;

        // the settiers
        void set_transaction_id(int transaction_id);
        void set_book_isbn(const std::string& book_isbn);
        void set_patron_id(int patron_id);
        void set_borrow_date(time_t date);
        void set_due_date(time_t date);
        void set_return_date(time_t date);
        void set_status(TransactionStatus status);

        // constructor 
        Transaction(
            int transaction_id,
            const std::string& book_isbn,
            int patron_id,
            time_t borrow_date,
            time_t due_date,
            time_t return_date,
            TransactionStatus status
        );

        // desctructor
        ~Transaction();

        std::string status_to_string(TransactionStatus status);
        TransactionStatus string_to_status(const std::string& status);


};
#endif