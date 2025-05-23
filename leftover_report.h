#ifndef LEFTOVER_REPORT_H
#define LEFTOVER_REPORT_H

#include <vector>
#include <string>

class LeftoverReport {
public:
    LeftoverReport();

    LeftoverReport(const std::vector<class LeftoverRecord> &records);

    std::vector<std::string> GetMostCommonLeftovers() const;
    std::vector<std::string> GetMostCostlyMeals() const;
    double GetTotalLeftoverCost() const;
    std::vector<std::string> GetMostCommonReasons() const;
    std::vector<std::string> GetMostCommonDisposals() const;
    std::vector<std::string> GetSuggestedStrategies() const;

private:
    std::vector<std::string> most_common_leftovers_;
    std::vector<std::string> most_costly_meals_;
    double total_leftover_cost_;
    std::vector<std::string> most_common_reasons_;
    std::vector<std::string> most_common_disposals_;
    std::vector<std::string> suggested_strategies_;
};

#endif