#ifndef PATRON_H
#define PATRON_H
#include <string>

enum class MembershipStatus {
    ACTIVE,
    INACTIVE,
    SUSPENDED
};

// the patron class
class Patron {
    // member variables 
    private: 
        int patron_id;
        std::string name;
        std::string email;
        std::string phone_number;
        MembershipStatus membership_status;
        time_t join_date;

    
    public:
        // the constructor
        Patron(
            int patron_id,
            const std::string& name,
            const std::string& email,
            const std::string& phone_number,
            MembershipStatus membership_status,
            time_t join_date
        );

        // the getters 
        int get_patron_id() const;
        std::string get_name() const;
        std::string get_email() const;
        std::string get_phone_number() const;
        MembershipStatus get_membership_status() const;
        time_t get_join_date() const;

        // the setters
        void set_patron_id(int patron_id);
        void set_name(const std::string& name);
        void set_email(const std::string& email);
        void set_phone_number(const std::string& phone_number);
        void set_membership_status(MembershipStatus membership_status);
        void set_join_date(time_t join_date);

        // the destructor
        ~Patron();

        std::string status_to_string(MembershipStatus membership_status_t);
        MembershipStatus string_to_status(const std::string& membership_status_str);
};

#endif