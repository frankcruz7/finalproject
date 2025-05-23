#ifndef LEFTOVER_RECORD_H
#define LEFTOVER_RECORD_H

#include <string>

class LeftoverRecord {
public:
    LeftoverRecord();
    LeftoverRecord(const std::string &date,
                   const std::string &meal,
                   const std::string &food_name,
                   double quantity_oz,
                   const std::string &leftover_reason,
                   const std::string &disposal_mechanism,
                   double cost);

    std::string GetDate() const;
    std::string GetMeal() const;
    std::string GetFoodName() const;
    double GetQuantityOz() const;
    std::string GetLeftoverReason() const;
    std::string GetDisposalMechanism() const;
    double GetCost() const;

    void SetDate(const std::string &date);
    void SetMeal(const std::string &meal);
    void SetFoodName(const std::string &food_name);
    void SetQuantityOz(double quantity_oz);
    void SetLeftoverReason(const std::string &reason);
    void SetDisposalMechanism(const std::string &disposal_mechanism);
    void SetCost(double cost);

    bool operator==(const LeftoverRecord &other) const;

private:
    std::string date_;
    std::string meal_;
    std::string food_name_;
    double quantity_oz_;
    std::string leftover_reason_;
    std::string disposal_mechanism_;
    double cost_;
};

#endif