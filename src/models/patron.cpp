#include "models/patron.h"
#include <iostream>

Patron::Patron(
    int patron_id,
    const std::string& name,
    const std::string& email,
    const std::string& phone_number,
    MembershipStatus membership_status,
    time_t join_date
): patron_id(patron_id), name(name), email(email), phone_number(phone_number), membership_status(membership_status), join_date(join_date) {}

Patron::~Patron() = default;

// the getters
int Patron::get_patron_id() const { return patron_id; }
std::string Patron::get_name() const { return name; }
std::string Patron::get_phone_number() const { return phone_number; }
MembershipStatus Patron::get_membership_status() const { return membership_status; }
time_t Patron::get_join_date() const { return join_date; }
std::string Patron::get_email() const { return email; }

// the setters 
void Patron::set_patron_id(int patron_id) { this->patron_id = patron_id; }
void Patron::set_name(const std::string& name) { this->name = name; }
void Patron::set_phone_number(const std::string& phone_number) { this->phone_number = phone_number; }
void Patron::set_membership_status(MembershipStatus membership_status) { this->membership_status = membership_status; }
void Patron::set_join_date(time_t join_date) { this->join_date = join_date; }
void Patron::set_email(const std::string& email) { this->email = email; }

MembershipStatus Patron::string_to_status(const std::string& membership_status_str) {
    if (membership_status_str == "ACTIVE") {
        return MembershipStatus::ACTIVE;
    } else if (membership_status_str == "INACTIVE") {
        return MembershipStatus::INACTIVE;
    } else if (membership_status_str == "SUSPENDED") {
        return MembershipStatus::SUSPENDED;
    } else {
        std::cout << "invalid membership status\n";
        return MembershipStatus::INACTIVE;
    }
}

std::string Patron::status_to_string(MembershipStatus membership_status) {
    if (membership_status == MembershipStatus::ACTIVE) {
        return "ACTIVE";
    } else if (membership_status == MembershipStatus::INACTIVE) {
        return "INACTIVE";
    } else if (membership_status == MembershipStatus::SUSPENDED) {
        return "SUSPENDED";
    } else {
        std::cout << "invalid status\n";
        return "unknown";
    }
}