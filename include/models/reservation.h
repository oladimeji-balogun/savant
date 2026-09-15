/*
int reservation_id (immutable, set only in constructor)
std::string book_isbn
int patron_id
time_t reservation_date (immutable)
ReservationStatus status
*/

#ifndef RESERVATION_H
#define RESERVATION_H

#include "models/transaction.h"
#include <ctime>
#include <string>

// reservation status
enum class ReservationStatus {
    PENDING,
    READY, 
    CANCELLED
};

// the class itself
class Reservation {
    // private member variables 
    private:
        int reservation_id;
        std::string book_isbn;
        int patron_id;
        time_t reservation_date;
        TransactionStatus status;
    
    public:
        Reservation(
            int reservation_id, 
            const std::string& book_isbn,
            int patron_id,
            time_t reservation_date, 
            TransactionStatus status
        );

        // getters
        int get_reservation_id();
        std::string get_book_isbn();
        int get_patron_id();
        time_t get_reservation_date();
        TransactionStatus get_reservation_status();

        // the setters
        void set_book_isbn(const std::string& book_isbn);
        void set_patron_id(int patron_id);
        void set_reservation_status(time_t status);

        ~Reservation();







};
#endif 